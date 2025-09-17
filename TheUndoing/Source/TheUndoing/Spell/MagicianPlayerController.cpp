#include "MagicianPlayerController.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/UserInterfaceSettings.h"
#include "Runtime/Engine/Classes/Engine/RendererSettings.h"
#include "UnistrokeRecognizer.h"
#include "PaintWidget.h"
#include "UnistrokeDataTable.h"
#include "MagicianPawn.h"
#include "EnhancedInputComponent.h"
#include "Blueprint/UserWidget.h"
#include "Engine/UserInterfaceSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LocalPlayer.h"
#include "TimerManager.h"
#include "Engine/Engine.h"


AMagicianPlayerController::AMagicianPlayerController()
{
	Recognizer = new FUnistrokeRecognizer(); // -- Maybe needs to be freed in EndPlay()

	static ConstructorHelpers::FObjectFinder<UDataTable> UnistrokeTemplatesTable(TEXT("DataTable'/Game/DataTables/Templates.Templates'"));
	if (UnistrokeTemplatesTable.Succeeded())
	{
		UnistrokeTable = UnistrokeTemplatesTable.Object;
		LoadTemplates();
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> TrainWidgetClassRef(TEXT("/Game/Blueprints/WBP_Train"));
	TrainWidgetClass = TrainWidgetClassRef.Class;
}

void AMagicianPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Defer widget creation until we have a LocalPlayer (fixes: "no attached player")
	TryInitUI();

	/*FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	bShowMouseCursor = true;

	SetInputMode(InputMode);*/

	IsTraining = false;

	CurrentAction = Action::Idle;
}

void AMagicianPlayerController::TryInitUI()
{
	// Apparently only the owning client should create HUD widgets
	if (!IsLocalController())
		return;

	// Checks for a LocalPlayer before CreateWidget(this, ...)
	if (!GetLocalPlayer())
	{
		// Try again next tick, in case LocalPlayer arrives a frame later
		GetWorldTimerManager().SetTimerForNextTick(this, &AMagicianPlayerController::TryInitUI);
		return;
	}

	// Paint widget
	if (!PaintWidget)
	{
		if (PaintWidgetClass)
			PaintWidget = CreateWidget<UPaintWidget>(this, PaintWidgetClass);
		else
			PaintWidget = CreateWidget<UPaintWidget>(this, UPaintWidget::StaticClass());

		if (PaintWidget)
		{
			PaintWidget->AddToViewport();
			HidePaintWidget();
		}
	}

	// Train widget
	if (!TrainWidget && TrainWidgetClass)
	{
		TrainWidget = CreateWidget<UUserWidget>(this, TrainWidgetClass);
		if (TrainWidget)
		{
			TrainWidget->AddToViewport();
			HideTrainWidget(); 
		}
	}
}

void AMagicianPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (!InputComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("MagicianPlayerController: No InputComponent found yet!"));
		return;
	}

	InputComponent->BindAction("PaintButton", IE_Pressed, this, &AMagicianPlayerController::PressedToPaint);
	InputComponent->BindAction("PaintButton", IE_Released, this, &AMagicianPlayerController::ReleasedToPaint);
	InputComponent->BindKey(EKeys::T, IE_Pressed, this, &AMagicianPlayerController::TogglePaintMode);
}

void AMagicianPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentAction == Action::Paint)
	{
		// Just to be sure
		if (!PaintWidget || !GEngine || !GEngine->GameViewport || !GEngine->GameViewport->Viewport) 
			return; 

		const TArray<FVector2D> Points = PaintWidget->GetPoints();

		float MouseX = 0.0f;
		float MouseY = 0.0f;
		GetMousePosition(MouseX, MouseY);

		const FVector2D MousePoint = FVector2D(MouseX, MouseY);
		const FVector2D viewportSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());
		const float viewportScale = GetDefault<UUserInterfaceSettings>(UUserInterfaceSettings::StaticClass())->GetDPIScaleBasedOnSize(FIntPoint(viewportSize.X, viewportSize.Y));
		const FVector2D ScaledPoint = MousePoint / viewportScale;

		const FVector2D LastPoint = Points.Num() > 0 ? Points.Last() : ScaledPoint;
		const bool IsNewPoint = !LastPoint.Equals(ScaledPoint, 1.0f);

		if (Points.Num() == 0 || (Points.Num() > 0 && IsNewPoint))
		{
			PaintWidget->AddPoint(ScaledPoint);
		}
	}
}

void AMagicianPlayerController::PressedToPaint()
{
	if (!bIsPaintingMode)
	{
		// Notifies that painting mode is off
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Press T to enable painting mode"));
		return;
	}

	if (CurrentAction != Action::Train)
	{
		// Ensure widget exists
		if (!PaintWidget) { TryInitUI(); if (!PaintWidget) return; }

		// Ensure pawn exists (avoid “pending kill” access, whatever that means)
		if (!IsValid(GetPawn())) return;

		CurrentAction = Action::Paint;
	}
}
void AMagicianPlayerController::ReleasedToPaint()
{
	if (CurrentAction == Action::Paint)
		CurrentAction = IsTraining ? Action::Train : Action::Recognize;

	switch (CurrentAction)
	{
	case Action::Recognize:
		Spell();
		break;
	case  Action::Train:
		if (PaintWidget && PaintWidget->GetPoints().Num() > 2)
			ShowTrainWidget();
		break;
	default:
		break;
	}
}

void AMagicianPlayerController::TogglePaintMode()
{
	if (bIsPaintingMode) 
	{ 
		ExitPaintMode(0.5f); 
	}
	else 
	{ 
		EnterPaintMode(nullptr, 0.5f); 
	}
}


void AMagicianPlayerController::EnterPaintMode(AActor* NewCamera, float BlendTime)
{
	if (bIsPaintingMode) return;
	bIsPaintingMode = true;

	// Save current view target so we can restore later
	SavedViewTarget = GetViewTarget();

	// Optional camera blend (debugging)
	if (NewCamera)
	{
		SetViewTargetWithBlend(NewCamera, BlendTime, EViewTargetBlendFunction::VTBlend_Cubic);
	}

	// Safety check, init UI
	TryInitUI();
	if (PaintWidget)
		PaintWidget->SetVisibility(ESlateVisibility::Visible);

	// Cursor + input mode
	bShowMouseCursor = true;
	FInputModeGameAndUI Mode;
	Mode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	Mode.SetHideCursorDuringCapture(false);
	SetInputMode(Mode);

	// Disable gameplay movement- and look input
	SetIgnoreMoveInput(true);
	SetIgnoreLookInput(true);

	// If Character has SetInputEnabled(bool), you can also remove gameplay context locally:
	//if (APawn* P = GetPawn())
	//{
	//	if (auto* PC = Cast<APlayerCharacter>(P))
	//		PC->SetInputEnabled(false);  // uses your existing helper in Character
	//}
}

void AMagicianPlayerController::ExitPaintMode(float BlendTime)
{
	if (!bIsPaintingMode) return;
	bIsPaintingMode = false;

	// Restore view target
	if (AActor* Saved = SavedViewTarget.Get())
		SetViewTargetWithBlend(Saved, BlendTime, EViewTargetBlendFunction::VTBlend_Cubic);
	else if (APawn* P = GetPawn())
		SetViewTarget(P);
	SavedViewTarget = nullptr;

	// Hide UI
	if (PaintWidget)
		PaintWidget->SetVisibility(ESlateVisibility::Hidden);

	// Back to game-only input mode if you want
	bShowMouseCursor = false;
	SetInputMode(FInputModeGameOnly{});

	// Re-enable movement- and look input
	SetIgnoreMoveInput(false);
	SetIgnoreLookInput(false);

	// Re-enable gameplay input mapping on local
	/*if (APawn* P = GetPawn())
	{
		if (auto* PC = Cast<APlayerCharacter>(P))
			PC->SetInputEnabled(true);
	}*/

	// If you were painting when toggled off
	if (CurrentAction == Action::Paint)
		CurrentAction = Action::Idle;
}

void AMagicianPlayerController::Spell()
{
	TArray<FVector2D>CurrentPoints = PaintWidget->GetPoints();
	FUnistrokeResult Result = Recognizer->Recognize(CurrentPoints, false);

	bool bSpellSucceeded = Result.Score >= 0.8f;

	if (bSpellSucceeded)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Result.Name, true, FVector2D(2, 2));

		ExitPaintMode();
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "No Magic", true, FVector2D(2, 2));	
	}

	// Send package to listening blueprints
	FSpellRecognitionResult Payload;
	Payload.bSuccess = bSpellSucceeded;
	Payload.Name = Result.Name;
	Payload.Score = Result.Score;
	OnSpellRecognized.Broadcast(Payload);

	PaintWidget->RemoveAllPoints();

	CurrentAction = Action::Idle;
}

void AMagicianPlayerController::LoadTemplates()
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(
			-1,                     // Key (-1 means "new message")
			5.f,                    // Display time in seconds
			FColor::Yellow,          // Text color
			TEXT("Loading templates...") // Message
		);
	}

	if (UnistrokeTable != nullptr)
	{
		if (GEngine) {
				GEngine->AddOnScreenDebugMessage(
				-1,                     // Key (-1 means "new message")
				5.f,                    // Display time in seconds
				FColor::Green,          // Text color
				TEXT("Templates found!!") // Message
			);
		}

		const FString ContextString = "Templates";
		TArray<FUnistrokeDataTable*> Rows;

		UnistrokeTable->GetAllRows<FUnistrokeDataTable>(ContextString, Rows);

		for (int i = 0; i < Rows.Num(); i++)
		{
			Recognizer->AddTemplate((*Rows[i]).Name, (*Rows[i]).Points);
		}
	}
}

void AMagicianPlayerController::TrainMode(const bool Is)
{
	IsTraining = Is;

	if (IsTraining)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "Train mode is ON", true, FVector2D(2, 2));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "Train mode is OFF", true, FVector2D(2, 2));
	}
}

void AMagicianPlayerController::AddTemplateToDataTable(const FString Name)
{
	FUnistrokeDataTable DataRow;

	DataRow.Name = Name;
	DataRow.Points = PaintWidget->GetPoints();

	const FString ContextString = "Templates";
	TArray<FUnistrokeDataTable*> Rows;

	UnistrokeTable->GetAllRows<FUnistrokeDataTable>(ContextString, Rows);

	int RowNum = Rows.Num() + 1;

	UnistrokeTable->AddRow(FName(*FString::FromInt(RowNum)), DataRow);

	Recognizer->AddTemplate(Name, PaintWidget->GetPoints());

	HideTrainWidget();

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "New Gesture was added", true, FVector2D(2, 2));
}

void AMagicianPlayerController::ShowTrainWidget()
{
	if (TrainWidget != nullptr)
	{
		TrainWidget->SetVisibility(ESlateVisibility::Visible);
		CurrentAction = Action::Train;
	}
}

void AMagicianPlayerController::HideTrainWidget()
{
	if (TrainWidget != nullptr)
	{
		if (PaintWidget) PaintWidget->RemoveAllPoints(); // enGUARD!

		TrainWidget->SetVisibility(ESlateVisibility::Hidden);
		CurrentAction = Action::Idle;
	}
}

void AMagicianPlayerController::ShowPaintWidget()
{
	if (PaintWidget != nullptr)
	{
		PaintWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMagicianPlayerController::HidePaintWidget()
{
	if (PaintWidget != nullptr)
	{
		PaintWidget->SetVisibility(ESlateVisibility::Hidden);
	}
}

void AMagicianPlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (Recognizer)
	{
		delete Recognizer;
		Recognizer = nullptr;
	}
}

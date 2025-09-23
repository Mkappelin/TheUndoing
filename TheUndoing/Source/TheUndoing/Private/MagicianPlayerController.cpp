#include "MagicianPlayerController.h"

// --- Enhanced Input (needed for mapping context, input binding) ---
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"

// --- Game / Pawn (needed because we forward input to pawn/character) ---
#include "MagicianPlayerCharacter.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// --- Unistroke / Custom Classes ---
#include "SpellCasting/UnistrokeRecognizer.h"
#include "SpellCasting/UnistrokeDataTable.h"
#include "SpellCasting/PaintWidget.h"

// --- UI / Widgets ---
#include "Blueprint/UserWidget.h"
#include "Engine/UserInterfaceSettings.h"

// --- Engine Utilities ---
#include "UObject/ConstructorHelpers.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Engine/Engine.h"

AMagicianPlayerController::AMagicianPlayerController()
{
	Recognizer = new FUnistrokeRecognizer();

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

	AddDefaultIMC();

	// Defer widget creation until we have a LocalPlayer (fixes: "no attached player")
	TryInitUI();

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


	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent))
	{
		try 
		{
			EIC->BindAction(MovementAction, ETriggerEvent::Triggered, this, &AMagicianPlayerController::OnMove);
			EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMagicianPlayerController::OnLook);

			EIC->BindAction(JumpAction, ETriggerEvent::Started, this, &AMagicianPlayerController::OnJumpStarted);
			EIC->BindAction(JumpAction, ETriggerEvent::Completed, this, &AMagicianPlayerController::OnJumpCompleted);

			EIC->BindAction(SprintAction, ETriggerEvent::Started, this, &AMagicianPlayerController::OnSprintStarted);
			EIC->BindAction(SprintAction, ETriggerEvent::Completed, this, &AMagicianPlayerController::OnSprintCompleted);

			EIC->BindAction(PaintAction, ETriggerEvent::Started, this, &AMagicianPlayerController::PressedToPaint);
			EIC->BindAction(PaintAction, ETriggerEvent::Completed, this, &AMagicianPlayerController::ReleasedToPaint);
			EIC->BindAction(TogglePaintModeAction, ETriggerEvent::Started, this, &AMagicianPlayerController::TogglePaintMode);
		}
		catch (...) 
		{ 
			UE_LOG(LogTemp, Warning, TEXT("MagicianPlayerController: Exception during binding input actions!")); 
		}
	}
}
void AMagicianPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AddDefaultIMC();
}
void AMagicianPlayerController::OnUnPossess()
{
	Super::OnUnPossess();

	// TIP: Remove or switch to a spectate IMC here.
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
	if (bIsPaintingMode) {
		if (CurrentAction != Action::Train)
		{
			// Ensure widget exists
			if (!PaintWidget) { TryInitUI(); if (!PaintWidget) return; }

			// Ensure pawn exists (avoid “pending kill” access, whatever that means)
			if (!IsValid(GetPawn())) return;

			CurrentAction = Action::Paint;
		}
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
	if (UnistrokeTable != nullptr)
	{

		const FString ContextString = "Templates";
		TArray<FUnistrokeDataTable*> Rows;

		UnistrokeTable->GetAllRows<FUnistrokeDataTable>(ContextString, Rows);

		for (int i = 0; i < Rows.Num(); i++)
		{
			Recognizer->AddTemplate((*Rows[i]).Name, (*Rows[i]).Points);
		}
	}
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(
				-1,                     // Key (-1 means "new message")
				5.f,                    // Display time in seconds
				FColor::Red,            // Text color
				TEXT("No Templates found!!") // Message
			);
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

// --- Input callbacks ---

void AMagicianPlayerController::OnMove(const FInputActionValue& Value)
{
	if (bIsPaintingMode) return;
	if (auto* C = Cast<AMagicianPlayerCharacter>(GetPawn()))
	{
		if (C->IsInputEnabled())  // your flag on the character
			C->Move(Value);
	}
}

void AMagicianPlayerController::OnLook(const FInputActionValue& Value)
{
	if (bIsPaintingMode) return;
	if (auto* C = Cast<AMagicianPlayerCharacter>(GetPawn()))
	{
		if (C->IsInputEnabled())
			C->Look(Value);
	}
}

//void AMagicianPlayerController::OnJumpStarted(const FInputActionValue&)
//{
//	if (bIsPaintingMode) return;
//	if (auto* AC = Cast<ACharacter>(GetPawn()))
//		AC->Jump();
//}
//void AMagicianPlayerController::OnJumpCompleted(const FInputActionValue&)
//{
//	if (auto* AC = Cast<ACharacter>(GetPawn()))
//		AC->StopJumping();
//}

void AMagicianPlayerController::OnSprintStarted(const FInputActionValue& V)
{
	if (bIsPaintingMode) return;
	if (auto* C = Cast<AMagicianPlayerCharacter>(GetPawn()))
	{
		if (C->IsInputEnabled())
			C->SprintStart(V);
	}
}
void AMagicianPlayerController::OnSprintCompleted(const FInputActionValue& V)
{
	if (auto* C = Cast<AMagicianPlayerCharacter>(GetPawn()))
	{
		if (C->IsInputEnabled())
			C->SprintStop(V);
	}
}

void AMagicianPlayerController::AddDefaultIMC()
{
	if (ULocalPlayer* LP = GetLocalPlayer())
	{
		if (auto* Subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
		{
			if (DefaultMappingContext)
			{
				Subsys->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
}

void AMagicianPlayerController::RemoveDefaultIMC()
{
	if (ULocalPlayer* LP = GetLocalPlayer())
	{
		if (auto* Subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
		{
			if (DefaultMappingContext)
			{
				Subsys->RemoveMappingContext(DefaultMappingContext);
			}
		}
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

// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicianPlayerController.h"

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

	// Create Paint Widget
	PaintWidget = CreateWidget<UPaintWidget>(this, UPaintWidget::StaticClass());
	if (PaintWidget != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,                     // Key (-1 means "new message")
			5.f,                    // Display time in seconds
			FColor::Green,          // Text color
			TEXT("Paint widget made") // Message
		);

		PaintWidget->AddToViewport();
		PaintWidget->SetVisibility(ESlateVisibility::Visible);
	}

	// Create Train Widget
	TrainWidget = CreateWidget<UUserWidget>(this, TrainWidgetClass);
	if (TrainWidget != nullptr)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,                     // Key (-1 means "new message")
				5.f,                    // Display time in seconds
				FColor::Green,          // Text color
				TEXT("Train widget made") // Message
			);
		}

		TrainWidget->AddToViewport();
		HideTrainWidget();
	}

	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	bShowMouseCursor = true;

	SetInputMode(InputMode);

	IsTraining = false;

	CurrentAction = Action::Idle;
}

void AMagicianPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Legacy input (Maybe needs conversion to EIC)
	check(InputComponent);
	InputComponent->BindAction("PaintButton", IE_Pressed, this, &AMagicianPlayerController::PressedToPaint);
	InputComponent->BindAction("PaintButton", IE_Released, this, &AMagicianPlayerController::ReleasedToPaint);
	InputComponent->BindKey(EKeys::T, IE_Pressed, this, &AMagicianPlayerController::TogglePaintMode);
}

void AMagicianPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentAction == Action::Paint)
	{
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
	if (bIsPaintingMode && CurrentAction != Action::Train)
	{
		CurrentAction = Action::Paint;
	}
	// Optionally add else case to handle when trying to paint without toggle
	else if (!bIsPaintingMode)
	{
		// Optional: Provide feedback that painting mode is off
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Press T to enable painting mode"));
	}
}

void AMagicianPlayerController::TogglePaintMode()
{
	bIsPaintingMode = !bIsPaintingMode;

	// Optional: Add visual feedback or debug message
	if (bIsPaintingMode)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Painting Mode: ON"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Painting Mode: OFF"));
		// Optionally reset current action if painting was active
		if (CurrentAction == Action::Paint)
		{
			CurrentAction = Action::Idle; // Or whatever your default action should be
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
		if (PaintWidget->GetPoints().Num() > 2)
			ShowTrainWidget();
		break;
	default:
		break;
	}
}

// TODO: Implement spell event
void AMagicianPlayerController::Spell()
{
	TArray<FVector2D>CurrentPoints = PaintWidget->GetPoints();
	FUnistrokeResult Result = Recognizer->Recognize(CurrentPoints, false);

	if (Result.Score < 0.8f)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "No Magic", true, FVector2D(2, 2));
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Result.Name, true, FVector2D(2, 2));
		AMagicianPawn* MagicianaPawn = Cast<AMagicianPawn>(GetPawn());
		MagicianaPawn->SpawnShape(Result.Name);
	}

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
		PaintWidget->RemoveAllPoints();
		TrainWidget->SetVisibility(ESlateVisibility::Hidden);
		CurrentAction = Action::Idle;
	}
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "MagicianPlayerController.generated.h"


USTRUCT(BlueprintType)
struct FSpellRecognitionResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	bool bSuccess = false;

	UPROPERTY(BlueprintReadOnly)
	FString Name;

	UPROPERTY(BlueprintReadOnly)
	float Score = 0.f;
};

// Delegate for broadcasting spell recognition results
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpellRecognized, const FSpellRecognitionResult&, Result);

// --- Forward declarations ---
class UUserWidget;
class UPaintWidget;
class UDataTable;
class UInputMappingContext;
class UInputAction;
struct FUnistrokeRecognizer;

enum Action { Idle, Paint, Recognize, Train };

UCLASS()
class THEUNDOING_API AMagicianPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void TrainMode(const bool Is);

	AMagicianPlayerController();

	UPROPERTY(BlueprintAssignable, Category = "Spells")
	FOnSpellRecognized OnSpellRecognized;

	// --- Public Engine Overrides ---
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override; // Cleanup for heap allocation

	// --- State ---
	UPROPERTY(EditAnywhere, Category = "State")
	bool bIsPaintingMode;

	// --- Input Actions + Mapping Context ---
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* DefaultMappingContext = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* MovementAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* JumpAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* SprintAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* PaintAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* TogglePaintModeAction;

	// --- Public API for UI ---
	UFUNCTION(BlueprintCallable) void TogglePaintMode();

	UFUNCTION(BlueprintCallable) void EnterPaintMode(AActor* OptionalCamera = nullptr, float BlendTime = 0.5f);
	UFUNCTION(BlueprintCallable) void ExitPaintMode(float BlendTime = 0.5f);

	UFUNCTION(BlueprintCallable) void ShowTrainWidget();
	UFUNCTION(BlueprintCallable) void HideTrainWidget();
	UFUNCTION(BlueprintCallable) void ShowPaintWidget();
	UFUNCTION(BlueprintCallable) void HidePaintWidget();

	UFUNCTION(BlueprintCallable) void AddTemplateToDataTable(const FString Name);

private:
	// --- Initialisation ---
	UFUNCTION() void TryInitUI();

	// --- Input Mapping Context ---
	void AddDefaultIMC();
	void RemoveDefaultIMC();

	// --- State ---
	UPROPERTY() TWeakObjectPtr<AActor> SavedViewTarget;

	Action CurrentAction = Action::Idle;
	UPROPERTY() bool IsTraining;

	// --- UI (classes + live widgets) ---
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget>  TrainWidgetClass; // maybe keep StaticClass fallback

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UPaintWidget> PaintWidgetClass; // maybe keep StaticClass fallback

	UPROPERTY() UUserWidget* TrainWidget;
	UPROPERTY() UPaintWidget* PaintWidget;

	// --- Data / recognition ---
	UPROPERTY() UDataTable* UnistrokeTable; 
	FUnistrokeRecognizer* Recognizer;		// heap-owned; freed in EndPlay

	// --- Spell Helpers ---
	void PressedToPaint();
	void ReleasedToPaint();
	void LoadTemplates();
	void Spell();

	// --- Forwards to Player Pawn --- 
	void OnMove(const FInputActionValue& Value);
	void OnLook(const FInputActionValue& Value);
	void OnJumpStarted(const FInputActionValue& Value);
	void OnJumpCompleted(const FInputActionValue& Value);
	void OnSprintStarted(const FInputActionValue& Value);
	void OnSprintCompleted(const FInputActionValue& Value);

};

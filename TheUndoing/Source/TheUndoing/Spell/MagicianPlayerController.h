// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MagicianPlayerController.generated.h"

// --- Forward declarations ---
class UUserWidget;
class UPaintWidget;
class UDataTable;
struct FUnistrokeRecognizer;

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

enum Action { Idle, Paint, Recognize, Train };

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpellRecognized, const FSpellRecognitionResult&, Result);

UCLASS()
class THEUNDOING_API AMagicianPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void TrainMode(const bool Is);
	// --- State ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	bool bIsPaintingMode;
	AMagicianPlayerController();

	UPROPERTY(BlueprintAssignable, Category = "Spells")
	FOnSpellRecognized OnSpellRecognized;

	// --- Engine Overrides ---
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// --- Public API for UI ---
	UFUNCTION(BlueprintCallable) void TogglePaintMode();


	UFUNCTION(BlueprintCallable) void EnterPaintMode(AActor* OptionalCamera = nullptr, float BlendTime = 0.5f);
	UFUNCTION(BlueprintCallable) void ExitPaintMode(float BlendTime = 0.5f);

	UFUNCTION(BlueprintCallable) void ShowTrainWidget();
	UFUNCTION(BlueprintCallable) void HideTrainWidget();
	UFUNCTION(BlueprintCallable) void ShowPaintWidget();
	UFUNCTION(BlueprintCallable) void HidePaintWidget();

	UFUNCTION(BlueprintCallable) void AddTemplateToDataTable(const FString Name);

protected:

	virtual void SetupInputComponent() override;

	// Cleanup for heap allocation
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	// --- Lazy init for UI ---
	UFUNCTION() void TryInitUI();

private:


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

	// --- Private helpers ---
	void PressedToPaint();
	void ReleasedToPaint();
	void LoadTemplates();
	void Spell();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/UserInterfaceSettings.h"
#include "Runtime/Engine/Classes/Engine/RendererSettings.h"
#include "UnistrokeRecognizer.h"
#include "PaintWidget.h"
#include "UnistrokeDataTable.h"
#include "MagicianPawn.h"
#include "EnhancedInputComponent.h"
#include "MagicianPlayerController.generated.h"

enum Action { Idle, Paint, Recognize, Train };

UCLASS()
class THEUNDOING_API AMagicianPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void TrainMode(const bool Is);

	AMagicianPlayerController();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void ShowTrainWidget();
	void HideTrainWidget();
	void AddTemplateToDataTable(const FString Name);
	
	void TogglePaintMode();
	bool bIsPaintingMode = false;

protected:
	virtual void SetupInputComponent() override;

private:
	void PressedToPaint();
	void ReleasedToPaint();
	void LoadTemplates();
	void Spell();

	UDataTable* UnistrokeTable;
	UPaintWidget* PaintWidget;
	UUserWidget* TrainWidget;
	TSubclassOf<UUserWidget> TrainWidgetClass;
	FUnistrokeRecognizer* Recognizer;
	int CurrentAction;
	bool IsTraining;

};

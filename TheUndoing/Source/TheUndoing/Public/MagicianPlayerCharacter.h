// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MagicianPlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UArrowComponent;
class UPhysicsHandleComponent;
class UUserWidget;

struct FInputActionValue;


UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API AMagicianPlayerCharacter : public ACharacter
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	AMagicianPlayerCharacter();

	// Setter and getter for managing input enabling/disabling
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetInputEnabled(bool bEnable);

	UFUNCTION(BlueprintCallable, Category = "Input")
	bool IsInputEnabled() const { return bInputEnabled; }

	/*
	* Callback methods
	*/
	UFUNCTION() void Move(const FInputActionValue& Value);
	UFUNCTION() void Look(const FInputActionValue& Value);
	UFUNCTION() void SprintStart(const FInputActionValue& Value);
	UFUNCTION() void SprintStop(const FInputActionValue& Value);

protected:
	virtual void FaceRotation(FRotator NewControlRotation, float DeltaTime = 0.f) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	/*
	* Variables
	*/

	// Input Proporties
	bool bInputEnabled = true;

	// Camera Proporties
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* CameraBoom{};

	UPROPERTY(VisibleAnywhere, Category = "Camera", BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera{};

	// Movement Proporties
	UPROPERTY(EditAnywhere, Category = "Movement")
	float WalkSpeed{ 200.f };
	UPROPERTY(EditAnywhere, Category = "Movement")
	float SprintSpeed{ 600.f };
};
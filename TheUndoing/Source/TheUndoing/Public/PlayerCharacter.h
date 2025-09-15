// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UArrowComponent;
class UPhysicsHandleComponent;
class UUserWidget;

struct FInputActionValue;


UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	APlayerCharacter();

	// Setter and getter for managing input enabling/disabling
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetInputEnabled(bool bEnable);

	UFUNCTION(BlueprintCallable, Category = "Input")
	bool IsInputEnabled() const { return bInputEnabled; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

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

	/*
	* Callback methods
	*/
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	void SprintStart(const FInputActionValue& Value);
	void SprintStop(const FInputActionValue& Value);

	/*
	* Input Actions
	*/
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<class UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MovementAction{};

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* SprintAction{};

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction{};

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction{};

};
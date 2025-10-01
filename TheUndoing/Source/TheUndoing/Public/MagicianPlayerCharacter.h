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

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	/*
	* Variables
	*/

	// Camera Proporties
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* CameraBoom{};

	UPROPERTY(VisibleAnywhere, Category = "Camera", BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera{};
};
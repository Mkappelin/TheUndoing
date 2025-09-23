// Fill out your copyright notice in the Description page of Project Settings.

// TODO: Remake the controller inputs to character inputs

#include "MagicianPlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/InputComponent.h"
#include "Components/ArrowComponent.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "Kismet/KismetSystemLibrary.h"

//#include <Subsystems/PanelExtensionSubsystem.h>
#include "Blueprint/UserWidget.h"

// Sets default values
AMagicianPlayerCharacter::AMagicianPlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Camera Boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bUsePawnControlRotation = true;

	// Create Camera Follow
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	auto* Move = GetCharacterMovement();
	Move->MaxWalkSpeed = WalkSpeed;          // e.g. 500
	Move->MaxAcceleration = 2048.f;                 // accel rate (units/s^2)
	Move->BrakingDecelerationWalking = 1000.0f;      // how fast you slow down
	Move->GroundFriction = 8.f;
}

// Called when the game starts or when spawned
void AMagicianPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;

	}

}

// Called every frame
void AMagicianPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMagicianPlayerCharacter::SetInputEnabled(bool bEnable)
{
	if (bInputEnabled == bEnable) return;

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (ULocalPlayer* LP = PC->GetLocalPlayer())
		{
			bInputEnabled = bEnable;
		}
	}
}

void AMagicianPlayerCharacter::SprintStart(const FInputActionValue& Value)
{
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}
void AMagicianPlayerCharacter::SprintStop(const FInputActionValue& Value)
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AMagicianPlayerCharacter::Move(const FInputActionValue& Value)
{
	if (Controller == nullptr) return;

	const FVector2D MovementVector = Value.Get<FVector2D>();

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);
	const FVector Forward = FRotationMatrix(YawRotation).GetScaledAxis(EAxis::X);
	const FVector Right = FRotationMatrix(YawRotation).GetScaledAxis(EAxis::Y);

	AddMovementInput(Forward, MovementVector.Y);
	AddMovementInput(Right, MovementVector.X);

}

void AMagicianPlayerCharacter::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerPitchInput(LookAxisVector.Y);
		AddControllerYawInput(LookAxisVector.X);
	}
}

void AMagicianPlayerCharacter::FaceRotation(FRotator NewControlRotation, float DeltaTime)
{
	if (bInputEnabled) 
	{
		Super::FaceRotation(NewControlRotation, DeltaTime);
	}
	
}
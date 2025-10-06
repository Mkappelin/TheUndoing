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
    PrimaryActorTick.bCanEverTick = true;

    // Character should not rotate with controller
    bUseControllerRotationYaw = false;
    bUseControllerRotationPitch = false;
    bUseControllerRotationRoll = false;

    // Let movement component handle rotation
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);

    // Create Camera Boom
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->bUsePawnControlRotation = false;
    CameraBoom->TargetArmLength = 800.f;
    CameraBoom->SetRelativeRotation(FRotator(-45.f, -135.f, 0.f));

    // Create Follow Camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    FollowCamera->bUsePawnControlRotation = false;

}

// Called when the game starts or when spawned
void AMagicianPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMagicianPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

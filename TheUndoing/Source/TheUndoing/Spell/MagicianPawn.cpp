// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicianPawn.h"

// Sets default values
AMagicianPawn::AMagicianPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMagicianPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagicianPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMagicianPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMagicianPawn::SpawnShape(const FString& Name)
{
	if (ShapeMap.Contains(Name))
	{
		FTransform ShapeTransform = FTransform();
		float y = FMath::RandRange(-350, 350);
		ShapeTransform.SetLocation(FVector(350, y, 350));
		GetWorld()->SpawnActor<AActor>(ShapeMap[Name], ShapeTransform);
	}
}
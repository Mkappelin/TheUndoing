// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyCombatHandler.generated.h"

/**
 * 
 */
UCLASS()
class THEUNDOING_API UEnemyCombatHandler : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Combat")
    float GetNextAttackTimer(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy);

private:
    UPROPERTY()
    UEnemyAttackBehaviorTree* AttackBehaviorTree;
};
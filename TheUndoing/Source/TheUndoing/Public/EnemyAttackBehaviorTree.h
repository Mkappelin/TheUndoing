// EnemyAttackBehaviorTree.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTreeSelector.h"
#include "BehaviorTreeSequence.h"
#include "BehaviorTreeConditions.h"
#include "EnemyAttackBehaviorTree.generated.h"

UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API UEnemyAttackBehaviorTree : public UObject
{
    GENERATED_BODY()

public:
    UEnemyAttackBehaviorTree();

    UFUNCTION(BlueprintCallable, Category = "Behavior Tree")
    float CalculateAttackTimer(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy);

    UFUNCTION(BlueprintCallable, Category = "Behavior Tree", meta = (WorldContext = "WorldContextObject"))
    static float CalculateAttackTimerDirect(UObject* WorldContextObject, float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy);

    UFUNCTION(BlueprintCallable, Category = "Behavior Tree")
    void SetMaxEnemyHP(int32 NewMaxHP);

    UFUNCTION(BlueprintCallable, Category = "Behavior Tree")
    void BuildBehaviorTree();

private:
    void SetupProperTreeStructure();
    void EnsureTreeInitialized();

    UPROPERTY()
    UBehaviorTreeSelector* RootSelector;

    UPROPERTY()
    int32 MaxEnemyHP;

    UPROPERTY()
    bool bTreeInitialized;
};
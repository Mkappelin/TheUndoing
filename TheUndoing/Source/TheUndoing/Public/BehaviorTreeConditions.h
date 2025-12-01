// BehaviorTreeConditions.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTreeNode.h"
#include "BehaviorTreeConditions.generated.h"

// Block Condition
UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API UBTCondition_BlockAndTimer : public UBehaviorTreeNode
{
    GENERATED_BODY()

public:
    virtual ECustomBTNodeResult ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer) override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Condition")
    float TimerThreshold = 1.0f;
};

// Player Accuracy Condition
UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API UBTCondition_LowPlayerAccuracy : public UBehaviorTreeNode
{
    GENERATED_BODY()

public:
    virtual ECustomBTNodeResult ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer) override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Condition")
    float AccuracyThreshold = 0.3f;
};

// Enemy HP Below 50% Condition, cba changing class name
UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API UBTCondition_EnemyHPBelow33Percent : public UBehaviorTreeNode
{
    GENERATED_BODY()

public:
    virtual ECustomBTNodeResult ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer) override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Condition")
    int32 MaxEnemyHP = 500;
};

// Enemy HP Below 66% Condition
UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API UBTCondition_EnemyHPBelow66Percent : public UBehaviorTreeNode
{
    GENERATED_BODY()

public:
    virtual ECustomBTNodeResult ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer) override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Condition")
    int32 MaxEnemyHP = 500;
};

// Default Condition
UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API UBTCondition_Default : public UBehaviorTreeNode
{
    GENERATED_BODY()

public:
    virtual ECustomBTNodeResult ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer) override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Condition")
    float DefaultTimer = 2.0f;
};
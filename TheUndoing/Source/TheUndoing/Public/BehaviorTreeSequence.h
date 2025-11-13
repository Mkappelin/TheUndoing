// BehaviorTreeSequence.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTreeNode.h"
#include "BehaviorTreeSequence.generated.h"

UCLASS(Blueprintable, BlueprintType)
class THEUNDOING_API UBehaviorTreeSequence : public UBehaviorTreeNode
{
    GENERATED_BODY()

public:
    virtual ECustomBTNodeResult ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer) override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Behavior Tree")
    TArray<UBehaviorTreeNode*> Children;
};
// BehaviorTreeNode.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTreeNode.generated.h"

// Renamed to avoid conflict with Engine's EBTNodeResult
UENUM()
enum class ECustomBTNodeResult : uint8
{
    InProgress UMETA(DisplayName = "In Progress"),
    Succeeded   UMETA(DisplayName = "Succeeded"),
    Failed      UMETA(DisplayName = "Failed"),
    Aborted     UMETA(DisplayName = "Aborted")
};

UCLASS(Blueprintable, BlueprintType, Abstract)
class THEUNDOING_API UBehaviorTreeNode : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Behavior Tree")
    ECustomBTNodeResult ExecuteNode(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer);

    virtual ECustomBTNodeResult ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer) { return ECustomBTNodeResult::Failed; }

protected:
    UFUNCTION(BlueprintCallable, Category = "Behavior Tree")
    static float ClampTimer(float Timer) { return FMath::Clamp(Timer, 0.1f, 10.0f); }
};
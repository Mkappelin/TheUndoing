// BehaviorTreeConditions.cpp
#include "BehaviorTreeConditions.h"

ECustomBTNodeResult UBTCondition_BlockAndTimer::ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer)
{
    if (bBlockActive && PreviousTimer > TimerThreshold)
    {
        OutTimer = ClampTimer(1.0f);
        return ECustomBTNodeResult::Succeeded;
    }
    return ECustomBTNodeResult::Failed;
}

ECustomBTNodeResult UBTCondition_LowPlayerAccuracy::ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer)
{
    if (PlayerAccuracy > AccuracyThreshold)
    {
        OutTimer = ClampTimer(8.0f);
        return ECustomBTNodeResult::Succeeded;
    }
    return ECustomBTNodeResult::Failed;
}

ECustomBTNodeResult UBTCondition_EnemyHPBelow33Percent::ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer)
{
    if (MaxEnemyHP <= 0) return ECustomBTNodeResult::Failed;

    float HPRatio = static_cast<float>(EnemyHP) / static_cast<float>(MaxEnemyHP);
    if (HPRatio < 0.5f)
    {
        OutTimer = ClampTimer(1.5f);
        return ECustomBTNodeResult::Succeeded;
    }
    return ECustomBTNodeResult::Failed;
}

ECustomBTNodeResult UBTCondition_EnemyHPBelow66Percent::ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer)
{
    if (MaxEnemyHP <= 0) return ECustomBTNodeResult::Failed;

    float HPRatio = static_cast<float>(EnemyHP) / static_cast<float>(MaxEnemyHP);
    if (HPRatio < 0.66f)
    {
        OutTimer = ClampTimer(5.0f);
        return ECustomBTNodeResult::Succeeded;
    }
    return ECustomBTNodeResult::Failed;
}

ECustomBTNodeResult UBTCondition_Default::ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer)
{
    OutTimer = ClampTimer(DefaultTimer);
    return ECustomBTNodeResult::Succeeded;
}
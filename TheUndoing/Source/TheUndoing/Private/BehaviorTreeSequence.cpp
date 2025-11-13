// BehaviorTreeSequence.cpp
#include "BehaviorTreeSequence.h"

ECustomBTNodeResult UBehaviorTreeSequence::ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer)
{
    // Sequence: All children must succeed
    for (UBehaviorTreeNode* Child : Children)
    {
        if (Child && Child->IsValidLowLevel())
        {
            ECustomBTNodeResult Result = Child->ExecuteNode(PreviousTimer, EnemyHP, PlayerHP, bBlockActive, PlayerAccuracy, OutTimer);
            if (Result != ECustomBTNodeResult::Succeeded)
            {
                return ECustomBTNodeResult::Failed;
            }
        }
    }
    return ECustomBTNodeResult::Succeeded;
}
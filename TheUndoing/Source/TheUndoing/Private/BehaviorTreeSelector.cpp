// BehaviorTreeSelector.cpp
#include "BehaviorTreeSelector.h"

ECustomBTNodeResult UBehaviorTreeSelector::ExecuteNode_Implementation(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy, float& OutTimer)
{
    // Selector: Run children until one succeeds
    for (UBehaviorTreeNode* Child : Children)
    {
        if (Child && Child->IsValidLowLevel())
        {
            ECustomBTNodeResult Result = Child->ExecuteNode(PreviousTimer, EnemyHP, PlayerHP, bBlockActive, PlayerAccuracy, OutTimer);
            if (Result == ECustomBTNodeResult::Succeeded)
            {
                return ECustomBTNodeResult::Succeeded;
            }
        }
    }
    return ECustomBTNodeResult::Failed;
}
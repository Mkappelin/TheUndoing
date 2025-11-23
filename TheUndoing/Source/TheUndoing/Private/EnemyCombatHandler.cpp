// EnemyCombatHandler.cpp
#include "EnemyCombatHandler.h"
#include "EnemyAttackBehaviorTree.h"

float UEnemyCombatHandler::GetNextAttackTimer(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy)
{
    if (!AttackBehaviorTree)
    {
        // Create default behavior tree or load from asset
        AttackBehaviorTree = NewObject<UEnemyAttackBehaviorTree>();
        // You would typically set up the tree structure here or in Blueprint
    }

    return AttackBehaviorTree->CalculateAttackTimer(PreviousTimer, EnemyHP, PlayerHP, bBlockActive, PlayerAccuracy);
}
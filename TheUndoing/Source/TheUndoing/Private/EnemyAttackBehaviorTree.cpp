// EnemyAttackBehaviorTree.cpp
#include "EnemyAttackBehaviorTree.h"
#include "BehaviorTreeSelector.h"
#include "BehaviorTreeSequence.h"
#include "BehaviorTreeConditions.h"

UEnemyAttackBehaviorTree::UEnemyAttackBehaviorTree()
{
    MaxEnemyHP = 100;
    RootSelector = nullptr;
    bTreeInitialized = false;
}

void UEnemyAttackBehaviorTree::EnsureTreeInitialized()
{
    if (!bTreeInitialized)
    {
        SetupProperTreeStructure();
        bTreeInitialized = true;
    }
}



void UEnemyAttackBehaviorTree::SetupProperTreeStructure()
{
    if (!RootSelector)
    {
        RootSelector = NewObject<UBehaviorTreeSelector>(this);
    }
    RootSelector->Children.Empty();


    // SEQUENCE 1: Defensive Combo (Multiple conditions must pass)
    UBehaviorTreeSequence* DefensiveSequence = NewObject<UBehaviorTreeSequence>(this);
    {
        TArray<UBehaviorTreeNode*> DefensiveNodes;

        // Condition 1: Player is blocking
        UBTCondition_BlockAndTimer* BlockCheck = NewObject<UBTCondition_BlockAndTimer>(this);
        BlockCheck->TimerThreshold = 1.0f;
        DefensiveNodes.Add(BlockCheck);

        // Condition 2: Last attack was fast (combo opportunity)
        UBTCondition_Default* ComboTimer = NewObject<UBTCondition_Default>(this);
        ComboTimer->DefaultTimer = 1.0f; // Fast combo attack
        DefensiveNodes.Add(ComboTimer);

        DefensiveSequence->Children = DefensiveNodes;
    }

    // SELECTOR: Choose between AGGRESSIVE posture vs LOW HEALTH caution
    UBehaviorTreeSelector* PostureHealthSelector = NewObject<UBehaviorTreeSelector>(this);
    {
        TArray<UBehaviorTreeNode*> PostureHealthOptions;

        // OPTION 1: Aggressive when player accuracy is low
        UBTCondition_LowPlayerAccuracy* AggressiveCondition = NewObject<UBTCondition_LowPlayerAccuracy>(this);
        AggressiveCondition->AccuracyThreshold = 0.9f;
        PostureHealthOptions.Add(AggressiveCondition);

        // OPTION 2: Low Health Caution (when HP is low AND player is accurate)
        UBehaviorTreeSequence* LowHealthSequence = NewObject<UBehaviorTreeSequence>(this);
        {
            TArray<UBehaviorTreeNode*> LowHealthNodes;

            // Condition 1: HP below 50%
            UBTCondition_EnemyHPBelow33Percent* CriticalHP = NewObject<UBTCondition_EnemyHPBelow33Percent>(this);
            CriticalHP->MaxEnemyHP = 100;
            LowHealthNodes.Add(CriticalHP);

            // Condition 2: Player has decent accuracy (be careful)
            UBTCondition_LowPlayerAccuracy* GoodAccuracy = NewObject<UBTCondition_LowPlayerAccuracy>(this);
            GoodAccuracy->AccuracyThreshold = 0.7f; // Player accuracy > 70%
            LowHealthNodes.Add(GoodAccuracy);

            UBTCondition_Default* CautiousTimer = NewObject<UBTCondition_Default>(this);
            CautiousTimer->DefaultTimer = 3.5f; // Slow, cautious attacks
            LowHealthNodes.Add(CautiousTimer);

            LowHealthSequence->Children = LowHealthNodes;
        }
        PostureHealthOptions.Add(LowHealthSequence);

        // OPTION 3: Default defensive posture
        UBTCondition_Default* DefaultPosture = NewObject<UBTCondition_Default>(this);
        DefaultPosture->DefaultTimer = 5.0f;
        PostureHealthOptions.Add(DefaultPosture);

        PostureHealthSelector->Children = PostureHealthOptions;
    }

    UBTCondition_Default* DefaultCondition = NewObject<UBTCondition_Default>(this);
    DefaultCondition->DefaultTimer = 2.0f;

    RootSelector->Children.Add(DefensiveSequence);       
    RootSelector->Children.Add(PostureHealthSelector);    
    RootSelector->Children.Add(DefaultCondition);         
}float UEnemyAttackBehaviorTree::CalculateAttackTimer(float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy)
{
    float OutTimer = 2.0f; 

    
    EnsureTreeInitialized();

    if (RootSelector && RootSelector->Children.Num() > 0)
    {
        RootSelector->ExecuteNode(PreviousTimer, EnemyHP, PlayerHP, bBlockActive, PlayerAccuracy, OutTimer);
    }

    return FMath::Clamp(OutTimer, 0.1f, 10.0f);
}

void UEnemyAttackBehaviorTree::SetMaxEnemyHP(int32 NewMaxHP)
{
    MaxEnemyHP = NewMaxHP;

    // Rebuild tree with new HP value
    if (bTreeInitialized)
    {
        SetupProperTreeStructure();
    }
}

void UEnemyAttackBehaviorTree::BuildBehaviorTree()
{
    SetupProperTreeStructure();
    bTreeInitialized = true;
}

float UEnemyAttackBehaviorTree::CalculateAttackTimerDirect(UObject* WorldContextObject, float PreviousTimer, int32 EnemyHP, int32 PlayerHP, bool bBlockActive, float PlayerAccuracy)
{
    if (!WorldContextObject)
    {
        return 2.0f;
    }

    UEnemyAttackBehaviorTree* BehaviorTree = NewObject<UEnemyAttackBehaviorTree>(WorldContextObject);
    return BehaviorTree->CalculateAttackTimer(PreviousTimer, EnemyHP, PlayerHP, bBlockActive, PlayerAccuracy);
}
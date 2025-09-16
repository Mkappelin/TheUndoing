#include "MagicianGameModeBase.h"
#include "MagicianPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.h"

//void AMagicianGameModeBase::SwitchToSpellPC(AActor* NewCamera)
//{
//    SwitchPlayerController(SpellPCClass ? *SpellPCClass : AMagicianPlayerController::StaticClass(), NewCamera);
//
//    // SetPlayerInputEnabled(false);
//}
//
//void AMagicianGameModeBase::SwitchToDefaultPC(AActor* NewCamera)
//{
//
//    SwitchPlayerController(PlayerControllerClass, NewCamera);
//
//    // SetPlayerInputEnabled(true);
//}
//
//void AMagicianGameModeBase::SetPlayerInputEnabled(bool Enabled)
//{
//    APawn* Pawn = UGameplayStatics::GetPlayerPawn(this, 0);
//    if (APlayerCharacter* PC = Cast<APlayerCharacter>(Pawn))
//    {
//        PC->SetInputEnabled(Enabled);
//    }
//}
//
//void AMagicianGameModeBase::SwitchPlayerController(UClass* TargetClass, AActor* NewCamera)
//{
//    // Checks if target class is valid and if we have authority (whatever that means)
//    if (!TargetClass || !HasAuthority()) return;
//
//    APlayerController* OldPC = UGameplayStatics::GetPlayerController(this, 0);
//    if (!OldPC || OldPC->IsA(TargetClass)) return;
//
//    // Hold pawn before swapping controllers
//    APawn* Pawn = OldPC->GetPawn();
//
//    // Spawn a new controller of the requested class
//    FActorSpawnParameters SpawnParams;
//    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
//    APlayerController* NewPC = GetWorld()->SpawnActor<APlayerController>(TargetClass, SpawnParams);
//    if (!NewPC) return;
//
//    // Swap the controllers
//    SwapPlayerControllers(OldPC, NewPC);
//
//    // Repossess the same pawn
//    if (Pawn && NewPC->GetPawn() != Pawn)
//    {
//        NewPC->Possess(Pawn);
//    }
//
//    Pawn->Reset(); // Reset pawn to avoid any weirdness
//
//    // Blend to new camera
//    if (NewCamera)
//    {
//        NewPC->SetViewTargetWithBlend(NewCamera, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic);
//    }
//}


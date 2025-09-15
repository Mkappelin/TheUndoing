#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MagicianGameModeBase.generated.h"

UCLASS()
class THEUNDOING_API AMagicianGameModeBase : public AGameMode
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, Category = "Controllers")
    TSubclassOf<APlayerController> SpellPCClass;

    UFUNCTION(BlueprintCallable, Category = "Controllers")
    void SwitchToSpellPC(AActor* NewCamera = nullptr);

    UFUNCTION(BlueprintCallable, Category = "Controllers")
    void SwitchToDefaultPC(AActor* NewCamera = nullptr);

private:
    void SwitchPlayerController(UClass* TargetClass, AActor* NewCamera);
    void SetPlayerInputEnabled(bool Enabled);
};

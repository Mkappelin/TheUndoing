#pragma once

#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "Blueprint/UserWidget.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "PaintWidget.generated.h"

class UNiagaraComponent;

UENUM(BlueprintType)
enum class EStrokeType : uint8
{
	SingleColorLine UMETA(DisplayName = "SingleColor Line"),
	NiagaraRibbon UMETA(DisplayName = "Niagara Ribbon")
};

UCLASS()
class THEUNDOING_API UPaintWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual int32 NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;

public:

	// ---  Add a new point to the drawing ---
	UFUNCTION(BlueprintCallable, Category = "SpellDrawing")
	void AddPoint(const FVector2D& Point);

	// ---  Remove all drawn points ---
	UFUNCTION(BlueprintCallable, Category = "SpellDrawing")
	void RemoveAllPoints();

	// --- Get a copy of all current points ---
	UFUNCTION(BlueprintCallable, Category = "SpellDrawing")
	TArray<FVector2D> GetPoints() const;

	// --- Drawing Settings ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpellDrawing")
	EStrokeType StrokeType = EStrokeType::SingleColorLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpellDrawing", meta = (ToolTip = "Used for SingleColorLine & Ribbon"))
	float BrushSize = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpellDrawing")
	FLinearColor BrushColor = FLinearColor::Blue;

private:
	TArray<FVector2D> Points;

};

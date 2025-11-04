#include "PaintWidget.h"

int32 UPaintWidget::NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
    Super::NativePaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);

    FPaintContext Context(AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);

    switch (StrokeType) {
        case EStrokeType::NiagaraRibbon: break; // <--- Handled in blueprint
        case EStrokeType::SingleColorLine:
            
            UWidgetBlueprintLibrary::DrawLines(
                Context,
                Points,
                BrushColor,
                true,
                BrushSize
            );

            break;
        default: break;
    }

    return LayerId + 1;
}

TArray<FVector2D> UPaintWidget::GetPoints() const
{
	return Points;
}

void UPaintWidget::AddPoint(const FVector2D& Point)
{
	Points.Add(Point);
}

void UPaintWidget::RemoveAllPoints()
{
	Points.Empty();
}
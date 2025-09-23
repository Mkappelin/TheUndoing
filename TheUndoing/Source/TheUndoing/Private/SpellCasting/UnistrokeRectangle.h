#pragma once

#include "CoreMinimal.h"
#include "UnistrokeRectangle.generated.h"

USTRUCT()
struct THEUNDOING_API FUnistrokeRectangle
{
	GENERATED_BODY()

public:
	FUnistrokeRectangle();
	FUnistrokeRectangle(const float& X, const float& Y, const float& Width, const float& Height);
	~FUnistrokeRectangle();

public:
	float X;
	float Y;
	float Width;
	float Height;
};

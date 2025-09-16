// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/MagicianPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMagicianPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianPlayerController();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianPlayerController_NoRegister();
THEUNDOING_API UClass* Z_Construct_UClass_UPaintWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMagicianPlayerController Function AddTemplateToDataTable ****************
struct Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics
{
	struct MagicianPlayerController_eventAddTemplateToDataTable_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MagicianPlayerController_eventAddTemplateToDataTable_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "AddTemplateToDataTable", Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::MagicianPlayerController_eventAddTemplateToDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::MagicianPlayerController_eventAddTemplateToDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execAddTemplateToDataTable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTemplateToDataTable(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function AddTemplateToDataTable ******************

// ********** Begin Class AMagicianPlayerController Function EnterPaintMode ************************
struct Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics
{
	struct MagicianPlayerController_eventEnterPaintMode_Parms
	{
		AActor* OptionalCamera;
		float BlendTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Enter/Exit paint mode used by (Could be private) -- \n" },
#endif
		{ "CPP_Default_BlendTime", "0.500000" },
		{ "CPP_Default_OptionalCamera", "None" },
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Enter/Exit paint mode used by (Could be private) --" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::NewProp_OptionalCamera = { "OptionalCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MagicianPlayerController_eventEnterPaintMode_Parms, OptionalCamera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MagicianPlayerController_eventEnterPaintMode_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::NewProp_OptionalCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::NewProp_BlendTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "EnterPaintMode", Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::MagicianPlayerController_eventEnterPaintMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::MagicianPlayerController_eventEnterPaintMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execEnterPaintMode)
{
	P_GET_OBJECT(AActor,Z_Param_OptionalCamera);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterPaintMode(Z_Param_OptionalCamera,Z_Param_BlendTime);
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function EnterPaintMode **************************

// ********** Begin Class AMagicianPlayerController Function ExitPaintMode *************************
struct Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics
{
	struct MagicianPlayerController_eventExitPaintMode_Parms
	{
		float BlendTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_BlendTime", "0.500000" },
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MagicianPlayerController_eventExitPaintMode_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::NewProp_BlendTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "ExitPaintMode", Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::MagicianPlayerController_eventExitPaintMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::MagicianPlayerController_eventExitPaintMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execExitPaintMode)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExitPaintMode(Z_Param_BlendTime);
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function ExitPaintMode ***************************

// ********** Begin Class AMagicianPlayerController Function HidePaintWidget ***********************
struct Z_Construct_UFunction_AMagicianPlayerController_HidePaintWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_HidePaintWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "HidePaintWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_HidePaintWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_HidePaintWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMagicianPlayerController_HidePaintWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_HidePaintWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execHidePaintWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HidePaintWidget();
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function HidePaintWidget *************************

// ********** Begin Class AMagicianPlayerController Function HideTrainWidget ***********************
struct Z_Construct_UFunction_AMagicianPlayerController_HideTrainWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_HideTrainWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "HideTrainWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_HideTrainWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_HideTrainWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMagicianPlayerController_HideTrainWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_HideTrainWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execHideTrainWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideTrainWidget();
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function HideTrainWidget *************************

// ********** Begin Class AMagicianPlayerController Function ShowPaintWidget ***********************
struct Z_Construct_UFunction_AMagicianPlayerController_ShowPaintWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_ShowPaintWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "ShowPaintWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_ShowPaintWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_ShowPaintWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMagicianPlayerController_ShowPaintWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_ShowPaintWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execShowPaintWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPaintWidget();
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function ShowPaintWidget *************************

// ********** Begin Class AMagicianPlayerController Function ShowTrainWidget ***********************
struct Z_Construct_UFunction_AMagicianPlayerController_ShowTrainWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_ShowTrainWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "ShowTrainWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_ShowTrainWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_ShowTrainWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMagicianPlayerController_ShowTrainWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_ShowTrainWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execShowTrainWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowTrainWidget();
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function ShowTrainWidget *************************

// ********** Begin Class AMagicianPlayerController Function TogglePaintMode ***********************
struct Z_Construct_UFunction_AMagicianPlayerController_TogglePaintMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Public API for UI ---\n" },
#endif
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Public API for UI ---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_TogglePaintMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "TogglePaintMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_TogglePaintMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_TogglePaintMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMagicianPlayerController_TogglePaintMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_TogglePaintMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execTogglePaintMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePaintMode();
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function TogglePaintMode *************************

// ********** Begin Class AMagicianPlayerController Function TrainMode *****************************
struct Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics
{
	struct MagicianPlayerController_eventTrainMode_Parms
	{
		bool Is;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Is_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Is_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Is;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::NewProp_Is_SetBit(void* Obj)
{
	((MagicianPlayerController_eventTrainMode_Parms*)Obj)->Is = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::NewProp_Is = { "Is", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MagicianPlayerController_eventTrainMode_Parms), &Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::NewProp_Is_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Is_MetaData), NewProp_Is_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::NewProp_Is,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "TrainMode", Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::MagicianPlayerController_eventTrainMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::MagicianPlayerController_eventTrainMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMagicianPlayerController_TrainMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_TrainMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execTrainMode)
{
	P_GET_UBOOL(Z_Param_Is);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrainMode(Z_Param_Is);
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function TrainMode *******************************

// ********** Begin Class AMagicianPlayerController Function TryInitUI *****************************
struct Z_Construct_UFunction_AMagicianPlayerController_TryInitUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Lazy init for UI ---\n" },
#endif
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Lazy init for UI ---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController_TryInitUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController, nullptr, "TryInitUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController_TryInitUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController_TryInitUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMagicianPlayerController_TryInitUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController_TryInitUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController::execTryInitUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryInitUI();
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController Function TryInitUI *******************************

// ********** Begin Class AMagicianPlayerController ************************************************
void AMagicianPlayerController::StaticRegisterNativesAMagicianPlayerController()
{
	UClass* Class = AMagicianPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTemplateToDataTable", &AMagicianPlayerController::execAddTemplateToDataTable },
		{ "EnterPaintMode", &AMagicianPlayerController::execEnterPaintMode },
		{ "ExitPaintMode", &AMagicianPlayerController::execExitPaintMode },
		{ "HidePaintWidget", &AMagicianPlayerController::execHidePaintWidget },
		{ "HideTrainWidget", &AMagicianPlayerController::execHideTrainWidget },
		{ "ShowPaintWidget", &AMagicianPlayerController::execShowPaintWidget },
		{ "ShowTrainWidget", &AMagicianPlayerController::execShowTrainWidget },
		{ "TogglePaintMode", &AMagicianPlayerController::execTogglePaintMode },
		{ "TrainMode", &AMagicianPlayerController::execTrainMode },
		{ "TryInitUI", &AMagicianPlayerController::execTryInitUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMagicianPlayerController;
UClass* AMagicianPlayerController::GetPrivateStaticClass()
{
	using TClass = AMagicianPlayerController;
	if (!Z_Registration_Info_UClass_AMagicianPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MagicianPlayerController"),
			Z_Registration_Info_UClass_AMagicianPlayerController.InnerSingleton,
			StaticRegisterNativesAMagicianPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMagicianPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMagicianPlayerController_NoRegister()
{
	return AMagicianPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMagicianPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Spell/MagicianPlayerController.h" },
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaintingMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- State ---\n" },
#endif
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- State ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTraining_MetaData[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- UI (classes + live widgets) ---\n" },
#endif
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- UI (classes + live widgets) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// maybe keep StaticClass fallback\n" },
#endif
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "maybe keep StaticClass fallback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// maybe keep StaticClass fallback\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "maybe keep StaticClass fallback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnistrokeTable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Data / recognition ---\n" },
#endif
		{ "ModuleRelativePath", "Spell/MagicianPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Data / recognition ---" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsPaintingMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaintingMode;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SavedViewTarget;
	static void NewProp_IsTraining_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTraining;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrainWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PaintWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnistrokeTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicianPlayerController_AddTemplateToDataTable, "AddTemplateToDataTable" }, // 4154160942
		{ &Z_Construct_UFunction_AMagicianPlayerController_EnterPaintMode, "EnterPaintMode" }, // 722284997
		{ &Z_Construct_UFunction_AMagicianPlayerController_ExitPaintMode, "ExitPaintMode" }, // 1274517538
		{ &Z_Construct_UFunction_AMagicianPlayerController_HidePaintWidget, "HidePaintWidget" }, // 504123192
		{ &Z_Construct_UFunction_AMagicianPlayerController_HideTrainWidget, "HideTrainWidget" }, // 200876
		{ &Z_Construct_UFunction_AMagicianPlayerController_ShowPaintWidget, "ShowPaintWidget" }, // 1532578062
		{ &Z_Construct_UFunction_AMagicianPlayerController_ShowTrainWidget, "ShowTrainWidget" }, // 1630781200
		{ &Z_Construct_UFunction_AMagicianPlayerController_TogglePaintMode, "TogglePaintMode" }, // 1372290192
		{ &Z_Construct_UFunction_AMagicianPlayerController_TrainMode, "TrainMode" }, // 966274414
		{ &Z_Construct_UFunction_AMagicianPlayerController_TryInitUI, "TryInitUI" }, // 1844563986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicianPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_bIsPaintingMode_SetBit(void* Obj)
{
	((AMagicianPlayerController*)Obj)->bIsPaintingMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_bIsPaintingMode = { "bIsPaintingMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMagicianPlayerController), &Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_bIsPaintingMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPaintingMode_MetaData), NewProp_bIsPaintingMode_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_SavedViewTarget = { "SavedViewTarget", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicianPlayerController, SavedViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedViewTarget_MetaData), NewProp_SavedViewTarget_MetaData) };
void Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_IsTraining_SetBit(void* Obj)
{
	((AMagicianPlayerController*)Obj)->IsTraining = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_IsTraining = { "IsTraining", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMagicianPlayerController), &Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_IsTraining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTraining_MetaData), NewProp_IsTraining_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_TrainWidgetClass = { "TrainWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicianPlayerController, TrainWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainWidgetClass_MetaData), NewProp_TrainWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_PaintWidgetClass = { "PaintWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicianPlayerController, PaintWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPaintWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintWidgetClass_MetaData), NewProp_PaintWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_TrainWidget = { "TrainWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicianPlayerController, TrainWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainWidget_MetaData), NewProp_TrainWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_PaintWidget = { "PaintWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicianPlayerController, PaintWidget), Z_Construct_UClass_UPaintWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintWidget_MetaData), NewProp_PaintWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_UnistrokeTable = { "UnistrokeTable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicianPlayerController, UnistrokeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnistrokeTable_MetaData), NewProp_UnistrokeTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicianPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_bIsPaintingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_SavedViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_IsTraining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_TrainWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_PaintWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_TrainWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_PaintWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPlayerController_Statics::NewProp_UnistrokeTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMagicianPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicianPlayerController_Statics::ClassParams = {
	&AMagicianPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMagicianPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagicianPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMagicianPlayerController()
{
	if (!Z_Registration_Info_UClass_AMagicianPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicianPlayerController.OuterSingleton, Z_Construct_UClass_AMagicianPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMagicianPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicianPlayerController);
AMagicianPlayerController::~AMagicianPlayerController() {}
// ********** End Class AMagicianPlayerController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPlayerController_h__Script_TheUndoing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMagicianPlayerController, AMagicianPlayerController::StaticClass, TEXT("AMagicianPlayerController"), &Z_Registration_Info_UClass_AMagicianPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicianPlayerController), 2692618913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPlayerController_h__Script_TheUndoing_2123653816(TEXT("/Script/TheUndoing"),
	Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPlayerController_h__Script_TheUndoing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPlayerController_h__Script_TheUndoing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

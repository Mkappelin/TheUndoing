// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/TrainWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTrainWidget() {}

// ********** Begin Cross Module References ********************************************************
THEUNDOING_API UClass* Z_Construct_UClass_UTrainWidget();
THEUNDOING_API UClass* Z_Construct_UClass_UTrainWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTrainWidget Function AddNewTemplate *************************************
struct Z_Construct_UFunction_UTrainWidget_AddNewTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/TrainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainWidget_AddNewTemplate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrainWidget, nullptr, "AddNewTemplate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainWidget_AddNewTemplate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainWidget_AddNewTemplate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTrainWidget_AddNewTemplate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainWidget_AddNewTemplate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrainWidget::execAddNewTemplate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNewTemplate();
	P_NATIVE_END;
}
// ********** End Class UTrainWidget Function AddNewTemplate ***************************************

// ********** Begin Class UTrainWidget Function ClearPoints ****************************************
struct Z_Construct_UFunction_UTrainWidget_ClearPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/TrainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrainWidget_ClearPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrainWidget, nullptr, "ClearPoints", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrainWidget_ClearPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrainWidget_ClearPoints_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTrainWidget_ClearPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrainWidget_ClearPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrainWidget::execClearPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearPoints();
	P_NATIVE_END;
}
// ********** End Class UTrainWidget Function ClearPoints ******************************************

// ********** Begin Class UTrainWidget *************************************************************
void UTrainWidget::StaticRegisterNativesUTrainWidget()
{
	UClass* Class = UTrainWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNewTemplate", &UTrainWidget::execAddNewTemplate },
		{ "ClearPoints", &UTrainWidget::execClearPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTrainWidget;
UClass* UTrainWidget::GetPrivateStaticClass()
{
	using TClass = UTrainWidget;
	if (!Z_Registration_Info_UClass_UTrainWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TrainWidget"),
			Z_Registration_Info_UClass_UTrainWidget.InnerSingleton,
			StaticRegisterNativesUTrainWidget,
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
	return Z_Registration_Info_UClass_UTrainWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTrainWidget_NoRegister()
{
	return UTrainWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTrainWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Spell/TrainWidget.h" },
		{ "ModuleRelativePath", "Spell/TrainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spell/TrainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spell/TrainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spell/TrainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClearButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NameTextBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrainWidget_AddNewTemplate, "AddNewTemplate" }, // 278306832
		{ &Z_Construct_UFunction_UTrainWidget_ClearPoints, "ClearPoints" }, // 238001297
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainWidget_Statics::NewProp_AddButton = { "AddButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainWidget, AddButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddButton_MetaData), NewProp_AddButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainWidget_Statics::NewProp_ClearButton = { "ClearButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainWidget, ClearButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearButton_MetaData), NewProp_ClearButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrainWidget_Statics::NewProp_NameTextBox = { "NameTextBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainWidget, NameTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameTextBox_MetaData), NewProp_NameTextBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrainWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainWidget_Statics::NewProp_AddButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainWidget_Statics::NewProp_ClearButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrainWidget_Statics::NewProp_NameTextBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTrainWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrainWidget_Statics::ClassParams = {
	&UTrainWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTrainWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTrainWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrainWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrainWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTrainWidget()
{
	if (!Z_Registration_Info_UClass_UTrainWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainWidget.OuterSingleton, Z_Construct_UClass_UTrainWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrainWidget.OuterSingleton;
}
UTrainWidget::UTrainWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTrainWidget);
UTrainWidget::~UTrainWidget() {}
// ********** End Class UTrainWidget ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h__Script_TheUndoing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrainWidget, UTrainWidget::StaticClass, TEXT("UTrainWidget"), &Z_Registration_Info_UClass_UTrainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainWidget), 2176746222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h__Script_TheUndoing_2176409669(TEXT("/Script/TheUndoing"),
	Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h__Script_TheUndoing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h__Script_TheUndoing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

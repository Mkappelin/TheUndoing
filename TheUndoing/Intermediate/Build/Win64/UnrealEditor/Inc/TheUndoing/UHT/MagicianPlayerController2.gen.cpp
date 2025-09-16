// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/MagicianPlayerController2.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMagicianPlayerController2() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianPlayerController2();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianPlayerController2_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMagicianPlayerController2 Function TrainMode ****************************
struct Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics
{
	struct MagicianPlayerController2_eventTrainMode_Parms
	{
		bool Is;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/MagicianPlayerController2.h" },
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
void Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::NewProp_Is_SetBit(void* Obj)
{
	((MagicianPlayerController2_eventTrainMode_Parms*)Obj)->Is = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::NewProp_Is = { "Is", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MagicianPlayerController2_eventTrainMode_Parms), &Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::NewProp_Is_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Is_MetaData), NewProp_Is_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::NewProp_Is,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianPlayerController2, nullptr, "TrainMode", Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::MagicianPlayerController2_eventTrainMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::MagicianPlayerController2_eventTrainMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMagicianPlayerController2_TrainMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianPlayerController2_TrainMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianPlayerController2::execTrainMode)
{
	P_GET_UBOOL(Z_Param_Is);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrainMode(Z_Param_Is);
	P_NATIVE_END;
}
// ********** End Class AMagicianPlayerController2 Function TrainMode ******************************

// ********** Begin Class AMagicianPlayerController2 ***********************************************
void AMagicianPlayerController2::StaticRegisterNativesAMagicianPlayerController2()
{
	UClass* Class = AMagicianPlayerController2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TrainMode", &AMagicianPlayerController2::execTrainMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMagicianPlayerController2;
UClass* AMagicianPlayerController2::GetPrivateStaticClass()
{
	using TClass = AMagicianPlayerController2;
	if (!Z_Registration_Info_UClass_AMagicianPlayerController2.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MagicianPlayerController2"),
			Z_Registration_Info_UClass_AMagicianPlayerController2.InnerSingleton,
			StaticRegisterNativesAMagicianPlayerController2,
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
	return Z_Registration_Info_UClass_AMagicianPlayerController2.InnerSingleton;
}
UClass* Z_Construct_UClass_AMagicianPlayerController2_NoRegister()
{
	return AMagicianPlayerController2::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMagicianPlayerController2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Spell/MagicianPlayerController2.h" },
		{ "ModuleRelativePath", "Spell/MagicianPlayerController2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicianPlayerController2_TrainMode, "TrainMode" }, // 69250254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicianPlayerController2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMagicianPlayerController2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPlayerController2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicianPlayerController2_Statics::ClassParams = {
	&AMagicianPlayerController2::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPlayerController2_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagicianPlayerController2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMagicianPlayerController2()
{
	if (!Z_Registration_Info_UClass_AMagicianPlayerController2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicianPlayerController2.OuterSingleton, Z_Construct_UClass_AMagicianPlayerController2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMagicianPlayerController2.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicianPlayerController2);
AMagicianPlayerController2::~AMagicianPlayerController2() {}
// ********** End Class AMagicianPlayerController2 *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPlayerController2_h__Script_TheUndoing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMagicianPlayerController2, AMagicianPlayerController2::StaticClass, TEXT("AMagicianPlayerController2"), &Z_Registration_Info_UClass_AMagicianPlayerController2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicianPlayerController2), 864254034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPlayerController2_h__Script_TheUndoing_1419351244(TEXT("/Script/TheUndoing"),
	Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPlayerController2_h__Script_TheUndoing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPlayerController2_h__Script_TheUndoing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

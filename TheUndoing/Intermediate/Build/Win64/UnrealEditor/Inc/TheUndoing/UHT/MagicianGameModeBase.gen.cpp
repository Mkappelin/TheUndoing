// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/MagicianGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMagicianGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianGameModeBase();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMagicianGameModeBase Function SwitchToDefaultPC *************************
struct Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics
{
	struct MagicianGameModeBase_eventSwitchToDefaultPC_Parms
	{
		AActor* NewCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controllers" },
		{ "CPP_Default_NewCamera", "None" },
		{ "ModuleRelativePath", "Spell/MagicianGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MagicianGameModeBase_eventSwitchToDefaultPC_Parms, NewCamera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::NewProp_NewCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianGameModeBase, nullptr, "SwitchToDefaultPC", Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::MagicianGameModeBase_eventSwitchToDefaultPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::MagicianGameModeBase_eventSwitchToDefaultPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianGameModeBase::execSwitchToDefaultPC)
{
	P_GET_OBJECT(AActor,Z_Param_NewCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToDefaultPC(Z_Param_NewCamera);
	P_NATIVE_END;
}
// ********** End Class AMagicianGameModeBase Function SwitchToDefaultPC ***************************

// ********** Begin Class AMagicianGameModeBase Function SwitchToSpellPC ***************************
struct Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics
{
	struct MagicianGameModeBase_eventSwitchToSpellPC_Parms
	{
		AActor* NewCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controllers" },
		{ "CPP_Default_NewCamera", "None" },
		{ "ModuleRelativePath", "Spell/MagicianGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MagicianGameModeBase_eventSwitchToSpellPC_Parms, NewCamera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::NewProp_NewCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMagicianGameModeBase, nullptr, "SwitchToSpellPC", Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::MagicianGameModeBase_eventSwitchToSpellPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::MagicianGameModeBase_eventSwitchToSpellPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMagicianGameModeBase::execSwitchToSpellPC)
{
	P_GET_OBJECT(AActor,Z_Param_NewCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToSpellPC(Z_Param_NewCamera);
	P_NATIVE_END;
}
// ********** End Class AMagicianGameModeBase Function SwitchToSpellPC *****************************

// ********** Begin Class AMagicianGameModeBase ****************************************************
void AMagicianGameModeBase::StaticRegisterNativesAMagicianGameModeBase()
{
	UClass* Class = AMagicianGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwitchToDefaultPC", &AMagicianGameModeBase::execSwitchToDefaultPC },
		{ "SwitchToSpellPC", &AMagicianGameModeBase::execSwitchToSpellPC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMagicianGameModeBase;
UClass* AMagicianGameModeBase::GetPrivateStaticClass()
{
	using TClass = AMagicianGameModeBase;
	if (!Z_Registration_Info_UClass_AMagicianGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MagicianGameModeBase"),
			Z_Registration_Info_UClass_AMagicianGameModeBase.InnerSingleton,
			StaticRegisterNativesAMagicianGameModeBase,
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
	return Z_Registration_Info_UClass_AMagicianGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMagicianGameModeBase_NoRegister()
{
	return AMagicianGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMagicianGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Spell/MagicianGameModeBase.h" },
		{ "ModuleRelativePath", "Spell/MagicianGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellPCClass_MetaData[] = {
		{ "Category", "Controllers" },
		{ "ModuleRelativePath", "Spell/MagicianGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpellPCClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicianGameModeBase_SwitchToDefaultPC, "SwitchToDefaultPC" }, // 400927014
		{ &Z_Construct_UFunction_AMagicianGameModeBase_SwitchToSpellPC, "SwitchToSpellPC" }, // 899343049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicianGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicianGameModeBase_Statics::NewProp_SpellPCClass = { "SpellPCClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicianGameModeBase, SpellPCClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellPCClass_MetaData), NewProp_SpellPCClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicianGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianGameModeBase_Statics::NewProp_SpellPCClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMagicianGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicianGameModeBase_Statics::ClassParams = {
	&AMagicianGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMagicianGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianGameModeBase_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagicianGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMagicianGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMagicianGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicianGameModeBase.OuterSingleton, Z_Construct_UClass_AMagicianGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMagicianGameModeBase.OuterSingleton;
}
AMagicianGameModeBase::AMagicianGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicianGameModeBase);
AMagicianGameModeBase::~AMagicianGameModeBase() {}
// ********** End Class AMagicianGameModeBase ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianGameModeBase_h__Script_TheUndoing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMagicianGameModeBase, AMagicianGameModeBase::StaticClass, TEXT("AMagicianGameModeBase"), &Z_Registration_Info_UClass_AMagicianGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicianGameModeBase), 2538686767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianGameModeBase_h__Script_TheUndoing_3929279741(TEXT("/Script/TheUndoing"),
	Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianGameModeBase_h__Script_TheUndoing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianGameModeBase_h__Script_TheUndoing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

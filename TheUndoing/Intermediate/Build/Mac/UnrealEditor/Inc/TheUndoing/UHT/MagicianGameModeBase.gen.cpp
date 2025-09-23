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
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianGameModeBase();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMagicianGameModeBase ****************************************************
void AMagicianGameModeBase::StaticRegisterNativesAMagicianGameModeBase()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicianGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianGameModeBase_h__Script_TheUndoing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMagicianGameModeBase, AMagicianGameModeBase::StaticClass, TEXT("AMagicianGameModeBase"), &Z_Registration_Info_UClass_AMagicianGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicianGameModeBase), 3566333475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianGameModeBase_h__Script_TheUndoing_520540192(TEXT("/Script/TheUndoing"),
	Z_CompiledInDeferFile_FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianGameModeBase_h__Script_TheUndoing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianGameModeBase_h__Script_TheUndoing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

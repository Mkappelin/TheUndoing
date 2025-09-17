// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/MagicianPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMagicianPawn() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianPawn();
THEUNDOING_API UClass* Z_Construct_UClass_AMagicianPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMagicianPawn ************************************************************
void AMagicianPawn::StaticRegisterNativesAMagicianPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMagicianPawn;
UClass* AMagicianPawn::GetPrivateStaticClass()
{
	using TClass = AMagicianPawn;
	if (!Z_Registration_Info_UClass_AMagicianPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MagicianPawn"),
			Z_Registration_Info_UClass_AMagicianPawn.InnerSingleton,
			StaticRegisterNativesAMagicianPawn,
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
	return Z_Registration_Info_UClass_AMagicianPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AMagicianPawn_NoRegister()
{
	return AMagicianPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMagicianPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Spell/MagicianPawn.h" },
		{ "ModuleRelativePath", "Spell/MagicianPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeMap_MetaData[] = {
		{ "Category", "Shapes" },
		{ "ModuleRelativePath", "Spell/MagicianPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ShapeMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ShapeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicianPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicianPawn_Statics::NewProp_ShapeMap_ValueProp = { "ShapeMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMagicianPawn_Statics::NewProp_ShapeMap_Key_KeyProp = { "ShapeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMagicianPawn_Statics::NewProp_ShapeMap = { "ShapeMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicianPawn, ShapeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeMap_MetaData), NewProp_ShapeMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicianPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPawn_Statics::NewProp_ShapeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPawn_Statics::NewProp_ShapeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicianPawn_Statics::NewProp_ShapeMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMagicianPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicianPawn_Statics::ClassParams = {
	&AMagicianPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMagicianPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicianPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagicianPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMagicianPawn()
{
	if (!Z_Registration_Info_UClass_AMagicianPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicianPawn.OuterSingleton, Z_Construct_UClass_AMagicianPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMagicianPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicianPawn);
AMagicianPawn::~AMagicianPawn() {}
// ********** End Class AMagicianPawn **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPawn_h__Script_TheUndoing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMagicianPawn, AMagicianPawn::StaticClass, TEXT("AMagicianPawn"), &Z_Registration_Info_UClass_AMagicianPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicianPawn), 2005795144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPawn_h__Script_TheUndoing_4167414824(TEXT("/Script/TheUndoing"),
	Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPawn_h__Script_TheUndoing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_MagicianPawn_h__Script_TheUndoing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

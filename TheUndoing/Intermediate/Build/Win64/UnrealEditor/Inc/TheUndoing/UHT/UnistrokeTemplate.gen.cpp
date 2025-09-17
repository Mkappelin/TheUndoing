// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/UnistrokeTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnistrokeTemplate() {}

// ********** Begin Cross Module References ********************************************************
THEUNDOING_API UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeTemplate();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUnistrokeTemplate ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnistrokeTemplate;
class UScriptStruct* FUnistrokeTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnistrokeTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnistrokeTemplate, (UObject*)Z_Construct_UPackage__Script_TheUndoing(), TEXT("UnistrokeTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeTemplate.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnistrokeTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/UnistrokeTemplate.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnistrokeTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnistrokeTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
	nullptr,
	&NewStructOps,
	"UnistrokeTemplate",
	nullptr,
	0,
	sizeof(FUnistrokeTemplate),
	alignof(FUnistrokeTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnistrokeTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnistrokeTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnistrokeTemplate.InnerSingleton, Z_Construct_UScriptStruct_FUnistrokeTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeTemplate.InnerSingleton;
}
// ********** End ScriptStruct FUnistrokeTemplate **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeTemplate_h__Script_TheUndoing_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnistrokeTemplate::StaticStruct, Z_Construct_UScriptStruct_FUnistrokeTemplate_Statics::NewStructOps, TEXT("UnistrokeTemplate"), &Z_Registration_Info_UScriptStruct_FUnistrokeTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnistrokeTemplate), 2844262127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeTemplate_h__Script_TheUndoing_3120077587(TEXT("/Script/TheUndoing"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeTemplate_h__Script_TheUndoing_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeTemplate_h__Script_TheUndoing_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

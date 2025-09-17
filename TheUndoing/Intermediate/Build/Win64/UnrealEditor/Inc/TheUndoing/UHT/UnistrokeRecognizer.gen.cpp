// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/UnistrokeRecognizer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnistrokeRecognizer() {}

// ********** Begin Cross Module References ********************************************************
THEUNDOING_API UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeRecognizer();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUnistrokeRecognizer **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnistrokeRecognizer;
class UScriptStruct* FUnistrokeRecognizer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeRecognizer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnistrokeRecognizer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnistrokeRecognizer, (UObject*)Z_Construct_UPackage__Script_TheUndoing(), TEXT("UnistrokeRecognizer"));
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeRecognizer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnistrokeRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/UnistrokeRecognizer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnistrokeRecognizer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnistrokeRecognizer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
	nullptr,
	&NewStructOps,
	"UnistrokeRecognizer",
	nullptr,
	0,
	sizeof(FUnistrokeRecognizer),
	alignof(FUnistrokeRecognizer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnistrokeRecognizer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnistrokeRecognizer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeRecognizer()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeRecognizer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnistrokeRecognizer.InnerSingleton, Z_Construct_UScriptStruct_FUnistrokeRecognizer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeRecognizer.InnerSingleton;
}
// ********** End ScriptStruct FUnistrokeRecognizer ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeRecognizer_h__Script_TheUndoing_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnistrokeRecognizer::StaticStruct, Z_Construct_UScriptStruct_FUnistrokeRecognizer_Statics::NewStructOps, TEXT("UnistrokeRecognizer"), &Z_Registration_Info_UScriptStruct_FUnistrokeRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnistrokeRecognizer), 1233061843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeRecognizer_h__Script_TheUndoing_2986981530(TEXT("/Script/TheUndoing"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeRecognizer_h__Script_TheUndoing_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeRecognizer_h__Script_TheUndoing_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

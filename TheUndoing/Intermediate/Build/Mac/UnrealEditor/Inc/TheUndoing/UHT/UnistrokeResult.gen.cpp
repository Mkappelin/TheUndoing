// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpellCasting/UnistrokeResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnistrokeResult() {}

// ********** Begin Cross Module References ********************************************************
THEUNDOING_API UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeResult();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUnistrokeResult **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnistrokeResult;
class UScriptStruct* FUnistrokeResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnistrokeResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnistrokeResult, (UObject*)Z_Construct_UPackage__Script_TheUndoing(), TEXT("UnistrokeResult"));
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnistrokeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SpellCasting/UnistrokeResult.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnistrokeResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnistrokeResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
	nullptr,
	&NewStructOps,
	"UnistrokeResult",
	nullptr,
	0,
	sizeof(FUnistrokeResult),
	alignof(FUnistrokeResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnistrokeResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnistrokeResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeResult()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnistrokeResult.InnerSingleton, Z_Construct_UScriptStruct_FUnistrokeResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeResult.InnerSingleton;
}
// ********** End ScriptStruct FUnistrokeResult ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Private_SpellCasting_UnistrokeResult_h__Script_TheUndoing_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnistrokeResult::StaticStruct, Z_Construct_UScriptStruct_FUnistrokeResult_Statics::NewStructOps, TEXT("UnistrokeResult"), &Z_Registration_Info_UScriptStruct_FUnistrokeResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnistrokeResult), 2088591830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Private_SpellCasting_UnistrokeResult_h__Script_TheUndoing_1960407891(TEXT("/Script/TheUndoing"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Private_SpellCasting_UnistrokeResult_h__Script_TheUndoing_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Private_SpellCasting_UnistrokeResult_h__Script_TheUndoing_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

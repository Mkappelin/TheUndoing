// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/UnistrokeRectangle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnistrokeRectangle() {}

// ********** Begin Cross Module References ********************************************************
THEUNDOING_API UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeRectangle();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUnistrokeRectangle ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnistrokeRectangle;
class UScriptStruct* FUnistrokeRectangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeRectangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnistrokeRectangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnistrokeRectangle, (UObject*)Z_Construct_UPackage__Script_TheUndoing(), TEXT("UnistrokeRectangle"));
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeRectangle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnistrokeRectangle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/UnistrokeRectangle.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnistrokeRectangle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnistrokeRectangle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
	nullptr,
	&NewStructOps,
	"UnistrokeRectangle",
	nullptr,
	0,
	sizeof(FUnistrokeRectangle),
	alignof(FUnistrokeRectangle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnistrokeRectangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnistrokeRectangle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeRectangle()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeRectangle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnistrokeRectangle.InnerSingleton, Z_Construct_UScriptStruct_FUnistrokeRectangle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeRectangle.InnerSingleton;
}
// ********** End ScriptStruct FUnistrokeRectangle *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeRectangle_h__Script_TheUndoing_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnistrokeRectangle::StaticStruct, Z_Construct_UScriptStruct_FUnistrokeRectangle_Statics::NewStructOps, TEXT("UnistrokeRectangle"), &Z_Registration_Info_UScriptStruct_FUnistrokeRectangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnistrokeRectangle), 769284278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeRectangle_h__Script_TheUndoing_1991387814(TEXT("/Script/TheUndoing"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeRectangle_h__Script_TheUndoing_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeRectangle_h__Script_TheUndoing_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/UnistrokePoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnistrokePoint() {}

// ********** Begin Cross Module References ********************************************************
THEUNDOING_API UScriptStruct* Z_Construct_UScriptStruct_FUnistrokePoint();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUnistrokePoint ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnistrokePoint;
class UScriptStruct* FUnistrokePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnistrokePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnistrokePoint, (UObject*)Z_Construct_UPackage__Script_TheUndoing(), TEXT("UnistrokePoint"));
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokePoint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnistrokePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/UnistrokePoint.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnistrokePoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnistrokePoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
	nullptr,
	&NewStructOps,
	"UnistrokePoint",
	nullptr,
	0,
	sizeof(FUnistrokePoint),
	alignof(FUnistrokePoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnistrokePoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnistrokePoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnistrokePoint()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokePoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnistrokePoint.InnerSingleton, Z_Construct_UScriptStruct_FUnistrokePoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokePoint.InnerSingleton;
}
// ********** End ScriptStruct FUnistrokePoint *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_altun_Documents_Unreal_Projects_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokePoint_h__Script_TheUndoing_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnistrokePoint::StaticStruct, Z_Construct_UScriptStruct_FUnistrokePoint_Statics::NewStructOps, TEXT("UnistrokePoint"), &Z_Registration_Info_UScriptStruct_FUnistrokePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnistrokePoint), 3874218263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_altun_Documents_Unreal_Projects_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokePoint_h__Script_TheUndoing_199441776(TEXT("/Script/TheUndoing"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_altun_Documents_Unreal_Projects_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokePoint_h__Script_TheUndoing_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_altun_Documents_Unreal_Projects_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokePoint_h__Script_TheUndoing_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

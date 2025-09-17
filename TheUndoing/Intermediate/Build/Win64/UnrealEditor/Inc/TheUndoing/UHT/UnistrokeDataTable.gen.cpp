// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/UnistrokeDataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnistrokeDataTable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
THEUNDOING_API UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeDataTable();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUnistrokeDataTable ***********************************************
static_assert(std::is_polymorphic<FUnistrokeDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUnistrokeDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnistrokeDataTable;
class UScriptStruct* FUnistrokeDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnistrokeDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnistrokeDataTable, (UObject*)Z_Construct_UPackage__Script_TheUndoing(), TEXT("UnistrokeDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeDataTable.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spell/UnistrokeDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "UnistrokeDataTable" },
		{ "ModuleRelativePath", "Spell/UnistrokeDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "UnistrokeDataTable" },
		{ "ModuleRelativePath", "Spell/UnistrokeDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnistrokeDataTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnistrokeDataTable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnistrokeDataTable, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"UnistrokeDataTable",
	Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::PropPointers),
	sizeof(FUnistrokeDataTable),
	alignof(FUnistrokeDataTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnistrokeDataTable()
{
	if (!Z_Registration_Info_UScriptStruct_FUnistrokeDataTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnistrokeDataTable.InnerSingleton, Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnistrokeDataTable.InnerSingleton;
}
// ********** End ScriptStruct FUnistrokeDataTable *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeDataTable_h__Script_TheUndoing_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnistrokeDataTable::StaticStruct, Z_Construct_UScriptStruct_FUnistrokeDataTable_Statics::NewStructOps, TEXT("UnistrokeDataTable"), &Z_Registration_Info_UScriptStruct_FUnistrokeDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnistrokeDataTable), 115406211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeDataTable_h__Script_TheUndoing_3898473460(TEXT("/Script/TheUndoing"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeDataTable_h__Script_TheUndoing_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_OneDrive_Dokument_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_UnistrokeDataTable_h__Script_TheUndoing_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

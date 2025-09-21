// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheUndoing_init() {}
	THEUNDOING_API UFunction* Z_Construct_UDelegateFunction_TheUndoing_OnSpellRecognized__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TheUndoing;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TheUndoing()
	{
		if (!Z_Registration_Info_UPackage__Script_TheUndoing.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TheUndoing_OnSpellRecognized__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TheUndoing",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE8893464,
				0x12F321CC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TheUndoing.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TheUndoing.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TheUndoing(Z_Construct_UPackage__Script_TheUndoing, TEXT("/Script/TheUndoing"), Z_Registration_Info_UPackage__Script_TheUndoing, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE8893464, 0x12F321CC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

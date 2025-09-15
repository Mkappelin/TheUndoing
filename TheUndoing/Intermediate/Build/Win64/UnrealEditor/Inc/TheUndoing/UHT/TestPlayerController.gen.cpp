// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
THEUNDOING_API UClass* Z_Construct_UClass_ATestPlayerController();
THEUNDOING_API UClass* Z_Construct_UClass_ATestPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATestPlayerController ****************************************************
void ATestPlayerController::StaticRegisterNativesATestPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATestPlayerController;
UClass* ATestPlayerController::GetPrivateStaticClass()
{
	using TClass = ATestPlayerController;
	if (!Z_Registration_Info_UClass_ATestPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TestPlayerController"),
			Z_Registration_Info_UClass_ATestPlayerController.InnerSingleton,
			StaticRegisterNativesATestPlayerController,
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
	return Z_Registration_Info_UClass_ATestPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATestPlayerController_NoRegister()
{
	return ATestPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATestPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TestPlayerController.h" },
		{ "ModuleRelativePath", "Public/TestPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPlayerController_Statics::ClassParams = {
	&ATestPlayerController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestPlayerController()
{
	if (!Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton, Z_Construct_UClass_ATestPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestPlayerController.OuterSingleton;
}
ATestPlayerController::ATestPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPlayerController);
ATestPlayerController::~ATestPlayerController() {}
// ********** End Class ATestPlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h__Script_TheUndoing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestPlayerController, ATestPlayerController::StaticClass, TEXT("ATestPlayerController"), &Z_Registration_Info_UClass_ATestPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPlayerController), 168903904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h__Script_TheUndoing_528989698(TEXT("/Script/TheUndoing"),
	Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h__Script_TheUndoing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h__Script_TheUndoing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

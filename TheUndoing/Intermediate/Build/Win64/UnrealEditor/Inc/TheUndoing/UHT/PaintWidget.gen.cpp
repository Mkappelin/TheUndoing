// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheUndoing/Spell/PaintWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaintWidget() {}

// ********** Begin Cross Module References ********************************************************
THEUNDOING_API UClass* Z_Construct_UClass_UPaintWidget();
THEUNDOING_API UClass* Z_Construct_UClass_UPaintWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TheUndoing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaintWidget *************************************************************
void UPaintWidget::StaticRegisterNativesUPaintWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaintWidget;
UClass* UPaintWidget::GetPrivateStaticClass()
{
	using TClass = UPaintWidget;
	if (!Z_Registration_Info_UClass_UPaintWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaintWidget"),
			Z_Registration_Info_UClass_UPaintWidget.InnerSingleton,
			StaticRegisterNativesUPaintWidget,
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
	return Z_Registration_Info_UClass_UPaintWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaintWidget_NoRegister()
{
	return UPaintWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaintWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spell/PaintWidget.h" },
		{ "ModuleRelativePath", "Spell/PaintWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaintWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaintWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TheUndoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaintWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaintWidget_Statics::ClassParams = {
	&UPaintWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaintWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaintWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaintWidget()
{
	if (!Z_Registration_Info_UClass_UPaintWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaintWidget.OuterSingleton, Z_Construct_UClass_UPaintWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaintWidget.OuterSingleton;
}
UPaintWidget::UPaintWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaintWidget);
UPaintWidget::~UPaintWidget() {}
// ********** End Class UPaintWidget ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_altun_Documents_Unreal_Projects_TheUndoing_TheUndoing_Source_TheUndoing_Spell_PaintWidget_h__Script_TheUndoing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaintWidget, UPaintWidget::StaticClass, TEXT("UPaintWidget"), &Z_Registration_Info_UClass_UPaintWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaintWidget), 2314172736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_altun_Documents_Unreal_Projects_TheUndoing_TheUndoing_Source_TheUndoing_Spell_PaintWidget_h__Script_TheUndoing_1960811378(TEXT("/Script/TheUndoing"),
	Z_CompiledInDeferFile_FID_Users_altun_Documents_Unreal_Projects_TheUndoing_TheUndoing_Source_TheUndoing_Spell_PaintWidget_h__Script_TheUndoing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_altun_Documents_Unreal_Projects_TheUndoing_TheUndoing_Source_TheUndoing_Spell_PaintWidget_h__Script_TheUndoing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

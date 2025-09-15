// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestPlayerController.h"

#ifdef THEUNDOING_TestPlayerController_generated_h
#error "TestPlayerController.generated.h already included, missing '#pragma once' in TestPlayerController.h"
#endif
#define THEUNDOING_TestPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATestPlayerController ****************************************************
THEUNDOING_API UClass* Z_Construct_UClass_ATestPlayerController_NoRegister();

#define FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestPlayerController(); \
	friend struct Z_Construct_UClass_ATestPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEUNDOING_API UClass* Z_Construct_UClass_ATestPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheUndoing"), Z_Construct_UClass_ATestPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ATestPlayerController)


#define FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestPlayerController(ATestPlayerController&&) = delete; \
	ATestPlayerController(const ATestPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestPlayerController) \
	NO_API virtual ~ATestPlayerController();


#define FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h_12_PROLOG
#define FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestPlayerController;

// ********** End Class ATestPlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestGameMode.h"

#ifdef THEUNDOING_TestGameMode_generated_h
#error "TestGameMode.generated.h already included, missing '#pragma once' in TestGameMode.h"
#endif
#define THEUNDOING_TestGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATestGameMode ************************************************************
THEUNDOING_API UClass* Z_Construct_UClass_ATestGameMode_NoRegister();

#define FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestGameMode(); \
	friend struct Z_Construct_UClass_ATestGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEUNDOING_API UClass* Z_Construct_UClass_ATestGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheUndoing"), Z_Construct_UClass_ATestGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATestGameMode)


#define FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestGameMode(ATestGameMode&&) = delete; \
	ATestGameMode(const ATestGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGameMode) \
	NO_API virtual ~ATestGameMode();


#define FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestGameMode_h_12_PROLOG
#define FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestGameMode;

// ********** End Class ATestGameMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_neofe_Documents_GitHub_UnrealEngine_TheUndoing_TheUndoing_Source_TheUndoing_Public_TestGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

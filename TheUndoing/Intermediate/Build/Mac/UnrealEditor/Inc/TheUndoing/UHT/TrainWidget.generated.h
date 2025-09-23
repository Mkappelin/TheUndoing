// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spell/TrainWidget.h"

#ifdef THEUNDOING_TrainWidget_generated_h
#error "TrainWidget.generated.h already included, missing '#pragma once' in TrainWidget.h"
#endif
#define THEUNDOING_TrainWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTrainWidget *************************************************************
#define FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearPoints); \
	DECLARE_FUNCTION(execAddNewTemplate);


THEUNDOING_API UClass* Z_Construct_UClass_UTrainWidget_NoRegister();

#define FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrainWidget(); \
	friend struct Z_Construct_UClass_UTrainWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEUNDOING_API UClass* Z_Construct_UClass_UTrainWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrainWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheUndoing"), Z_Construct_UClass_UTrainWidget_NoRegister) \
	DECLARE_SERIALIZER(UTrainWidget)


#define FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrainWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrainWidget(UTrainWidget&&) = delete; \
	UTrainWidget(const UTrainWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrainWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrainWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrainWidget) \
	NO_API virtual ~UTrainWidget();


#define FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h_15_PROLOG
#define FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrainWidget;

// ********** End Class UTrainWidget ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ylvajuno_Documents_GitHub_TheUndoing_TheUndoing_Source_TheUndoing_Spell_TrainWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EndScreenWidget.h"

#ifdef PARKOUR_EndScreenWidget_generated_h
#error "EndScreenWidget.generated.h already included, missing '#pragma once' in EndScreenWidget.h"
#endif
#define PARKOUR_EndScreenWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEndScreenWidget *********************************************************
#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExitClicked); \
	DECLARE_FUNCTION(execOnRestartClicked);


PARKOUR_API UClass* Z_Construct_UClass_UEndScreenWidget_NoRegister();

#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndScreenWidget(); \
	friend struct Z_Construct_UClass_UEndScreenWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARKOUR_API UClass* Z_Construct_UClass_UEndScreenWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UEndScreenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Parkour"), Z_Construct_UClass_UEndScreenWidget_NoRegister) \
	DECLARE_SERIALIZER(UEndScreenWidget)


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndScreenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEndScreenWidget(UEndScreenWidget&&) = delete; \
	UEndScreenWidget(const UEndScreenWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndScreenWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndScreenWidget) \
	NO_API virtual ~UEndScreenWidget();


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h_12_PROLOG
#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEndScreenWidget;

// ********** End Class UEndScreenWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

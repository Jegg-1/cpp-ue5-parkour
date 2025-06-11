// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StartGate.h"

#ifdef PARKOUR_StartGate_generated_h
#error "StartGate.generated.h already included, missing '#pragma once' in StartGate.h"
#endif
#define PARKOUR_StartGate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AStartGate ***************************************************************
#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


PARKOUR_API UClass* Z_Construct_UClass_AStartGate_NoRegister();

#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStartGate(); \
	friend struct Z_Construct_UClass_AStartGate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARKOUR_API UClass* Z_Construct_UClass_AStartGate_NoRegister(); \
public: \
	DECLARE_CLASS2(AStartGate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parkour"), Z_Construct_UClass_AStartGate_NoRegister) \
	DECLARE_SERIALIZER(AStartGate)


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AStartGate(AStartGate&&) = delete; \
	AStartGate(const AStartGate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartGate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartGate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStartGate) \
	NO_API virtual ~AStartGate();


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h_12_PROLOG
#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AStartGate;

// ********** End Class AStartGate *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_cpp_proj_Parkour_Source_Parkour_StartGate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

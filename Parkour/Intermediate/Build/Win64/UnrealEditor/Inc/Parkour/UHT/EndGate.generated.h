// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EndGate.h"

#ifdef PARKOUR_EndGate_generated_h
#error "EndGate.generated.h already included, missing '#pragma once' in EndGate.h"
#endif
#define PARKOUR_EndGate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AEndGate *****************************************************************
#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


PARKOUR_API UClass* Z_Construct_UClass_AEndGate_NoRegister();

#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndGate(); \
	friend struct Z_Construct_UClass_AEndGate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARKOUR_API UClass* Z_Construct_UClass_AEndGate_NoRegister(); \
public: \
	DECLARE_CLASS2(AEndGate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parkour"), Z_Construct_UClass_AEndGate_NoRegister) \
	DECLARE_SERIALIZER(AEndGate)


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEndGate(AEndGate&&) = delete; \
	AEndGate(const AEndGate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndGate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndGate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEndGate) \
	NO_API virtual ~AEndGate();


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h_12_PROLOG
#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEndGate;

// ********** End Class AEndGate *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndGate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

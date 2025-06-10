// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameCharacter.h"

#ifdef PARKOUR_GameCharacter_generated_h
#error "GameCharacter.generated.h already included, missing '#pragma once' in GameCharacter.h"
#endif
#define PARKOUR_GameCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameCharacter ***********************************************************
PARKOUR_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister();

#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend struct Z_Construct_UClass_AGameCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARKOUR_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parkour"), Z_Construct_UClass_AGameCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGameCharacter)


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameCharacter(AGameCharacter&&) = delete; \
	AGameCharacter(const AGameCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameCharacter) \
	NO_API virtual ~AGameCharacter();


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h_12_PROLOG
#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameCharacter;

// ********** End Class AGameCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

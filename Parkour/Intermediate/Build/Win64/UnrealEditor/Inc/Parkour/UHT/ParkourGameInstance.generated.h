// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParkourGameInstance.h"

#ifdef PARKOUR_ParkourGameInstance_generated_h
#error "ParkourGameInstance.generated.h already included, missing '#pragma once' in ParkourGameInstance.h"
#endif
#define PARKOUR_ParkourGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParkourGameInstance *****************************************************
PARKOUR_API UClass* Z_Construct_UClass_UParkourGameInstance_NoRegister();

#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParkourGameInstance(); \
	friend struct Z_Construct_UClass_UParkourGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARKOUR_API UClass* Z_Construct_UClass_UParkourGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UParkourGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Parkour"), Z_Construct_UClass_UParkourGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UParkourGameInstance)


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParkourGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParkourGameInstance(UParkourGameInstance&&) = delete; \
	UParkourGameInstance(const UParkourGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParkourGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParkourGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParkourGameInstance) \
	NO_API virtual ~UParkourGameInstance();


#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h_7_PROLOG
#define FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h_10_INCLASS_NO_PURE_DECLS \
	FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParkourGameInstance;

// ********** End Class UParkourGameInstance *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

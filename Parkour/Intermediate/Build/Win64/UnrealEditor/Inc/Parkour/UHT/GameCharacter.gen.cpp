// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parkour/GameCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PARKOUR_API UClass* Z_Construct_UClass_AGameCharacter();
PARKOUR_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parkour();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameCharacter ***********************************************************
void AGameCharacter::StaticRegisterNativesAGameCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameCharacter;
UClass* AGameCharacter::GetPrivateStaticClass()
{
	using TClass = AGameCharacter;
	if (!Z_Registration_Info_UClass_AGameCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameCharacter"),
			Z_Registration_Info_UClass_AGameCharacter.InnerSingleton,
			StaticRegisterNativesAGameCharacter,
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
	return Z_Registration_Info_UClass_AGameCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameCharacter_NoRegister()
{
	return AGameCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameCharacter.h" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[] = {
		{ "Category", "GameCharacter" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cameraRotationOffset_MetaData[] = {
		{ "Category", "GameCharacter" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_capsuleComponent_MetaData[] = {
		{ "Category", "GameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[] = {
		{ "Category", "GameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rootScene_MetaData[] = {
		{ "Category", "GameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_cameraRotationOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_capsuleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_rootScene;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveSpeed_MetaData), NewProp_moveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_cameraRotationOffset = { "cameraRotationOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, cameraRotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cameraRotationOffset_MetaData), NewProp_cameraRotationOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_capsuleComponent = { "capsuleComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, capsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_capsuleComponent_MetaData), NewProp_capsuleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_MetaData), NewProp_camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_rootScene = { "rootScene", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, rootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rootScene_MetaData), NewProp_rootScene_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_moveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_cameraRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_capsuleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_rootScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Parkour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameCharacter_Statics::ClassParams = {
	&AGameCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameCharacter()
{
	if (!Z_Registration_Info_UClass_AGameCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameCharacter.OuterSingleton, Z_Construct_UClass_AGameCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCharacter);
AGameCharacter::~AGameCharacter() {}
// ********** End Class AGameCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h__Script_Parkour_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameCharacter, AGameCharacter::StaticClass, TEXT("AGameCharacter"), &Z_Registration_Info_UClass_AGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameCharacter), 3602279935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h__Script_Parkour_640347790(TEXT("/Script/Parkour"),
	Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h__Script_Parkour_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_GameCharacter_h__Script_Parkour_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

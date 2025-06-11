// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parkour/ParkourGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParkourGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PARKOUR_API UClass* Z_Construct_UClass_UParkourGameInstance();
PARKOUR_API UClass* Z_Construct_UClass_UParkourGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parkour();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParkourGameInstance *****************************************************
void UParkourGameInstance::StaticRegisterNativesUParkourGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParkourGameInstance;
UClass* UParkourGameInstance::GetPrivateStaticClass()
{
	using TClass = UParkourGameInstance;
	if (!Z_Registration_Info_UClass_UParkourGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParkourGameInstance"),
			Z_Registration_Info_UClass_UParkourGameInstance.InnerSingleton,
			StaticRegisterNativesUParkourGameInstance,
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
	return Z_Registration_Info_UClass_UParkourGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UParkourGameInstance_NoRegister()
{
	return UParkourGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParkourGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ParkourGameInstance.h" },
		{ "ModuleRelativePath", "ParkourGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParkourGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParkourGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Parkour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParkourGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParkourGameInstance_Statics::ClassParams = {
	&UParkourGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParkourGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UParkourGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParkourGameInstance()
{
	if (!Z_Registration_Info_UClass_UParkourGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParkourGameInstance.OuterSingleton, Z_Construct_UClass_UParkourGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParkourGameInstance.OuterSingleton;
}
UParkourGameInstance::UParkourGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParkourGameInstance);
UParkourGameInstance::~UParkourGameInstance() {}
// ********** End Class UParkourGameInstance *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h__Script_Parkour_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParkourGameInstance, UParkourGameInstance::StaticClass, TEXT("UParkourGameInstance"), &Z_Registration_Info_UClass_UParkourGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParkourGameInstance), 1878224512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h__Script_Parkour_4130635480(TEXT("/Script/Parkour"),
	Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h__Script_Parkour_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGameInstance_h__Script_Parkour_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

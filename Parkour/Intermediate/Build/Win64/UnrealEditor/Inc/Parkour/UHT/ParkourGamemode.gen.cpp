// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parkour/ParkourGamemode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParkourGamemode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PARKOUR_API UClass* Z_Construct_UClass_AParkourGamemode();
PARKOUR_API UClass* Z_Construct_UClass_AParkourGamemode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parkour();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AParkourGamemode *********************************************************
void AParkourGamemode::StaticRegisterNativesAParkourGamemode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParkourGamemode;
UClass* AParkourGamemode::GetPrivateStaticClass()
{
	using TClass = AParkourGamemode;
	if (!Z_Registration_Info_UClass_AParkourGamemode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParkourGamemode"),
			Z_Registration_Info_UClass_AParkourGamemode.InnerSingleton,
			StaticRegisterNativesAParkourGamemode,
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
	return Z_Registration_Info_UClass_AParkourGamemode.InnerSingleton;
}
UClass* Z_Construct_UClass_AParkourGamemode_NoRegister()
{
	return AParkourGamemode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AParkourGamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ParkourGamemode.h" },
		{ "ModuleRelativePath", "ParkourGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourGamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AParkourGamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Parkour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourGamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParkourGamemode_Statics::ClassParams = {
	&AParkourGamemode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParkourGamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_AParkourGamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParkourGamemode()
{
	if (!Z_Registration_Info_UClass_AParkourGamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParkourGamemode.OuterSingleton, Z_Construct_UClass_AParkourGamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParkourGamemode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourGamemode);
AParkourGamemode::~AParkourGamemode() {}
// ********** End Class AParkourGamemode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGamemode_h__Script_Parkour_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParkourGamemode, AParkourGamemode::StaticClass, TEXT("AParkourGamemode"), &Z_Registration_Info_UClass_AParkourGamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParkourGamemode), 3872555335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGamemode_h__Script_Parkour_794292458(TEXT("/Script/Parkour"),
	Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGamemode_h__Script_Parkour_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_ParkourGamemode_h__Script_Parkour_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parkour/EndScreenGamemode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEndScreenGamemode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PARKOUR_API UClass* Z_Construct_UClass_AEndScreenGamemode();
PARKOUR_API UClass* Z_Construct_UClass_AEndScreenGamemode_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Parkour();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEndScreenGamemode *******************************************************
void AEndScreenGamemode::StaticRegisterNativesAEndScreenGamemode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEndScreenGamemode;
UClass* AEndScreenGamemode::GetPrivateStaticClass()
{
	using TClass = AEndScreenGamemode;
	if (!Z_Registration_Info_UClass_AEndScreenGamemode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EndScreenGamemode"),
			Z_Registration_Info_UClass_AEndScreenGamemode.InnerSingleton,
			StaticRegisterNativesAEndScreenGamemode,
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
	return Z_Registration_Info_UClass_AEndScreenGamemode.InnerSingleton;
}
UClass* Z_Construct_UClass_AEndScreenGamemode_NoRegister()
{
	return AEndScreenGamemode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEndScreenGamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EndScreenGamemode.h" },
		{ "ModuleRelativePath", "EndScreenGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndScreenWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "EndScreenGamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EndScreenWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndScreenGamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEndScreenGamemode_Statics::NewProp_EndScreenWidgetClass = { "EndScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEndScreenGamemode, EndScreenWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndScreenWidgetClass_MetaData), NewProp_EndScreenWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEndScreenGamemode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndScreenGamemode_Statics::NewProp_EndScreenWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndScreenGamemode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEndScreenGamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Parkour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndScreenGamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndScreenGamemode_Statics::ClassParams = {
	&AEndScreenGamemode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEndScreenGamemode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEndScreenGamemode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEndScreenGamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEndScreenGamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEndScreenGamemode()
{
	if (!Z_Registration_Info_UClass_AEndScreenGamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndScreenGamemode.OuterSingleton, Z_Construct_UClass_AEndScreenGamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEndScreenGamemode.OuterSingleton;
}
AEndScreenGamemode::AEndScreenGamemode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEndScreenGamemode);
AEndScreenGamemode::~AEndScreenGamemode() {}
// ********** End Class AEndScreenGamemode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenGamemode_h__Script_Parkour_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEndScreenGamemode, AEndScreenGamemode::StaticClass, TEXT("AEndScreenGamemode"), &Z_Registration_Info_UClass_AEndScreenGamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndScreenGamemode), 2239875120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenGamemode_h__Script_Parkour_1843704960(TEXT("/Script/Parkour"),
	Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenGamemode_h__Script_Parkour_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenGamemode_h__Script_Parkour_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

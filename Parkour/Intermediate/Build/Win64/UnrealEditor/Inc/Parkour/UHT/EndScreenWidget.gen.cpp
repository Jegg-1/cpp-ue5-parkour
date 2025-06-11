// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parkour/EndScreenWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEndScreenWidget() {}

// ********** Begin Cross Module References ********************************************************
PARKOUR_API UClass* Z_Construct_UClass_UEndScreenWidget();
PARKOUR_API UClass* Z_Construct_UClass_UEndScreenWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Parkour();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEndScreenWidget Function OnExitClicked **********************************
struct Z_Construct_UFunction_UEndScreenWidget_OnExitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndScreenWidget_OnExitClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEndScreenWidget, nullptr, "OnExitClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndScreenWidget_OnExitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndScreenWidget_OnExitClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEndScreenWidget_OnExitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndScreenWidget_OnExitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndScreenWidget::execOnExitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitClicked();
	P_NATIVE_END;
}
// ********** End Class UEndScreenWidget Function OnExitClicked ************************************

// ********** Begin Class UEndScreenWidget Function OnRestartClicked *******************************
struct Z_Construct_UFunction_UEndScreenWidget_OnRestartClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndScreenWidget_OnRestartClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEndScreenWidget, nullptr, "OnRestartClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndScreenWidget_OnRestartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndScreenWidget_OnRestartClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEndScreenWidget_OnRestartClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndScreenWidget_OnRestartClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndScreenWidget::execOnRestartClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestartClicked();
	P_NATIVE_END;
}
// ********** End Class UEndScreenWidget Function OnRestartClicked *********************************

// ********** Begin Class UEndScreenWidget *********************************************************
void UEndScreenWidget::StaticRegisterNativesUEndScreenWidget()
{
	UClass* Class = UEndScreenWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitClicked", &UEndScreenWidget::execOnExitClicked },
		{ "OnRestartClicked", &UEndScreenWidget::execOnRestartClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEndScreenWidget;
UClass* UEndScreenWidget::GetPrivateStaticClass()
{
	using TClass = UEndScreenWidget;
	if (!Z_Registration_Info_UClass_UEndScreenWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EndScreenWidget"),
			Z_Registration_Info_UClass_UEndScreenWidget.InnerSingleton,
			StaticRegisterNativesUEndScreenWidget,
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
	return Z_Registration_Info_UClass_UEndScreenWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UEndScreenWidget_NoRegister()
{
	return UEndScreenWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEndScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EndScreenWidget.h" },
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndScreenWidget_OnExitClicked, "OnExitClicked" }, // 2564138270
		{ &Z_Construct_UFunction_UEndScreenWidget_OnRestartClicked, "OnRestartClicked" }, // 3530605383
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndScreenWidget_Statics::NewProp_TimeText = { "TimeText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndScreenWidget, TimeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeText_MetaData), NewProp_TimeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndScreenWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndScreenWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartButton_MetaData), NewProp_RestartButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndScreenWidget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndScreenWidget, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitButton_MetaData), NewProp_ExitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndScreenWidget_Statics::NewProp_TimeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndScreenWidget_Statics::NewProp_RestartButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndScreenWidget_Statics::NewProp_ExitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndScreenWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Parkour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndScreenWidget_Statics::ClassParams = {
	&UEndScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEndScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndScreenWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndScreenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndScreenWidget()
{
	if (!Z_Registration_Info_UClass_UEndScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndScreenWidget.OuterSingleton, Z_Construct_UClass_UEndScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndScreenWidget.OuterSingleton;
}
UEndScreenWidget::UEndScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndScreenWidget);
UEndScreenWidget::~UEndScreenWidget() {}
// ********** End Class UEndScreenWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h__Script_Parkour_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndScreenWidget, UEndScreenWidget::StaticClass, TEXT("UEndScreenWidget"), &Z_Registration_Info_UClass_UEndScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndScreenWidget), 1816408287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h__Script_Parkour_2694127453(TEXT("/Script/Parkour"),
	Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h__Script_Parkour_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_cpp_proj_Parkour_Source_Parkour_EndScreenWidget_h__Script_Parkour_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

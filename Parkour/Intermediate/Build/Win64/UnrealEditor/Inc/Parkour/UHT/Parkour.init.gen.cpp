// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkour_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Parkour;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Parkour()
	{
		if (!Z_Registration_Info_UPackage__Script_Parkour.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Parkour",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFE2E0949,
				0x938EC07B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Parkour.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Parkour.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Parkour(Z_Construct_UPackage__Script_Parkour, TEXT("/Script/Parkour"), Z_Registration_Info_UPackage__Script_Parkour, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE2E0949, 0x938EC07B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

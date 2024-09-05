// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrummer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Drummer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Drummer()
	{
		if (!Z_Registration_Info_UPackage__Script_Drummer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Drummer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF4FC7ECA,
				0xEAB914C2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Drummer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Drummer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Drummer(Z_Construct_UPackage__Script_Drummer, TEXT("/Script/Drummer"), Z_Registration_Info_UPackage__Script_Drummer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF4FC7ECA, 0xEAB914C2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrummer_init() {}
	DRUMMER_API UFunction* Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature();
	DRUMMER_API UFunction* Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature();
	DRUMMER_API UFunction* Z_Construct_UDelegateFunction_Drummer_OnBonePositionUpdated__DelegateSignature();
	DRUMMER_API UFunction* Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Drummer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Drummer()
	{
		if (!Z_Registration_Info_UPackage__Script_Drummer.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Drummer_OnBonePositionUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Drummer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE539B687,
				0x3351C060,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Drummer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Drummer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Drummer(Z_Construct_UPackage__Script_Drummer, TEXT("/Script/Drummer"), Z_Registration_Info_UPackage__Script_Drummer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE539B687, 0x3351C060));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

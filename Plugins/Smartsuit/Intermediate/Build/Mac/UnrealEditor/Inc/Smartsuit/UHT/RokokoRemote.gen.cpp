// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/RokokoRemote.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRokokoRemote() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SMARTSUIT_API UClass* Z_Construct_UClass_ARokokoRemote();
SMARTSUIT_API UClass* Z_Construct_UClass_ARokokoRemote_NoRegister();
SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature();
SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature();
SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature();
SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin Class ARokokoRemote
void ARokokoRemote::StaticRegisterNativesARokokoRemote()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARokokoRemote);
UClass* Z_Construct_UClass_ARokokoRemote_NoRegister()
{
	return ARokokoRemote::StaticClass();
}
struct Z_Construct_UClass_ARokokoRemote_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnected, const FString&, ResponseContentString);\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisconnected);\n" },
#endif
		{ "IncludePath", "RokokoRemote.h" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnected, const FString&, ResponseContentString);\nDECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisconnected);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompletedRequest_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInfoRequest_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackerRequest_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackRequest_MetaData[] = {
		{ "Category", "Command API" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedRequest;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInfoRequest;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackerRequest;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARokokoRemote>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnCompletedRequest = { "OnCompletedRequest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARokokoRemote, OnCompletedRequest), Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompletedRequest_MetaData), NewProp_OnCompletedRequest_MetaData) }; // 343886637
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnInfoRequest = { "OnInfoRequest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARokokoRemote, OnInfoRequest), Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInfoRequest_MetaData), NewProp_OnInfoRequest_MetaData) }; // 1130702036
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnTrackerRequest = { "OnTrackerRequest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARokokoRemote, OnTrackerRequest), Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrackerRequest_MetaData), NewProp_OnTrackerRequest_MetaData) }; // 2772842747
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnPlaybackRequest = { "OnPlaybackRequest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARokokoRemote, OnPlaybackRequest), Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackRequest_MetaData), NewProp_OnPlaybackRequest_MetaData) }; // 2657091885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARokokoRemote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnCompletedRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnInfoRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnTrackerRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnPlaybackRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARokokoRemote_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARokokoRemote_Statics::ClassParams = {
	&ARokokoRemote::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARokokoRemote_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::Class_MetaDataParams), Z_Construct_UClass_ARokokoRemote_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARokokoRemote()
{
	if (!Z_Registration_Info_UClass_ARokokoRemote.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARokokoRemote.OuterSingleton, Z_Construct_UClass_ARokokoRemote_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARokokoRemote.OuterSingleton;
}
template<> SMARTSUIT_API UClass* StaticClass<ARokokoRemote>()
{
	return ARokokoRemote::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARokokoRemote);
ARokokoRemote::~ARokokoRemote() {}
// End Class ARokokoRemote

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoRemote_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARokokoRemote, ARokokoRemote::StaticClass, TEXT("ARokokoRemote"), &Z_Registration_Info_UClass_ARokokoRemote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARokokoRemote), 3322698807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoRemote_h_1175174557(TEXT("/Script/Smartsuit"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoRemote_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoRemote_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

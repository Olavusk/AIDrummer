// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Characters/Drummers/MIDIDrummer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDrummer() {}

// Begin Cross Module References
DRUMMER_API UClass* Z_Construct_UClass_AMIDIDrummer();
DRUMMER_API UClass* Z_Construct_UClass_AMIDIDrummer_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_UMIDIEventReceiver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class AMIDIDrummer Function OnMIDIEventReceived
struct Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics
{
	struct MIDIDrummer_eventOnMIDIEventReceived_Parms
	{
		int32 Channel;
		int32 NoteID;
		int32 Velocity;
		FString EventType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDIDrumReceiver.h\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDIDrumReceiver.h" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoteID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIDrummer_eventOnMIDIEventReceived_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::NewProp_NoteID = { "NoteID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIDrummer_eventOnMIDIEventReceived_Parms, NoteID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIDrummer_eventOnMIDIEventReceived_Parms, Velocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIDrummer_eventOnMIDIEventReceived_Parms, EventType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::NewProp_NoteID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::NewProp_EventType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIDIDrummer, nullptr, "OnMIDIEventReceived", nullptr, nullptr, Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::MIDIDrummer_eventOnMIDIEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::MIDIDrummer_eventOnMIDIEventReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMIDIDrummer::execOnMIDIEventReceived)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_NoteID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
	P_GET_PROPERTY(FStrProperty,Z_Param_EventType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMIDIEventReceived(Z_Param_Channel,Z_Param_NoteID,Z_Param_Velocity,Z_Param_EventType);
	P_NATIVE_END;
}
// End Class AMIDIDrummer Function OnMIDIEventReceived

// Begin Class AMIDIDrummer
void AMIDIDrummer::StaticRegisterNativesAMIDIDrummer()
{
	UClass* Class = AMIDIDrummer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMIDIEventReceived", &AMIDIDrummer::execOnMIDIEventReceived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMIDIDrummer);
UClass* Z_Construct_UClass_AMIDIDrummer_NoRegister()
{
	return AMIDIDrummer::StaticClass();
}
struct Z_Construct_UClass_AMIDIDrummer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Drummers/MIDIDrummer.h" },
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MIDIBroadcaster_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to MIDI Event Broadcaster\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to MIDI Event Broadcaster" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIBroadcaster;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMIDIDrummer_OnMIDIEventReceived, "OnMIDIEventReceived" }, // 3263260581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMIDIDrummer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_MIDIBroadcaster = { "MIDIBroadcaster", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIDrummer, MIDIBroadcaster), Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDIBroadcaster_MetaData), NewProp_MIDIBroadcaster_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMIDIDrummer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_MIDIBroadcaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIDrummer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMIDIDrummer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIDrummer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMIDIDrummer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMIDIEventReceiver_NoRegister, (int32)VTABLE_OFFSET(AMIDIDrummer, IMIDIEventReceiver), false },  // 3129381067
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMIDIDrummer_Statics::ClassParams = {
	&AMIDIDrummer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMIDIDrummer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIDrummer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIDrummer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMIDIDrummer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMIDIDrummer()
{
	if (!Z_Registration_Info_UClass_AMIDIDrummer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMIDIDrummer.OuterSingleton, Z_Construct_UClass_AMIDIDrummer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMIDIDrummer.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<AMIDIDrummer>()
{
	return AMIDIDrummer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMIDIDrummer);
AMIDIDrummer::~AMIDIDrummer() {}
// End Class AMIDIDrummer

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMIDIDrummer, AMIDIDrummer::StaticClass, TEXT("AMIDIDrummer"), &Z_Registration_Info_UClass_AMIDIDrummer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMIDIDrummer), 93575544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_3946322650(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

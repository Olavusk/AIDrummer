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
DRUMMER_API UEnum* Z_Construct_UEnum_Drummer_EMIDIDrummerActionState();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class AMIDIDrummer Function HandleMIDIEvent
struct Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics
{
	struct MIDIDrummer_eventHandleMIDIEvent_Parms
	{
		int32 Channel;
		int32 NoteID;
		int32 Velocity;
		FString EventType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoteID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIDrummer_eventHandleMIDIEvent_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::NewProp_NoteID = { "NoteID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIDrummer_eventHandleMIDIEvent_Parms, NoteID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIDrummer_eventHandleMIDIEvent_Parms, Velocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIDrummer_eventHandleMIDIEvent_Parms, EventType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::NewProp_NoteID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::NewProp_EventType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIDIDrummer, nullptr, "HandleMIDIEvent", nullptr, nullptr, Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::MIDIDrummer_eventHandleMIDIEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::MIDIDrummer_eventHandleMIDIEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMIDIDrummer::execHandleMIDIEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_NoteID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
	P_GET_PROPERTY(FStrProperty,Z_Param_EventType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMIDIEvent(Z_Param_Channel,Z_Param_NoteID,Z_Param_Velocity,Z_Param_EventType);
	P_NATIVE_END;
}
// End Class AMIDIDrummer Function HandleMIDIEvent

// Begin Class AMIDIDrummer Function KickEnd
struct Z_Construct_UFunction_AMIDIDrummer_KickEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIDIDrummer_KickEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIDIDrummer, nullptr, "KickEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIDrummer_KickEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMIDIDrummer_KickEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMIDIDrummer_KickEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIDIDrummer_KickEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMIDIDrummer::execKickEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KickEnd();
	P_NATIVE_END;
}
// End Class AMIDIDrummer Function KickEnd

// Begin Class AMIDIDrummer
void AMIDIDrummer::StaticRegisterNativesAMIDIDrummer()
{
	UClass* Class = AMIDIDrummer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleMIDIEvent", &AMIDIDrummer::execHandleMIDIEvent },
		{ "KickEnd", &AMIDIDrummer::execKickEnd },
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
		{ "Comment", "// Reference to the MIDI Event Broadcaster\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the MIDI Event Broadcaster" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFootState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActionState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action states for each limb\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action states for each limb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActionState" },
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActionState" },
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActionState" },
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleDrumMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Animation montages\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation montages" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIBroadcaster;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightFootState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RightFootState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftFootState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeftFootState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightHandState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RightHandState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftHandState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeftHandState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimpleDrumMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMIDIDrummer_HandleMIDIEvent, "HandleMIDIEvent" }, // 2447197015
		{ &Z_Construct_UFunction_AMIDIDrummer_KickEnd, "KickEnd" }, // 4019085660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMIDIDrummer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_MIDIBroadcaster = { "MIDIBroadcaster", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIDrummer, MIDIBroadcaster), Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDIBroadcaster_MetaData), NewProp_MIDIBroadcaster_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_RightFootState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_RightFootState = { "RightFootState", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIDrummer, RightFootState), Z_Construct_UEnum_Drummer_EMIDIDrummerActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFootState_MetaData), NewProp_RightFootState_MetaData) }; // 2638317012
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_LeftFootState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_LeftFootState = { "LeftFootState", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIDrummer, LeftFootState), Z_Construct_UEnum_Drummer_EMIDIDrummerActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFootState_MetaData), NewProp_LeftFootState_MetaData) }; // 2638317012
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_RightHandState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_RightHandState = { "RightHandState", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIDrummer, RightHandState), Z_Construct_UEnum_Drummer_EMIDIDrummerActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandState_MetaData), NewProp_RightHandState_MetaData) }; // 2638317012
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_LeftHandState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_LeftHandState = { "LeftHandState", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIDrummer, LeftHandState), Z_Construct_UEnum_Drummer_EMIDIDrummerActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandState_MetaData), NewProp_LeftHandState_MetaData) }; // 2638317012
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_SimpleDrumMontage = { "SimpleDrumMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIDrummer, SimpleDrumMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleDrumMontage_MetaData), NewProp_SimpleDrumMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMIDIDrummer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_MIDIBroadcaster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_RightFootState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_RightFootState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_LeftFootState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_LeftFootState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_RightHandState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_RightHandState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_LeftHandState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_LeftHandState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIDrummer_Statics::NewProp_SimpleDrumMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIDrummer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMIDIDrummer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIDrummer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMIDIDrummer_Statics::ClassParams = {
	&AMIDIDrummer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMIDIDrummer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIDrummer_Statics::PropPointers),
	0,
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
		{ Z_Construct_UClass_AMIDIDrummer, AMIDIDrummer::StaticClass, TEXT("AMIDIDrummer"), &Z_Registration_Info_UClass_AMIDIDrummer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMIDIDrummer), 1885882159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_4234976697(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

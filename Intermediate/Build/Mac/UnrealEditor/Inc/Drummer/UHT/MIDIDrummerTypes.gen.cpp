// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Characters/Drummers/MIDIDrummerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDrummerTypes() {}

// Begin Cross Module References
DRUMMER_API UEnum* Z_Construct_UEnum_Drummer_EMIDIDrummerActionState();
DRUMMER_API UEnum* Z_Construct_UEnum_Drummer_EMIDIDrummerState();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Enum EMIDIDrummerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIDIDrummerState;
static UEnum* EMIDIDrummerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMIDIDrummerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMIDIDrummerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Drummer_EMIDIDrummerState, (UObject*)Z_Construct_UPackage__Script_Drummer(), TEXT("EMIDIDrummerState"));
	}
	return Z_Registration_Info_UEnum_EMIDIDrummerState.OuterSingleton;
}
template<> DRUMMER_API UEnum* StaticEnum<EMIDIDrummerState>()
{
	return EMIDIDrummerState_StaticEnum();
}
struct Z_Construct_UEnum_Drummer_EMIDIDrummerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDS_Drumming.DisplayName", "Drumming" },
		{ "EDS_Drumming.Name", "EMIDIDrummerState::EDS_Drumming" },
		{ "EDS_Idle.DisplayName", "Idle" },
		{ "EDS_Idle.Name", "EMIDIDrummerState::EDS_Idle" },
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummerTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMIDIDrummerState::EDS_Idle", (int64)EMIDIDrummerState::EDS_Idle },
		{ "EMIDIDrummerState::EDS_Drumming", (int64)EMIDIDrummerState::EDS_Drumming },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Drummer_EMIDIDrummerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Drummer,
	nullptr,
	"EMIDIDrummerState",
	"EMIDIDrummerState",
	Z_Construct_UEnum_Drummer_EMIDIDrummerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Drummer_EMIDIDrummerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Drummer_EMIDIDrummerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Drummer_EMIDIDrummerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Drummer_EMIDIDrummerState()
{
	if (!Z_Registration_Info_UEnum_EMIDIDrummerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIDIDrummerState.InnerSingleton, Z_Construct_UEnum_Drummer_EMIDIDrummerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMIDIDrummerState.InnerSingleton;
}
// End Enum EMIDIDrummerState

// Begin Enum EMIDIDrummerActionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIDIDrummerActionState;
static UEnum* EMIDIDrummerActionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMIDIDrummerActionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMIDIDrummerActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Drummer_EMIDIDrummerActionState, (UObject*)Z_Construct_UPackage__Script_Drummer(), TEXT("EMIDIDrummerActionState"));
	}
	return Z_Registration_Info_UEnum_EMIDIDrummerActionState.OuterSingleton;
}
template<> DRUMMER_API UEnum* StaticEnum<EMIDIDrummerActionState>()
{
	return EMIDIDrummerActionState_StaticEnum();
}
struct Z_Construct_UEnum_Drummer_EMIDIDrummerActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDAS_LeftFootMove.DisplayName", "Left Foot Move" },
		{ "EDAS_LeftFootMove.Name", "EMIDIDrummerActionState::EDAS_LeftFootMove" },
		{ "EDAS_LeftHandMove.DisplayName", "Left Hand Move" },
		{ "EDAS_LeftHandMove.Name", "EMIDIDrummerActionState::EDAS_LeftHandMove" },
		{ "EDAS_RightFootMove.DisplayName", "Right Foot Move" },
		{ "EDAS_RightFootMove.Name", "EMIDIDrummerActionState::EDAS_RightFootMove" },
		{ "EDAS_RightHandMove.DisplayName", "Right Hand Move" },
		{ "EDAS_RightHandMove.Name", "EMIDIDrummerActionState::EDAS_RightHandMove" },
		{ "EDAS_Unoccupied.DisplayName", "Unoccupied" },
		{ "EDAS_Unoccupied.Name", "EMIDIDrummerActionState::EDAS_Unoccupied" },
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummerTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMIDIDrummerActionState::EDAS_Unoccupied", (int64)EMIDIDrummerActionState::EDAS_Unoccupied },
		{ "EMIDIDrummerActionState::EDAS_RightFootMove", (int64)EMIDIDrummerActionState::EDAS_RightFootMove },
		{ "EMIDIDrummerActionState::EDAS_LeftFootMove", (int64)EMIDIDrummerActionState::EDAS_LeftFootMove },
		{ "EMIDIDrummerActionState::EDAS_RightHandMove", (int64)EMIDIDrummerActionState::EDAS_RightHandMove },
		{ "EMIDIDrummerActionState::EDAS_LeftHandMove", (int64)EMIDIDrummerActionState::EDAS_LeftHandMove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Drummer_EMIDIDrummerActionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Drummer,
	nullptr,
	"EMIDIDrummerActionState",
	"EMIDIDrummerActionState",
	Z_Construct_UEnum_Drummer_EMIDIDrummerActionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Drummer_EMIDIDrummerActionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Drummer_EMIDIDrummerActionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Drummer_EMIDIDrummerActionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Drummer_EMIDIDrummerActionState()
{
	if (!Z_Registration_Info_UEnum_EMIDIDrummerActionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIDIDrummerActionState.InnerSingleton, Z_Construct_UEnum_Drummer_EMIDIDrummerActionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMIDIDrummerActionState.InnerSingleton;
}
// End Enum EMIDIDrummerActionState

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMIDIDrummerState_StaticEnum, TEXT("EMIDIDrummerState"), &Z_Registration_Info_UEnum_EMIDIDrummerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2436876966U) },
		{ EMIDIDrummerActionState_StaticEnum, TEXT("EMIDIDrummerActionState"), &Z_Registration_Info_UEnum_EMIDIDrummerActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4087162050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerTypes_h_1940671948(TEXT("/Script/Drummer"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTypes() {}

// Begin Cross Module References
DRUMMER_API UEnum* Z_Construct_UEnum_Drummer_EActionState();
DRUMMER_API UEnum* Z_Construct_UEnum_Drummer_ECharacterState();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Drummer_ECharacterState, (UObject*)Z_Construct_UPackage__Script_Drummer(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> DRUMMER_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_Drummer_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Drumming.DisplayName", "Drumming" },
		{ "ECS_Drumming.Name", "ECharacterState::ECS_Drumming" },
		{ "ECS_EquipedTwoHandedWeapon.DisplayName", "Equiped Two-Handed Weapon" },
		{ "ECS_EquipedTwoHandedWeapon.Name", "ECharacterState::ECS_EquipedTwoHandedWeapon" },
		{ "ECS_EquippedLeftHandDrumstick.DisplayName", "Equipped Left-Hand Drumstick" },
		{ "ECS_EquippedLeftHandDrumstick.Name", "ECharacterState::ECS_EquippedLeftHandDrumstick" },
		{ "ECS_EquippedOneHandedWeapon.DisplayName", "Equipped One-Handed Weapon" },
		{ "ECS_EquippedOneHandedWeapon.Name", "ECharacterState::ECS_EquippedOneHandedWeapon" },
		{ "ECS_EquippedRightHandDrumstick.DisplayName", "Equipped Right-Hand Drumstick" },
		{ "ECS_EquippedRightHandDrumstick.Name", "ECharacterState::ECS_EquippedRightHandDrumstick" },
		{ "ECS_Unequipped.DisplayName", "Unequipped" },
		{ "ECS_Unequipped.Name", "ECharacterState::ECS_Unequipped" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::ECS_Unequipped", (int64)ECharacterState::ECS_Unequipped },
		{ "ECharacterState::ECS_EquippedOneHandedWeapon", (int64)ECharacterState::ECS_EquippedOneHandedWeapon },
		{ "ECharacterState::ECS_EquipedTwoHandedWeapon", (int64)ECharacterState::ECS_EquipedTwoHandedWeapon },
		{ "ECharacterState::ECS_EquippedRightHandDrumstick", (int64)ECharacterState::ECS_EquippedRightHandDrumstick },
		{ "ECharacterState::ECS_EquippedLeftHandDrumstick", (int64)ECharacterState::ECS_EquippedLeftHandDrumstick },
		{ "ECharacterState::ECS_Drumming", (int64)ECharacterState::ECS_Drumming },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Drummer_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Drummer,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_Drummer_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Drummer_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Drummer_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Drummer_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Drummer_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_Drummer_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Enum EActionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActionState;
static UEnum* EActionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Drummer_EActionState, (UObject*)Z_Construct_UPackage__Script_Drummer(), TEXT("EActionState"));
	}
	return Z_Registration_Info_UEnum_EActionState.OuterSingleton;
}
template<> DRUMMER_API UEnum* StaticEnum<EActionState>()
{
	return EActionState_StaticEnum();
}
struct Z_Construct_UEnum_Drummer_EActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAS_Attacking.DisplayName", "Attacking" },
		{ "EAS_Attacking.Name", "EActionState::EAS_Attacking" },
		{ "EAS_EquippingDrumstick.DisplayName", "Equipping Drumstick" },
		{ "EAS_EquippingDrumstick.Name", "EActionState::EAS_EquippingDrumstick" },
		{ "EAS_EquippingWeapon.DisplayName", "Equipping Weapon" },
		{ "EAS_EquippingWeapon.Name", "EActionState::EAS_EquippingWeapon" },
		{ "EAS_Unoccupied.DisplayName", "Unnoccupied" },
		{ "EAS_Unoccupied.Name", "EActionState::EAS_Unoccupied" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActionState::EAS_Unoccupied", (int64)EActionState::EAS_Unoccupied },
		{ "EActionState::EAS_Attacking", (int64)EActionState::EAS_Attacking },
		{ "EActionState::EAS_EquippingWeapon", (int64)EActionState::EAS_EquippingWeapon },
		{ "EActionState::EAS_EquippingDrumstick", (int64)EActionState::EAS_EquippingDrumstick },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Drummer_EActionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Drummer,
	nullptr,
	"EActionState",
	"EActionState",
	Z_Construct_UEnum_Drummer_EActionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Drummer_EActionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Drummer_EActionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Drummer_EActionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Drummer_EActionState()
{
	if (!Z_Registration_Info_UEnum_EActionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActionState.InnerSingleton, Z_Construct_UEnum_Drummer_EActionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActionState.InnerSingleton;
}
// End Enum EActionState

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_CharacterTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1720296074U) },
		{ EActionState_StaticEnum, TEXT("EActionState"), &Z_Registration_Info_UEnum_EActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2938374222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_CharacterTypes_h_140524692(TEXT("/Script/Drummer"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_CharacterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_CharacterTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
    ECS_Unequipped UMETA(DisplayName = "Unequipped"),
    ECS_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One-Handed Weapon"),
    ECS_EquipedTwoHandedWeapon UMETA(DisplayName = "Equiped Two-Handed Weapon"),
    ECS_EquippedRightHandDrumstick UMETA(DisplayName = "Equipped Right-Hand Drumstick"),
    ECS_EquippedLeftHandDrumstick UMETA(DisplayName = "Equipped Left-Hand Drumstick"),
    ECS_Drumming UMETA(DisplayName = "Drumming"),

};

UENUM(BlueprintType)
enum class EActionState : uint8
{
    EAS_Unoccupied UMETA(DisplayName = "Unnoccupied"),
    EAS_Attacking UMETA(DisplayName = "Attacking"),
    EAS_EquippingWeapon UMETA(DisplayName = "Equipping Weapon"),
    EAS_EquippingDrumstick UMETA(DisplayName = "Equipping Drumstick")
};

#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
    ECS_Unequipped UMETA(DisplayName = "Unequipped"),
    ECS_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One-Handed Weapon"),
    ECS_EquipedTwoHandedWeapon UMETA(DisplayName = "Equiped Two-Handed Weapon"),
    ECS_Drumming UMETA(DisplayName = "Drumming"),

};

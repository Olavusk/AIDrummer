#pragma once

UENUM(BlueprintType)
enum class EMIDIDrummerState : uint8
{
    EDS_Idle UMETA(DisplayName = "Idle"),
    EDS_Drumming UMETA(DisplayName = "Drumming"),
};

UENUM(BlueprintType)
enum class EMIDIDrummerActionState : uint8
{
    EDAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
    EDAS_Moving UMETA(DisplayName = "Moving"),
};

UENUM(BlueprintType)
enum class EModuleState : uint8
{
    Idle UMETA(DisplayName = "Idle"),
    Hit UMETA(DisplayName = "Moving"),
    Returning UMETA(DisplayName = "Returning"),
};
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
    EDAS_RightFootMove UMETA(DisplayName = "Right Foot Move"),
    EDAS_LeftFootMove UMETA(DisplayName = "Left Foot Move"),
    EDAS_RightHandMove UMETA(DisplayName = "Right Hand Move"),
    EDAS_LeftHandMove UMETA(DisplayName = "Left Hand Move"),
};
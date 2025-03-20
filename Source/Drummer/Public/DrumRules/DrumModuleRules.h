#pragma once

#include "CoreMinimal.h"
#include "Characters/Drummers/MIDIDrummerTypes.h"

struct FDrumModuleRule
{
    FString ModuleName;
    float DefaultInterpDuration; // Base interpolation duration (seconds)
    float MinVelocityThreshold;  // Below this velocity, animation is slower
    float MaxVelocityThreshold;  // Above this velocity, animation is faster
    EModuleState Status;
    FString FallbackModule;            // Optionally, a fallback module name if this one is busy
    float DefaultAccelerationExponent; // Base exponent for acceleration/deceleration

    FDrumModuleRule()
        : ModuleName(TEXT("Default")), DefaultInterpDuration(0.7f), MinVelocityThreshold(0.f), MaxVelocityThreshold(127.f), Status(EModuleState::Idle), FallbackModule(TEXT("")), DefaultAccelerationExponent(2.0f) // Default value for acceleration exponent
    {
    }

    float GetInterpDuration(int32 Velocity) const
    {
        if (Velocity <= MinVelocityThreshold)
        {
            return DefaultInterpDuration * 1.5f;
        }
        else if (Velocity >= MaxVelocityThreshold)
        {
            return DefaultInterpDuration * 0.5f;
        }
        else
        {
            float Alpha = (Velocity - MinVelocityThreshold) / (MaxVelocityThreshold - MinVelocityThreshold);
            float SlowDuration = DefaultInterpDuration * 1.5f;
            float FastDuration = DefaultInterpDuration * 0.5f;
            return FMath::Lerp(SlowDuration, FastDuration, Alpha);
        }
    }

    float GetAccelerationExponent(int32 Velocity) const
    {
        if (Velocity <= MinVelocityThreshold)
        {
            return DefaultAccelerationExponent * 1.5f;
        }
        else if (Velocity >= MaxVelocityThreshold)
        {
            return DefaultAccelerationExponent * 0.5f;
        }
        else
        {
            float Alpha = (Velocity - MinVelocityThreshold) / (MaxVelocityThreshold - MinVelocityThreshold);
            float SlowExp = DefaultAccelerationExponent * 1.5f;
            float FastExp = DefaultAccelerationExponent * 0.5f;
            return FMath::Lerp(SlowExp, FastExp, Alpha);
        }
    }
};

class FDrumModuleRulesManager
{
public:
    TMap<FString, FDrumModuleRule> ModuleRules;
    TMap<int32, FString> NoteToModuleMapping;

    FDrumModuleRulesManager()
    {
        // Set up default module rules.
        FDrumModuleRule RightLegRule;
        RightLegRule.ModuleName = TEXT("RightLeg");
        RightLegRule.DefaultInterpDuration = 0.25f;
        RightLegRule.MinVelocityThreshold = 30;
        RightLegRule.MaxVelocityThreshold = 100;
        RightLegRule.Status = EModuleState::Idle;
        RightLegRule.DefaultAccelerationExponent = 2.0f;
        ModuleRules.Add(RightLegRule.ModuleName, RightLegRule);

        FDrumModuleRule LeftLegRule;
        LeftLegRule.ModuleName = TEXT("LeftLeg");
        LeftLegRule.DefaultInterpDuration = 0.25f;
        LeftLegRule.MinVelocityThreshold = 30;
        LeftLegRule.MaxVelocityThreshold = 100;
        LeftLegRule.Status = EModuleState::Idle;
        LeftLegRule.DefaultAccelerationExponent = 2.0f;
        ModuleRules.Add(LeftLegRule.ModuleName, LeftLegRule);

        FDrumModuleRule RightArmRule;
        RightArmRule.ModuleName = TEXT("RightArm");
        RightArmRule.DefaultInterpDuration = 0.2f;
        RightArmRule.MinVelocityThreshold = 40;
        RightArmRule.MaxVelocityThreshold = 110;
        RightArmRule.Status = EModuleState::Idle;
        RightArmRule.DefaultAccelerationExponent = 2.0f;
        ModuleRules.Add(RightArmRule.ModuleName, RightArmRule);

        FDrumModuleRule LeftArmRule;
        LeftArmRule.ModuleName = TEXT("LeftArm");
        LeftArmRule.DefaultInterpDuration = 0.2f;
        LeftArmRule.MinVelocityThreshold = 40;
        LeftArmRule.MaxVelocityThreshold = 110;
        LeftArmRule.Status = EModuleState::Idle;
        LeftArmRule.DefaultAccelerationExponent = 2.0f;
        ModuleRules.Add(LeftArmRule.ModuleName, LeftArmRule);

        FDrumModuleRule BodyRule;
        BodyRule.ModuleName = TEXT("Body");
        BodyRule.DefaultInterpDuration = 0.3f;
        BodyRule.MinVelocityThreshold = 20;
        BodyRule.MaxVelocityThreshold = 90;
        BodyRule.Status = EModuleState::Idle;
        BodyRule.DefaultAccelerationExponent = 2.0f;
        ModuleRules.Add(BodyRule.ModuleName, BodyRule);

        // Set up mapping from MIDI note to default module.
        NoteToModuleMapping.Add(36, TEXT("RightLeg")); // e.g., Kick
        NoteToModuleMapping.Add(37, TEXT("LeftArm"));  // e.g., Snare
        NoteToModuleMapping.Add(42, TEXT("RightArm")); // e.g., HiHat
        NoteToModuleMapping.Add(49, TEXT("Body"));     // e.g., Crash
    }

    bool GetModuleRule(const FString &ModuleName, FDrumModuleRule &OutRule) const
    {
        if (ModuleRules.Contains(ModuleName))
        {
            OutRule = ModuleRules[ModuleName];
            return true;
        }
        return false;
    }

    void SetModuleStatus(const FString &ModuleName, EModuleState NewStatus)
    {
        if (ModuleRules.Contains(ModuleName))
        {
            ModuleRules[ModuleName].Status = NewStatus;
        }
    }

    FString GetModuleForNote(int32 MidiNote) const
    {
        switch (MidiNote)
        {
        case 35: // Acoustic Bass Drum (only right leg)
        case 36: // Kick Drum (only right leg)
            return "RightLeg";

        case 37: // Snare Drum (use LeftArm if available, otherwise RightArm)
        case 38: // Snare Drum
        case 40: // Electric Snare Drum
            if (ModuleRules.Contains("LeftArm") && ModuleRules["LeftArm"].Status != EModuleState::Hit)
            {
                return "LeftArm";
            }
            if (ModuleRules.Contains("RightArm") && ModuleRules["RightArm"].Status != EModuleState::Hit)
            {
                return "RightArm";
            }
            break;

        case 41: // Low Floor Tom (Check RightArm first, then LeftArm)
        case 43: // Low Tom (Check RightArm first, then LeftArm)
        case 45: // Mid Tom (Check RightArm first, then LeftArm)
        case 48: // High Tom (Check RightArm first, then LeftArm)
            if (ModuleRules.Contains("RightArm") && ModuleRules["RightArm"].Status != EModuleState::Hit)
            {
                return "RightArm";
            }
            if (ModuleRules.Contains("LeftArm") && ModuleRules["LeftArm"].Status != EModuleState::Hit)
            {
                return "LeftArm";
            }
            break;

        case 55: // Crash Cymbal 1 (Check LeftArm first, then RightArm)
            if (ModuleRules.Contains("LeftArm") && ModuleRules["LeftArm"].Status != EModuleState::Hit)
            {
                return "LeftArm";
            }
            if (ModuleRules.Contains("RightArm") && ModuleRules["RightArm"].Status != EModuleState::Hit)
            {
                return "RightArm";
            }
            break;

        case 44: // Pedal Hi-hat
            if (ModuleRules.Contains("LeftLeg") && ModuleRules["LeftLeg"].Status != EModuleState::Hit)
            {
                return "LeftLeg";
            }
            break;

        case 42: // Closed Hi-hat
            if (ModuleRules.Contains("RightArm") && ModuleRules["RightArm"].Status != EModuleState::Hit)
            {
                return "RightArm";
            }
            if (ModuleRules.Contains("LeftArm") && ModuleRules["LeftArm"].Status != EModuleState::Hit)
            {
                return "LeftArm";
            }
            break;

        case 46: // Open Hi-hat
            if (ModuleRules.Contains("RightArm") && ModuleRules["RightArm"].Status != EModuleState::Hit)
            {
                return "RightArm";
            }
            if (ModuleRules.Contains("LeftArm") && ModuleRules["LeftArm"].Status != EModuleState::Hit)
            {
                return "LeftArm";
            }
            break;

        case 51: // Ride Cymbal 1
        case 52: // Crash Cymbal 2
        case 57: // Crash Cymbal 2
        case 59: // Ride Cymbal 2
            if (ModuleRules.Contains("RightArm") && ModuleRules["RightArm"].Status != EModuleState::Hit)
            {
                return "RightArm";
            }
            if (ModuleRules.Contains("LeftArm") && ModuleRules["LeftArm"].Status != EModuleState::Hit)
            {
                return "LeftArm";
            }
            break;
        }
        return "Default"; // If no available module, return a default fallback.
    }
};
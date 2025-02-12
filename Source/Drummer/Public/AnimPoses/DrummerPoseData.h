#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "DrummerPoseData.generated.h"

USTRUCT(BlueprintType)
struct FDrummerPoseData
{
    GENERATED_BODY()

public:
    // An array of bone transforms in the order defined by the skeleton.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drummer Animation")
    TArray<FTransform> BoneTransforms;
};
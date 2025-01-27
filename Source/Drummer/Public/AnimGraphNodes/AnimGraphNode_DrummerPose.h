#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_SkeletalControlBase.h"
#include "AnimGraphNodes/AnimNode_DrummerPose.h"
#include "AnimGraphNode_DrummerPose.generated.h"

UCLASS()
class DRUMMER_API UAnimGraphNode_DrummerPose : public UAnimGraphNode_SkeletalControlBase
{
    GENERATED_BODY()

public:
    virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    virtual FText GetTooltipText() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
    virtual FString GetNodeCategory() const override;
    virtual const FAnimNode_SkeletalControlBase *GetNode() const override { return &Node; }

private:
    UPROPERTY()
    FAnimNode_DrummerPose Node;
};
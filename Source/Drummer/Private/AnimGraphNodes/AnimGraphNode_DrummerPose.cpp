#include "AnimGraphNodes/AnimGraphNode_DrummerPose.h"

#define LOCTEXT_NAMESPACE "AIDrummerAnimNode"

FText UAnimGraphNode_DrummerPose::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("DrummerPoseTitle", "Drummer Bone Pose");
}

FText UAnimGraphNode_DrummerPose::GetTooltipText() const
{
    return LOCTEXT("DrummerPoseTooltip", "Applies bone transformations from database.");
}

FLinearColor UAnimGraphNode_DrummerPose::GetNodeTitleColor() const
{
    return FLinearColor(0.8f, 0.2f, 0.2f);
}

FString UAnimGraphNode_DrummerPose::GetNodeCategory() const
{
    return TEXT("Drummer");
}

#undef LOCTEXT_NAMESPACE
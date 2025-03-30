#pragma once

#include "Animation/AnimData/IAnimationDataModel.h"
#include "BonePose.h"
#include "CoreMinimal.h"

// A simple implementation that stores raw bone data for one frame.
class FDrummerAnimationDataModel : public IAnimationDataModel
{
public:
    // Update the model with the raw per-frame data (a TMap from bone name to local transform)
    void UpdateFromFrameData(const TMap<FName, FTransform> &InFrameData)
    {
        RawData = InFrameData;
        // Ensure BoneOrder is populated
        if (BoneOrder.Num() == 0)
        {
            RawData.GetKeys(BoneOrder);
        }
    }

    // -- Minimal IAnimationDataModel interface implementation --

    virtual double GetPlayLength() const override { return 0.0; }
    virtual int32 GetNumberOfFrames() const override { return 1; }
    virtual int32 GetNumberOfKeys() const override { return RawData.Num(); }
    virtual FFrameRate GetFrameRate() const override { return FFrameRate(30, 1); }

    // Return the bone transform for a given bone name at the given frame time.
    // (For a real implementation, we might support interpolation between frames.)
    virtual FTransform EvaluateBoneTrackTransform(FName TrackName, const FFrameTime &FrameTime, const EAnimInterpolationType &Interpolation) const override
    {
        const FTransform *Found = RawData.Find(TrackName);
        return (Found) ? *Found : FTransform::Identity;
    }

    // Dummy implementations for deprecated or unused functions:
    virtual FTransform GetBoneTrackTransform(FName TrackName, const FFrameNumber &FrameNumber) const override { return EvaluateBoneTrackTransform(TrackName, FFrameTime(FrameNumber), EAnimInterpolationType::Linear); }
    virtual void GetBoneTrackTransforms(FName TrackName, const TArray<FFrameNumber> &FrameNumbers, TArray<FTransform> &OutTransforms) const override {}
    virtual void GetBoneTrackTransforms(FName TrackName, TArray<FTransform> &OutTransforms) const override {}
    virtual void GetBoneTracksTransform(const TArray<FName> &TrackNames, const FFrameNumber &FrameNumber, TArray<FTransform> &OutTransforms) const override {}

    // For simplicity, we don’t use bone tracks here, so return an empty array.
    virtual const TArray<FBoneAnimationTrack> &GetBoneAnimationTracks() const override
    {
        static TArray<FBoneAnimationTrack> Dummy;
        return Dummy;
    }
    virtual const FBoneAnimationTrack &GetBoneTrackByIndex(int32 TrackIndex) const override
    {
        checkNoEntry();
        return *(new FBoneAnimationTrack());
    }
    virtual const FBoneAnimationTrack &GetBoneTrackByName(FName TrackName) const override
    {
        checkNoEntry();
        return *(new FBoneAnimationTrack());
    }
    virtual const FBoneAnimationTrack *FindBoneTrackByName(FName Name) const override { return nullptr; }
    virtual const FBoneAnimationTrack *FindBoneTrackByIndex(int32 BoneIndex) const override { return nullptr; }
    virtual int32 GetBoneTrackIndex(const FBoneAnimationTrack &Track) const override { return INDEX_NONE; }
    virtual int32 GetBoneTrackIndexByName(FName TrackName) const override { return INDEX_NONE; }
    virtual bool IsValidBoneTrackIndex(int32 TrackIndex) const override { return false; }
    virtual bool IsValidBoneTrackName(const FName &TrackName) const override { return RawData.Contains(TrackName); }
    virtual int32 GetNumBoneTracks() const override { return RawData.Num(); }
    virtual void GetBoneTrackNames(TArray<FName> &OutNames) const override { RawData.GetKeys(OutNames); }
    virtual const FAnimationCurveData &GetCurveData() const override
    {
        static FAnimationCurveData Dummy;
        return Dummy;
    }
    virtual int32 GetNumberOfTransformCurves() const override { return 0; }
    virtual int32 GetNumberOfFloatCurves() const override { return 0; }
    virtual const TArray<FFloatCurve> &GetFloatCurves() const override
    {
        static TArray<FFloatCurve> Dummy;
        return Dummy;
    }
    virtual const TArray<FTransformCurve> &GetTransformCurves() const override
    {
        static TArray<FTransformCurve> Dummy;
        return Dummy;
    }
    virtual const FAnimCurveBase *FindCurve(const FAnimationCurveIdentifier &CurveIdentifier) const override { return nullptr; }
    virtual const FFloatCurve *FindFloatCurve(const FAnimationCurveIdentifier &CurveIdentifier) const override { return nullptr; }
    virtual const FTransformCurve *FindTransformCurve(const FAnimationCurveIdentifier &CurveIdentifier) const override { return nullptr; }
    virtual const FRichCurve *FindRichCurve(const FAnimationCurveIdentifier &CurveIdentifier) const override { return nullptr; }
    virtual const FAnimCurveBase &GetCurve(const FAnimationCurveIdentifier &CurveIdentifier) const override
    {
        checkNoEntry();
        return *(new FAnimCurveBase());
    }
    virtual const FFloatCurve &GetFloatCurve(const FAnimationCurveIdentifier &CurveIdentifier) const override
    {
        checkNoEntry();
        return *(new FFloatCurve());
    }
    virtual const FTransformCurve &GetTransformCurve(const FAnimationCurveIdentifier &CurveIdentifier) const override
    {
        checkNoEntry();
        return *(new FTransformCurve());
    }
    virtual const FRichCurve &GetRichCurve(const FAnimationCurveIdentifier &CurveIdentifier) const override
    {
        checkNoEntry();
        return *(new FRichCurve());
    }
    virtual TArrayView<const FAnimatedBoneAttribute> GetAttributes() const override { return TArrayView<const FAnimatedBoneAttribute>(); }
    virtual int32 GetNumberOfAttributes() const override { return 0; }
    virtual int32 GetNumberOfAttributesForBoneIndex(const int32 BoneIndex) const override { return 0; }
    virtual void GetAttributesForBone(const FName &BoneName, TArray<const FAnimatedBoneAttribute *> &OutBoneAttributes) const override {}
    virtual const FAnimatedBoneAttribute &GetAttribute(const FAnimationAttributeIdentifier &AttributeIdentifier) const override
    {
        checkNoEntry();
        return *(new FAnimatedBoneAttribute());
    }
    virtual const FAnimatedBoneAttribute *FindAttribute(const FAnimationAttributeIdentifier &AttributeIdentifier) const override { return nullptr; }
    virtual UAnimSequence *GetAnimationSequence() const override { return nullptr; }
    virtual FAnimDataModelModifiedEvent &GetModifiedEvent() override
    {
        checkNoEntry();
        static FAnimDataModelModifiedEvent Dummy;
        return Dummy;
    }
    virtual FGuid GenerateGuid() const override { return FGuid(); }
    virtual TScriptInterface<IAnimationDataController> GetController() override { return nullptr; }
#if WITH_EDITOR
    virtual void Evaluate(FAnimationPoseData &InOutPoseData, const UE::Anim::DataModel::FEvaluationContext &EvaluationContext) const override {}
#endif // WITH_EDITOR
    virtual bool HasBeenPopulated() const override { return true; }
    virtual void IterateBoneKeys(const FName &BoneName, TFunction<bool(const FVector3f &Pos, const FQuat4f &, const FVector3f, const FFrameNumber &)> IterationFunction) const override {}

    // For locking, etc. (no-op for our simple implementation)
    virtual void LockEvaluationAndModification() const override {}
    virtual bool TryLockEvaluationAndModification() const override { return true; }
    virtual void UnlockEvaluationAndModification() const override {}

protected:
    virtual FAnimDataModelModifiedDynamicEvent &GetModifiedDynamicEvent() override
    {
        checkNoEntry();
        static FAnimDataModelModifiedDynamicEvent Dummy;
        return Dummy;
    }
    virtual void OnNotify(const EAnimDataModelNotifyType &NotifyType, const FAnimDataModelNotifPayload &Payload) override {}
    virtual IAnimationDataModel::FModelNotifier &GetNotifier() override
    {
        static TScriptInterface<IAnimationDataModel> DummyInterface; // default (null) interface
        static IAnimationDataModel::FModelNotifier DummyNotifier{DummyInterface};
        return DummyNotifier;
    }

private:
    // Store the current frame's data in a simple map.
    TMap<FName, FTransform> RawData;
    // Cache the bone names for lookup order (optional)
    TArray<FName> BoneOrder;
};
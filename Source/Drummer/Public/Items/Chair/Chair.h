// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Items/Item.h"
#include "CoreMinimal.h"
#include "Chair.generated.h"

UCLASS()
class DRUMMER_API AChair : public AItem
{
	GENERATED_BODY()

public:
	void StartDrumming(USceneComponent *InParent, FName InSocketName);

protected:
	virtual void OnSphereOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult) override;

	virtual void OnSphereEndOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex) override;
};

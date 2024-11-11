// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEquippable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEquippable : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class DRUMMER_API IIEquippable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Equip(USceneComponent *InParent, FName InSocketName) = 0;
	virtual void AttachMeshToSocket(USceneComponent *InParent, const FName &InSocketName) = 0;
	virtual UPrimitiveComponent *GetCollisionComponent() const = 0;
	virtual void ClearIgnoreActors() = 0;
};

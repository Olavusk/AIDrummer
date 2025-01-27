// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/Drummers/DatabaseDrummer.h"
#include "Characters/Drummers/DatabaseDrummerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/Paths.h"

// Sets default values
ADatabaseDrummer::ADatabaseDrummer()
{
	PrimaryActorTick.bCanEverTick = true;

	// Set default database path (adjust to your project)
	DatabasePath = FPaths::ProjectContentDir() + TEXT("Database/drummer_data.db");
}

// Called when the game starts or when spawned
void ADatabaseDrummer::BeginPlay()
{
	Super::BeginPlay();

	if (GetMesh())
	{
		GetMesh()->SetAnimInstanceClass(UDatabaseDrummerAnimInstance::StaticClass());
		GetMesh()->bEnableUpdateRateOptimizations = false;
		DrummerAnimInstance = Cast<UDatabaseDrummerAnimInstance>(GetMesh()->GetAnimInstance());

		if (DrummerAnimInstance)
		{
			UE_LOG(LogTemp, Log, TEXT("Skeletal mesh is initialized with %d bones."), GetMesh()->GetNumBones());
			LoadAnimationFromDatabase();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to assign and get DrummerAnimInstance in ADatabaseDrummer::BeginPlay."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Skeletal mesh component is null in ADatabaseDrummer::BeginPlay."));
	}
}

void ADatabaseDrummer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
const TMap<int32, TMap<FName, FVector>> &ADatabaseDrummer::GetAnimationFrames() const
{
	return AnimationFrames;
}

bool ADatabaseDrummer::GetAnimationFrameData(int32 FrameIndex, TMap<FName, FVector> &OutBoneData) const
{
	if (AnimationFrames.Contains(FrameIndex))
	{
		OutBoneData = AnimationFrames[FrameIndex];
		return true;
	}
	return false;
}

// Load animation data from SQLite database
void ADatabaseDrummer::LoadAnimationFromDatabase()
{
	if (!FPaths::FileExists(DatabasePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Database file not found: %s"), *DatabasePath);
		return;
	}

	if (!bDatabaseOpen)
	{
		if (Database.Open(*DatabasePath))
		{
			bDatabaseOpen = true;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to open SQLite database."));
			return;
		}
	}

	FString Query = TEXT("SELECT FrameIndex, BoneName, BonePosition_X, BonePosition_Y, BonePosition_Z "
						 "FROM AnimationData WHERE SessionID = 5 ORDER BY FrameIndex;");

	FSQLitePreparedStatement Statement;
	if (Statement.Create(Database, *Query))
	{
		while (Statement.Step() == ESQLitePreparedStatementStepResult::Row)
		{
			int32 FrameIndex;
			if (Statement.GetColumnValueByIndex(0, FrameIndex))
			{
				FString BoneNameStr;
				Statement.GetColumnValueByIndex(1, BoneNameStr);
				FName BoneName(*BoneNameStr);

				double PositionX, PositionY, PositionZ;
				Statement.GetColumnValueByIndex(2, PositionX);
				Statement.GetColumnValueByIndex(3, PositionY);
				Statement.GetColumnValueByIndex(4, PositionZ);
				FVector BonePosition(PositionX, PositionY, PositionZ);

				if (!AnimationFrames.Contains(FrameIndex))
				{
					AnimationFrames.Add(FrameIndex, TMap<FName, FVector>());
				}
				AnimationFrames[FrameIndex].Add(BoneName, BonePosition);
			}
		}

		UE_LOG(LogTemp, Log, TEXT("Loaded %d animation frames."), AnimationFrames.Num());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to prepare SQLite statement."));
	}
}

void ADatabaseDrummer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (Database.IsValid())
	{
		Database.Close();
		bDatabaseOpen = false;
		UE_LOG(LogTemp, Log, TEXT("Closed SQLite database connection in EndPlay."));
	}
}
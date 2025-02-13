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
		TArray<int32> TempKeys;
		AnimationFrames.GetKeys(TempKeys);
		TempKeys.Sort();
		SortedFrameKeys = TempKeys;
		UE_LOG(LogTemp, Log, TEXT("DatabaseDrummer: Loaded %d animation frames."), AnimationFrames.Num());
		if (SortedFrameKeys.Num() > 0)
		{
			UE_LOG(LogTemp, Log, TEXT("First key: %d, Last key: %d"), SortedFrameKeys[0], SortedFrameKeys.Last());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("DatabaseDrummer: SortedFrameKeys is empty."));
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
const TMap<int32, TMap<FName, FTransform>> &ADatabaseDrummer::GetAnimationFrames() const
{
	return AnimationFrames;
}

bool ADatabaseDrummer::GetAnimationFrameData(int32 FrameIndex, TMap<FName, FTransform> &OutBoneData) const
{
	if (AnimationFrames.Contains(FrameIndex))
	{
		OutBoneData = AnimationFrames[FrameIndex];
		return true;
	}
	return false;
}

// DatabaseDrummer.cpp - Update LoadAnimationFromDatabase
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

	FString Query = TEXT(
		"SELECT FrameIndex, BoneName, LocalPos_X, LocalPos_Y, LocalPos_Z, "
		"LocalRot_X, LocalRot_Y, LocalRot_Z, LocalRot_W, "
		"LocalScale_X, LocalScale_Y, LocalScale_Z "
		"FROM AnimationData WHERE SessionID = 6 ORDER BY FrameIndex;");

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

				// Extract position, rotation, and scale
				FVector Position;
				FQuat Rotation;
				FVector Scale;

				Statement.GetColumnValueByIndex(2, Position.X);
				Statement.GetColumnValueByIndex(3, Position.Y);
				Statement.GetColumnValueByIndex(4, Position.Z);

				Statement.GetColumnValueByIndex(5, Rotation.X);
				Statement.GetColumnValueByIndex(6, Rotation.Y);
				Statement.GetColumnValueByIndex(7, Rotation.Z);
				Statement.GetColumnValueByIndex(8, Rotation.W);

				Statement.GetColumnValueByIndex(9, Scale.X);
				Statement.GetColumnValueByIndex(10, Scale.Y);
				Statement.GetColumnValueByIndex(11, Scale.Z);

				// Create the FTransform
				FTransform BoneTransform(Rotation, Position, Scale);

				// Add the frame data
				if (!AnimationFrames.Contains(FrameIndex))
				{
					AnimationFrames.Add(FrameIndex, TMap<FName, FTransform>());
				}

				AnimationFrames[FrameIndex].Add(BoneName, BoneTransform);
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
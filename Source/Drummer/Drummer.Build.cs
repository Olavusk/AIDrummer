// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Drummer : ModuleRules
{
	public Drummer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AnimGraphRuntime", "AnimationCore", "AnimGraph", "BlueprintGraph" });

		PrivateDependencyModuleNames.AddRange(new string[] { 
			"SQLiteCore",
			"SQLiteSupport",
			"UnrealEd",
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

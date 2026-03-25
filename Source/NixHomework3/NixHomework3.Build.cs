// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NixHomework3 : ModuleRules
{
	public NixHomework3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"NixHomework3",
			"NixHomework3/Variant_Platforming",
			"NixHomework3/Variant_Platforming/Animation",
			"NixHomework3/Variant_Combat",
			"NixHomework3/Variant_Combat/AI",
			"NixHomework3/Variant_Combat/Animation",
			"NixHomework3/Variant_Combat/Gameplay",
			"NixHomework3/Variant_Combat/Interfaces",
			"NixHomework3/Variant_Combat/UI",
			"NixHomework3/Variant_SideScrolling",
			"NixHomework3/Variant_SideScrolling/AI",
			"NixHomework3/Variant_SideScrolling/Gameplay",
			"NixHomework3/Variant_SideScrolling/Interfaces",
			"NixHomework3/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

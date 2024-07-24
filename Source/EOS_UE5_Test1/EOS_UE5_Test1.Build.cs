// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EOS_UE5_Test1 : ModuleRules
{
	public EOS_UE5_Test1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

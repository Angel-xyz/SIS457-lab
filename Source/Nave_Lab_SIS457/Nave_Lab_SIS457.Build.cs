// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Nave_Lab_SIS457 : ModuleRules
{
	public Nave_Lab_SIS457(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WorldCollapse : ModuleRules
{
	public WorldCollapse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...	
            }
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				
            }
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "CoreUObject", "Engine", "InputCore", "EnhancedInput", "EnhancedInput", "EditorSubsystem",
                "EditorStyle", "EditorFramework",
                "UnrealEd",
                "Blutility",
                "UMG",
                "UMGEditor",
                "AssetTools",
                "PropertyEditor",

				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
                "InputCore",
                "Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}

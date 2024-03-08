// Copyright InstanceWorld. All Rights Reserved.

#include "WorldCollapse.h"
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "WorldCollapseEditorCommands.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "FWorldCollapseModule"

void FWorldCollapseModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FWorldCollapseEditorCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FWorldCollapseEditorCommands::Get().WC_Dev_UIWidget,
		FExecuteAction::CreateRaw(this, &FWorldCollapseModule::WorldCollapseUI)
	);

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> NewMenuExtender = MakeShareable(new FExtender);
		NewMenuExtender->AddMenuExtension("LevelEditor",
			EExtensionHook::After,
			PluginCommands,
			FMenuExtensionDelegate::CreateRaw(this, &FWorldCollapseModule::AddMenuEntry));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(NewMenuExtender);
	}
	
	

}
void FWorldCollapseModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FWorldCollapseEditorCommands::Unregister();
}

void FWorldCollapseModule::AddMenuEntry(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.BeginSection("CustomMenu", TAttribute<FText>(FText::FromString("WorldCollapse")));
	MenuBuilder.AddMenuEntry(FWorldCollapseEditorCommands::Get().WC_Dev_UIWidget);
	MenuBuilder.EndSection();
}

void FWorldCollapseModule::WorldCollapseUI()
{
	UEditorUtilitySubsystem* EUSubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	UEditorUtilityWidgetBlueprint* WCEUWBP = LoadObject<UEditorUtilityWidgetBlueprint>(NULL, TEXT("/WorldCollapse/World_Collapse/WC_Dev_UI.WC_Dev_UI"), NULL, LOAD_None, NULL);
	UEditorUtilityWidget* WC_EUW = EUSubsystem->SpawnAndRegisterTab(WCEUWBP);
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWorldCollapseModule, WorldCollapse)
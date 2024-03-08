#include "WorldCollapseEditorCommands.h"

#define LOCTEXT_NAMESPACE "FWaveFunctionCollapseModule"

void FWorldCollapseEditorCommands::RegisterCommands()
{
	UI_COMMAND(WC_Dev_UIWidget, "WorldCollapse", "World Collapse UI", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
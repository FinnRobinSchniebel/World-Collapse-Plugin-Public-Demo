#pragma once

#include "Styling/AppStyle.h"
#include "Framework/Commands/Commands.h"

class FWorldCollapseEditorCommands : public TCommands<FWorldCollapseEditorCommands>
{
public:

	FWorldCollapseEditorCommands()
		: TCommands<FWorldCollapseEditorCommands>
		(
			TEXT("WorldCollapse"),
			NSLOCTEXT("Contexts", "WorldCollapse", "WorldCollapse Plugin"),
			NAME_None,
			FAppStyle::GetAppStyleSetName()
		)
	{}

	virtual void RegisterCommands() override;

public:

	TSharedPtr<FUICommandInfo> WC_Dev_UIWidget;
};
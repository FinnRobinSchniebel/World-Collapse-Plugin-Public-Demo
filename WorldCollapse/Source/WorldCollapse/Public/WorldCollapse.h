// Copyright InstanceWorld. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"


class FMenuBuilder;
class FReply;

class FWorldCollapseModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:

	void AddMenuEntry(FMenuBuilder& MenuBuilder);
	void WorldCollapseUI();

	TSharedPtr<class FUICommandList> PluginCommands;
};

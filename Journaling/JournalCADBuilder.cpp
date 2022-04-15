#include "JournalCADBuilder.h"
#include "..\AppLibrary\Block.h"
#include "..\AppLibrary\BlockBuilder.h"
#include "..\AppPartOps\PartOps.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"

Application::JournalCADBuilder* Journaling_FeatureCAD_CADBuilder()
{
	static int guid = 8890;
	guid++;
	return nullptr;
}

/*
Application::JournalCADBuilder* Journaling_FeatureCAD_CADBuilder(Application::PartFile *part, Application::Block* block)
{
	/// Startcall and ClassParam for Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("CreateBlockBuilder", part);
		JournalInClassParam( block, "AutomationAPI::Block", "block");
	}
	Application::BlockBuilder* retVal = nullptr;
	// Obtain the incremented guid in retVal
	static int guid = 8890;
	guid++;
	retVal = new Application::BlockBuilder(block, guid);

	if (IsJournaling())
	{
		JournalReturnClass(retVal, "AutomationAPI::Blockbuilder", "Blockbuilder");
		JournalEndCall();
	}

    return nullptr;

}
*/
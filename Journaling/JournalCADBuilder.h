#pragma once
#include "..\AppLibrary\AppFeaturesOpsExports.h"

///header file for the JournalCADBuilder 
namespace Application
{
	class Block;
	class PartFile;
	class JournalCADBuilder;
}

//APPLIBRARY_API Application::JournalCADBuilder* Journaling_FeatureCAD_CADBuilder(Application::PartFile *part, Application::Block* block);

APPLIBRARY_API Application::JournalCADBuilder* Journaling_FeatureCAD_CADBuilder();




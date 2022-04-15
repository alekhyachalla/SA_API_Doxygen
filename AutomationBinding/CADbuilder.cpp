
#include "CADbuilder.h"
#include "AutomationAPI_Part.h"
#include "..\AppLibrary\Journaling_FeatureCollection.h"

AutomationAPI::CADbuilder::CADbuilderTypes AutomationAPI::CADbuilder::GetType()
{
	return AutomationAPI::CADbuilder::TypesRadius;
}


AutomationAPI::CADObject* AutomationAPI::CADbuilder::Commit()
{
	return nullptr;
}

AutomationAPI::CADbuilder::CADbuilder()
{

}

AutomationAPI::Part* AutomationAPI::CADbuilder::Creation()
{
    return nullptr;
}

void AutomationAPI::CADbuilder::GetArea()
{
    
}

void AutomationAPI::CADbuilder::Getcircumference()
{
    
}

void AutomationAPI::CADbuilder::Getguid()
{
    
}

void AutomationAPI::CADbuilder::Setcorrdinatex(int x)
{
    
}

void AutomationAPI::CADbuilder::Setcordinatey(int y)
{
    
}
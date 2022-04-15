#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;
    class Part;
    class CADbuilder;
	class BlockBuilderImpl;
	/// This is the Class definition for CADbuilder
	/// BlockBuilder comment
	class AUTOMATIONBINDING_API CADbuilder : public IBuilder
	{
		public:
			enum CADbuilderTypes
			{
				TypesRadius, /**Represents the circle created by providing Radius. */
			};

			void SetType(CADbuilderTypes type);
			CADbuilderTypes GetType();
            Part* Creation();
			void Setcorrdinatex(int h);
			void Setcordinatey(int d);
            void Getguid();
			void Getcircumference();
            void GetArea();
			
			CADObject* Commit() override;
			static CADbuilder* CreateBlockBuilder(int guid);
			virtual ~CADbuilder();
			CADbuilder() = delete;
		private:
			CADbuilder(int guid);
			BlockBuilderImpl* m_blockBuilderImpl;

	};
}


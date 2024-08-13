class CfgPatches {
	class 53rd_Volare_Gear_PlaceHolder
	{
			units[] = 
			{
				"53rd_Volare_Uni_Pilot_Base_F",
				"53rd_Volare_Uni_Pilot_Black_F",
				"53rd_Volare_Uni_Pilot_BlackNCO_F",
				"53rd_Volare_Uni_Pilot_Snow_F",
				"53rd_Volare_Uni_Pilot_SnowNCO_F"

			};
			weapons[] = 
			{
				"53rd_Volare_Helmet_Base",
				"53rd_Volare_Helmet_Black",
				"53rd_Volare_Helmet_Silver",
				"53rd_Volare_Helmet_Blue",
				"53rd_Volare_Helmet_Red",
				"53rd_Volare_Foe_Helmet_Base",
				"53rd_Volare_Foe_Helmet_Test",
				"53rd_Volare_VX19_Helmet_Base",
				"53rd_Volare_VX19_Helmet_Black",
				"53rd_Volare_VX19_Helmet_Silver",
				"53rd_Volare_VX19_Helmet_Blue",
				"53rd_Volare_VX19_Helmet_Red",
				"53rd_Volare_Uni_Pilot_Base",
				"53rd_Volare_Uni_Pilot_Black",
				"53rd_Volare_Uni_Pilot_BlackNCO",
				"53rd_Volare_Uni_Pilot_Snow",
				"53rd_Volare_Uni_Pilot_SnowNCO",
				"53rd_UNSC_Pilot_Armor_Base",
				"53rd_UNSC_Pilot_Armor_Black",
				"53rd_UNSC_Pilot_Armor_Silver",
				"53rd_UNSC_Pilot_Armor_Blue",
				"53rd_UNSC_Pilot_Armor_Red"


			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};


#include "VolareGear.hpp"

class CfgVehicles
{

////////////////////////////////////////////////////////////////////////////
///////////////////////////// Base /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class UniformItem;
	class ItemInfo;
	class OPTRE_FC_Marines_Soldier;

    class 53rd_Volare_Uni_Pilot_Base_F:OPTRE_FC_Marines_Soldier
 	{
		scope=1;
		scopeCurator=0;
		side=1;
		displayName="[53rd] Volare Flight Suit (Black)";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Volare_Uni_Pilot_Base";
			containerClass="Supply100";
			mass=20;
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_Black.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Flight Suit ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////


	class 53rd_Volare_Uni_Pilot_Black_F: 53rd_Volare_Uni_Pilot_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Volare Flight Suit (Black)";
		hiddenSelections[]=
		{
			"Camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_Black.paa"
		};
	};

	class 53rd_Volare_Uni_Pilot_BlackNCO_F: 53rd_Volare_Uni_Pilot_Black_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Volare Flight Suit (Black)";
		hiddenSelections[]=
		{
			"Camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_BlackNCO.paa"
		};
	};

	class 53rd_Volare_Uni_Pilot_Snow_F: 53rd_Volare_Uni_Pilot_Black_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Volare Flight Suit (Snow)";
		hiddenSelections[]=
		{
			"Camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_Snow.paa"
		};
	};

	class 53rd_Volare_Uni_Pilot_SnowNCO_F: 53rd_Volare_Uni_Pilot_Black_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Volare Flight Suit (Snow)";
		hiddenSelections[]=
		{
			"Camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_SnowNCO.paa"
		};
	};


};



class CfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class HeadgearItem;
	class UniformItem;
	class VestItem;

////////////////////////////////////////////////////////////////////////////
////////////////////////// Helmets /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class UNSC_PilotHelmet;
	class OPTRE_FC_VX19_Helmet;

////////////////////// UNSC Pilot Helmet ///////////////////////////////////

     class 53rd_Volare_Helmet_Base: UNSC_PilotHelmet
     {
        author = "Icarus";
		scope=1
		scopeArsenal=1
		displayName = "UNSC Hornet Pilot Helmet";
		picture= "\53rd_Aux\Functions\Arsenal\Volare.paa"
        model = "\UNSCGear\UNSCPilotHelmet.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = 
			{
			  "\UNSCGear\Helmet\DefaultMaterial_CO.paa"
			};
          class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\UNSCGear\UNSCPilotHelmet.p3d";
			hiddenSelections[] = {"Camo"};

			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.5;
				};
				
				class Face {
					hitpointName = "HitFace";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};

	class 53rd_Volare_Helmet_Black:  53rd_Volare_Helmet_Base
	{
		displayName = "[53rd] Volare Pilot Helmet (Black)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Volare\Helmet\53rd_Volare_Helmet_Black.paa"
		};
	};

	class 53rd_Volare_Helmet_Silver:  53rd_Volare_Helmet_Base
	{
		displayName = "[53rd] Volare Pilot Helmet (Silver)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Volare\Helmet\53rd_Volare_Helmet_Silver.paa"
		};
	};

	class 53rd_Volare_Helmet_Blue:  53rd_Volare_Helmet_Base
	{
		displayName = "[53rd] Volare Pilot Helmet (Blue)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Volare\Helmet\53rd_Volare_Helmet_Blue.paa"
		};
	};

	class 53rd_Volare_Helmet_Red:  53rd_Volare_Helmet_Base
	{
		displayName = "[53rd] Volare Pilot Helmet (Red)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Volare\Helmet\53rd_Volare_Helmet_Red.paa"
		};
	};

////////////////////// Foe Hammer Helmet ///////////////////////////////////

     class 53rd_Volare_Foe_Helmet_Base: UNSC_PilotHelmet
     {
        author = "Icarus";
		scope=1
		scopeArsenal=1
		displayName = "UNSC Hornet Pilot Helmet";
		picture= "\53rd_Aux\Functions\Arsenal\Volare.paa"
        model = "\Echo419\Echo419Helmet.p3d";
		hiddenSelections[] = 
			{
				"Camo"
			};
		hiddenSelectionsTextures[] = 
			{
				"\53rd_Aux\Volare\Helmet\53rd_Volare_Foe_Helmet.paa"
			};
          class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Echo419\Echo419Helmet.p3d";
			hiddenSelections[] = {"Camo"};

			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.5;
				};
				
				class Face {
					hitpointName = "HitFace";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};

	class 53rd_Volare_Foe_Helmet_Test:  53rd_Volare_Foe_Helmet_Base
	{
		displayName = "[53rd] Volare Foe-Hammer Helmet (Green)";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Volare\Helmet\53rd_Volare_Foe_Helmet.paa"
		};
	};

////////////////////////// VX19 //////////////////////////////////////////////

     class 53rd_Volare_VX19_Helmet_Base: OPTRE_FC_VX19_Helmet
     {

        displayName = "[53rd] Volare VX19 Pilot Helmet (Black)";
		scope=1;	
		picture= "\53rd_Aux\Functions\Arsenal\Volare.paa"
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Collar",
			"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
        {
			"\53rd_Aux\Volare\Helmet\53rd_Volare_VX19_Helmet_Black.paa",
			"\53rd_Aux\Volare\Helmet\53rd_Visor_Black.paa"
		};
          class ItemInfo: HeadgearItem
		{
			mass = 20;
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Collar",
				"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
            hiddenSelectionsTextures[] = 
            {
				"\53rd_Aux\Volare\Helmet\53rd_Volare_VX19_Helmet_Black.paa",
				"\53rd_Aux\Volare\Helmet\53rd_Visor_Black.paa"
            };

			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.5;
				};
				
				class Face {
					hitpointName = "HitFace";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};

	class 53rd_Volare_VX19_Helmet_Black:  53rd_Volare_VX19_Helmet_Base
	{
		displayName = "[53rd] Volare VX19 Pilot Helmet (Black)";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Collar",
			"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
        {
			"\53rd_Aux\Volare\Helmet\53rd_Volare_VX19_Helmet_Black.paa",
			"\53rd_Aux\Volare\Helmet\53rd_Visor_Black.paa"

		};
	};

	class 53rd_Volare_VX19_Helmet_Silver:  53rd_Volare_VX19_Helmet_Base
	{
		displayName = "[53rd] Volare VX19 Pilot Helmet (Silver)";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Collar",
			"H_Neck",
			"H_VacCollar",
			//"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
        {
			"\53rd_Aux\Volare\Helmet\53rd_Volare_VX19_Helmet_Silver.paa",
			"\53rd_Aux\Volare\Helmet\53rd_Visor_Black.paa",
			"",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};

	class 53rd_Volare_VX19_Helmet_Blue:  53rd_Volare_VX19_Helmet_Base
	{
		displayName = "[53rd] Volare VX19 Helmet (Blue)";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Collar",
			"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
        {
			"\53rd_Aux\Volare\Helmet\53rd_Volare_VX19_Helmet_Blue.paa",
			"\53rd_Aux\Volare\Helmet\53rd_Visor_Black.paa"

		};
	};

	class 53rd_Volare_VX19_Helmet_Red:  53rd_Volare_VX19_Helmet_Base
	{
		displayName = "[53rd] Volare VX19 Helmet (Red)";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Collar",
			"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
        {
			"\53rd_Aux\Volare\Helmet\53rd_Volare_VX19_Helmet_Red.paa",
			"\53rd_Aux\Volare\Helmet\53rd_Visor_Black.paa"
		};
	};



////////////////////////////////////////////////////////////////////////////
////////////////////////// Uniforms ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class OPTRE_FC_Marines_Uniform;
	class 53rd_Volare_Uni_Pilot_Base: OPTRE_FC_Marines_Uniform
	{
		author="Icarus";
		scope=1;
		scopeArsenal=1;
		displayName = "[53rd] Volare Flight Suit (Base)";
		picture= "\53rd_Aux\Functions\Arsenal\Volare.paa"
		class ItemInfo: UniformItem
		{
			mass=20;
			uniformType = "Neopren";
			uniformClass="53rd_Volare_Uni_Pilot_Base_F";
			containerClass="Supply100";
			modelSides[]={6};
			allowedSlots[]={801,901,701,605};
			hiddenSelections[]=
			{
				"Camo1"

			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_Black.paa"
			};
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName="HitArms";
					armor=50;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=50;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=50;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=50;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=50;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=50;
					passThrough=0.1;
				};
		
			};
		};
	};

////////////////////////////////////////////////////////////////////////////

	class 53rd_Volare_Uni_Pilot_Black: 53rd_Volare_Uni_Pilot_Base
	{
		author="Icarus";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Volare Flight Suit (Black)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",

			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_Black.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Volare_Uni_Pilot_Black_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Volare_Uni_Pilot_BlackNCO: 53rd_Volare_Uni_Pilot_Black
	{
		author="Icarus";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Volare Flight Suit (Black / NCO)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_BlackNCO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",

			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_BlackNCO.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Volare_Uni_Pilot_BlackNCO_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Volare_Uni_Pilot_Snow: 53rd_Volare_Uni_Pilot_Black
	{
		author="Icarus";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Volare Flight Suit (Snow)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_Snow.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",

			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_Snow.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Volare_Uni_Pilot_Snow_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Volare_Uni_Pilot_SnowNCO: 53rd_Volare_Uni_Pilot_Black
	{
		author="Icarus";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Volare Flight Suit (Snow / NCO)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_SnowNCO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",

			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Volare\Uniform\53rd_Volare_Uniform_SnowNCO.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Volare_Uni_Pilot_SnowNCO_F";
			containerClass="Supply100";
			mass=20;
		};
	};



////////////////////////////////////////////////////////////////////////////
////////////////////////// Vest ////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class UNSC_Pilot_Uniform;
	class 53rd_UNSC_Pilot_Armor_Base: UNSC_Pilot_Uniform
	{

		scope = 1;
		scopeArsenal = 1;
		author = "Moose (Outworld Studios)";
		displayName = "[53rd] Volare Pilot Armor (Base)";
		picture = "\53rd_Aux\Functions\Arsenal\Volare.paa";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
		{
					"\53rd_Aux\Volare\Armor\Pilot_Armor_Legs_Black.paa",
					"\53rd_Aux\Volare\Armor\Pilot_Armor_Torso_Black.paa"
		};
		class ItemInfo : VestItem
		{
			uniformModel = "UNSCGear\UNSCPilotArmor.p3d";
			vestType="Rebreather";
			hiddenSelections[] = {"camo","camo1"};
		    hiddenSelectionsTextures[] =
			{
					"\53rd_Aux\Volare\Armor\Pilot_Armor_Legs_Black.paa",
					"\53rd_Aux\Volare\Armor\Pilot_Armor_Torso_Black.paa"
			};
			containerClass = "Supply200";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck {
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.5;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.6;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.6;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.3;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 50;
					passThrough = 0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};

	class 53rd_UNSC_Pilot_Armor_Black:  53rd_UNSC_Pilot_Armor_Base
	{
		displayName = "[53rd] Volare Flight Armor (Black)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelections[] = 
				{
					"camo", // Legs
					"camo1" // Torso
				};
		    hiddenSelectionsTextures[] = 
				{
					"\53rd_Aux\Volare\Armor\Pilot_Armor_Legs_Black.paa",
					"\53rd_Aux\Volare\Armor\Pilot_Armor_Torso_Black.paa"
				};
	};

	class 53rd_UNSC_Pilot_Armor_Silver:  53rd_UNSC_Pilot_Armor_Black
	{
		displayName = "[53rd] Volare Flight Armor (Silver)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelections[] = {"camo","camo1"};
		    hiddenSelectionsTextures[] = 
			{
				"\53rd_Aux\Volare\Armor\Pilot_Armor_Legs_Silver.paa",
				"\53rd_Aux\Volare\Armor\Pilot_Armor_Torso_Silver.paa"
			};
	};

	class 53rd_UNSC_Pilot_Armor_Blue:  53rd_UNSC_Pilot_Armor_Black
	{
		displayName = "[53rd] Volare Flight Armor (Blue)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelections[] = {"camo","camo1"};
		    hiddenSelectionsTextures[] = 
			{
				"\53rd_Aux\Volare\Armor\Pilot_Armor_Legs_Blue.paa",
				"\53rd_Aux\Volare\Armor\Pilot_Armor_Torso_Blue.paa"
			};
	};

	class 53rd_UNSC_Pilot_Armor_Red:  53rd_UNSC_Pilot_Armor_Black
	{
		displayName = "[53rd] Volare Flight Armor (Red)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelections[] = {"camo","camo1"};
		    hiddenSelectionsTextures[] = 
			{
				"\53rd_Aux\Volare\Armor\Pilot_Armor_Legs_Red.paa",
				"\53rd_Aux\Volare\Armor\Pilot_Armor_Torso_Red.paa"
			};
	};




};
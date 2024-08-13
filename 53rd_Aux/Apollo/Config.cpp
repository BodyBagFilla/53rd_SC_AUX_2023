#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class 53rd_Apollo_PLACEHOLDER
	{
		units[] = 
		{
			"53rd_Apollo_Uni_Base_F",
			"53rd_Apollo_Crewman_Woodland_Camo_1_F",
			"53rd_Apollo_Crewman_Woodland_Camo_2_F",
			"53rd_Apollo_Crewman_Woodland_Camo_3_F",
			"53rd_Apollo_Crewman_Woodland_Camo_4_F",
			"53rd_Apollo_Crewman_Urban_Camo_1_F",
			"53rd_Apollo_Crewman_Urban_Camo_2_F",
			"53rd_Apollo_Crewman_Urban_Camo_3_F",
			"53rd_Apollo_Crewman_Urban_Camo_4_F",
			"53rd_Apollo_Engineer_Woodland_Camo_1_F",
			"53rd_Apollo_Engineer_Woodland_Camo_2_F",
			"53rd_Apollo_Engineer_Woodland_Camo_3_F",
			"53rd_Apollo_Engineer_Woodland_Camo_4_F",
			"53rd_Apollo_Engineer_Urban_Camo_1_F",
			"53rd_Apollo_Engineer_Urban_Camo_2_F",
			"53rd_Apollo_Engineer_Urban_Camo_3_F",
			"53rd_Apollo_Engineer_Urban_Camo_4_F"
		};
		weapons[] = 
		{
			"53rd_Apollo_Helmet_Urban_Visor",
			"53rd_Apollo_Helmet_Woodland_Visor",
			"53rd_Apollo_Helmet_Urban_No_Visor",
			"53rd_Apollo_Helmet_Woodland_No_Visor",
			"53rd_Apollo_Crew_Helmet_Woodland",
			"53rd_Apollo_Crew_Helmet_Urban",
			"53rd_Apollo_EODHelmet_Base",
			"53rd_Apollo_EODHelmet_Urban",
			"53rd_Apollo_EODHelmet_Woodland",
			"53rd_Apollo_Uni_Base",
			"53rd_Apollo_Crewman_Woodland_Camo_1",
			"53rd_Apollo_Crewman_Woodland_Camo_2",
			"53rd_Apollo_Crewman_Woodland_Camo_3",
			"53rd_Apollo_Crewman_Woodland_Camo_4",
			"53rd_Apollo_Crewman_Urban_Camo_1",
			"53rd_Apollo_Crewman_Urban_Camo_2",
			"53rd_Apollo_Crewman_Urban_Camo_3",
			"53rd_Apollo_Crewman_Urban_Camo_4",
			"53rd_Apollo_Engineer_Woodland_Camo_1",
			"53rd_Apollo_Engineer_Woodland_Camo_2",
			"53rd_Apollo_Engineer_Woodland_Camo_3",
			"53rd_Apollo_Engineer_Woodland_Camo_4",
			"53rd_Apollo_Engineer_Urban_Camo_1",
			"53rd_Apollo_Engineer_Urban_Camo_2",
			"53rd_Apollo_Engineer_Urban_Camo_3",
			"53rd_Apollo_Engineer_Urban_Camo_4"
		};
		requiredVersion = 0.1;
		requiredAddons[] = 
			{
				"MA_Armor",
				"DMNS_Units",
				"Halo_marine_02"
			};
	};
};


    #include "ApolloGear.hpp"

class CfgVehicles
{

	class ItemInfo;
	class HaloInf_Marine_WDL_F;
	class UniformItem;

	class 53rd_Apollo_Uni_Base_F: HaloInf_Marine_WDL_F
	{
		displayName="[53rd] Apollo Uniform Base";
		picture= "\53rd_Aux\Functions\Arsenal\Apollo.paa";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Apollo_Uni_Base";
			containerClass="Supply100";
			mass=20;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
	};



	class 53rd_Apollo_Crewman_Woodland_Camo_1_F: 53rd_Apollo_Uni_Base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Crewman (Woodland)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Crewman_Woodland_Camo_1";
	};

	class 53rd_Apollo_Crewman_Woodland_Camo_2_F: 53rd_Apollo_Crewman_Woodland_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Crewman (Woodland BDU)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Crewman_Woodland_Camo_2";
	};
	
	class 53rd_Apollo_Crewman_Woodland_Camo_3_F: 53rd_Apollo_Crewman_Woodland_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Crewman (Woodland BDU Top)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Crewman_Woodland_Camo_3";
	};

	class 53rd_Apollo_Crewman_Woodland_Camo_4_F: 53rd_Apollo_Crewman_Woodland_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Crewman (Woodland BDU Bottom)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Crewman_Woodland_Camo_4";
	};



	class 53rd_Apollo_Crewman_Urban_Camo_1_F: 53rd_Apollo_Uni_Base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Crewman (Urban)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Crewman_Urban_Camo_1";
	};

	class 53rd_Apollo_Crewman_Urban_Camo_2_F: 53rd_Apollo_Crewman_Urban_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Crewman (Urban BDU)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Crewman_Urban_Camo_2";
	};
	
	class 53rd_Apollo_Crewman_Urban_Camo_3_F: 53rd_Apollo_Crewman_Urban_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Crewman (Urban BDU Top)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Crewman_Urban_Camo_3";
	};


	class 53rd_Apollo_Crewman_Urban_Camo_4_F: 53rd_Apollo_Crewman_Urban_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Crewman (Urban BDU Bottom)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Crewman_Urban_Camo_4";
	};


////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Apollo_Engineer_Woodland_Camo_1_F: 53rd_Apollo_Uni_Base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Engineer (Woodland)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Engineer_Woodland_Camo_1";
	};

	class 53rd_Apollo_Engineer_Woodland_Camo_2_F: 53rd_Apollo_Engineer_Woodland_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Engineer (Woodland BDU)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Engineer_Woodland_Camo_2";
	};
	
	class 53rd_Apollo_Engineer_Woodland_Camo_3_F: 53rd_Apollo_Engineer_Woodland_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Engineer (Woodland BDU Top)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Engineer_Woodland_Camo_3";
	};

	class 53rd_Apollo_Engineer_Woodland_Camo_4_F: 53rd_Apollo_Engineer_Woodland_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Engineer (Woodland)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Engineer_Woodland_Camo_4";
	};


	class 53rd_Apollo_Engineer_Urban_Camo_1_F: 53rd_Apollo_Uni_Base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Engineer (Urban)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Engineer_Urban_Camo_1";
	};

	class 53rd_Apollo_Engineer_Urban_Camo_2_F: 53rd_Apollo_Engineer_Urban_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Engineer (Urban BDU)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Engineer_Urban_Camo_2";
	};
	
	class 53rd_Apollo_Engineer_Urban_Camo_3_F: 53rd_Apollo_Engineer_Urban_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Engineer (Urban BDU Top)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Engineer_Urban_Camo_3";
	};

	class 53rd_Apollo_Engineer_Urban_Camo_4_F: 53rd_Apollo_Engineer_Urban_Camo_1_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Apollo Engineer (Urban BDU Bottom)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
			"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
			"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_Engineer_Urban_Camo_4";
	};



};


class cfgWeapons
{

	class ItemCore;
	class ItemInfo;
	
////////////////////////////////////////////////////////////////////////////
////////////////////////// Helmets ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class HeadgearItem;
	class 53rd_Heph_Helmet_Base;
	class 53rd_Heph_Helmet_NoVisor_Base;
	class DMNS_IHADSS_HELMET_01;
	class MA_M56E_Helmet;
	
////////////////////////////////////////////////////////////////////////////
////////////////////////// Helmet Base /////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

////////////////////////// Marine/////////////////////////////////////
	class 53rd_Apollo_Helmet_Urban_Visor: 53rd_Heph_Helmet_Base
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[53rd] Apollo Helmet (Urban / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Apollo.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = 
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_Urban.paa"
		};
	};
	class 53rd_Apollo_Helmet_Woodland_Visor: 53rd_Heph_Helmet_Base
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[53rd] Apollo Helmet (Woodland / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Apollo.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = 
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_Woodland.paa"
		};
	};

	class 53rd_Apollo_Helmet_Urban_No_Visor: 53rd_Heph_Helmet_NoVisor_Base
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[53rd] Apollo Helmet (Urban / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Apollo.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = 
		{
			"Camo1","_Visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_Urban.paa"
		};
	};
	class 53rd_Apollo_Helmet_Woodland_No_Visor: 53rd_Heph_Helmet_NoVisor_Base
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[53rd] Apollo Helmet (Woodland / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Apollo.paa";
		model = "\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[] = 
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_Woodland.paa"
		};
	};

////////////////////////// Crew /////////////////////////////////////
	class 53rd_Apollo_Crew_Helmet_Woodland: DMNS_IHADSS_HELMET_01
	{
		author = "53rd Aux Team";
		scope = 2;
		displayName = "[53rd] Apollo Helmet (Crew / Woodland)";
		picture="\53rd_Aux\Functions\Arsenal\Apollo.paa";
		model = "DMNS\DMNS_Units\Armour\Pilot_Helm_01\Pilot_Helmet_01.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = 
		{
			"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_Addons_co.paa",
			"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_Crew_Woodland.paa","\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_INT_co.paa",
			"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_MID_co.paa",
			"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helmet_Visor_co.paa"
		};
		optreVarietys[] = {"","","_broken"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo: HeadgearItem
		{
			mass = 25;
			uniformModel = "DMNS\DMNS_Units\Armour\Pilot_Helm_01\Pilot_Helmet_01.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
			hiddenSelectionsTextures[] = 
			{
				"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_Addons_co.paa",
				"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_Crew_Woodland.paa",
				"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_INT_co.paa",
				"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_MID_co.paa",
				"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helmet_Visor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.2;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 50;
					passThrough = 0.3;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};

	class 53rd_Apollo_Crew_Helmet_Urban: 53rd_Apollo_Crew_Helmet_Woodland
	{
		author = "53rd Aux Team";
		scope = 2;
		displayName = "[53rd] Apollo Crew Helmet (Urban)";
		picture="\53rd_Aux\Functions\Arsenal\Apollo.paa";
		model = "DMNS\DMNS_Units\Armour\Pilot_Helm_01\Pilot_Helmet_01.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = 
		{
			"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_Addons_co.paa",
			"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_Crew_Urban.paa",
			"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_INT_co.paa",
			"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_MID_co.paa",
			"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helmet_Visor_co.paa"
		};
		optreVarietys[] = {"","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: HeadgearItem
		{
			mass = 25;
			uniformModel = "DMNS\DMNS_Units\Armour\Pilot_Helm_01\Pilot_Helmet_01.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
			hiddenSelectionsTextures[] = 
			{
				"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_Addons_co.paa",
				"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_Crew_Urban.paa",
				"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_INT_co.paa",
				"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helm_MID_co.paa",
				"\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Data\H2A_Pilot_Helmet_Visor_co.paa"
			};
		};
	};

////////////////////////// EOD /////////////////////////////////////

	class 53rd_Apollo_EODHelmet_Base: MA_M56E_Helmet
	{
		displayName="[53rd] EOD Helmet Base";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
			modelSides[]={6};
			allowedSlots[]={801,901,701,605};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
				{
					class Head
					{
						hitpointName="HitHead";
						armor=50;
						passThrough=0.1;
					};
					class Face
					{
						hitpointName="HitFace";
						armor=50;
						passThrough=0.1;
					};
					class Neck
					{
						hitpointName="HitNeck";
						armor=50;
						passThrough=0.1;
					};
				};
		};
		CTAB_Camera = true;
	};

	class 53rd_Apollo_EODHelmet_Urban: 53rd_Apollo_EODHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Apollo Engineer Helmet (EOD / Urban)";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_EOD_Urban.paa",
				"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Visor_EOD.paa"
		};
	};

	class 53rd_Apollo_EODHelmet_Woodland: 53rd_Apollo_EODHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Apollo Engineer Helmet (EOD / Woodland)";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Helmet_EOD_Woodland.paa",
				"\53rd_Aux\Apollo\Helmet\53rd_Apollo_Visor_EOD.paa"
		};
	};


////////////////////////////////////////////////////////////////////////////
////////////////////////// Uniform Base /////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class Uniform_Base;
	class UniformItem;
	class haloinfmar_U_WDL_uniform;

	class 53rd_Apollo_Uni_Base: haloinfmar_U_WDL_uniform
	{
		author="Sisyphus";
		scope=1;
		scopeArsenal=1;
		displayName = "[53rd] Apollo Uniform (Base)";
		picture = "\53rd_Aux\Functions\Arsenal\Apollo.paa";
		class ItemInfo: UniformItem
		{
			mass=20;
			uniformType = "Neopren";
			uniformClass="53rd_Apollo_Uni_Base_F";
			containerClass="Supply100";
			modelSides[]={6};
			allowedSlots[]={801,901,701,605};
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
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

	
	


	class 53rd_Apollo_Crewman_Woodland_Camo_1: 53rd_Apollo_Uni_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Crewman (Woodland)";
		picture = "\53rd_Aux\Functions\Arsenal\Apollo.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Crewman_Woodland_Camo_1_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Crewman_Woodland_Camo_2: 53rd_Apollo_Crewman_Woodland_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Crewman (Woodland / BDU)";
		picture = "\53rd_Aux\Functions\Arsenal\Apollo.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Crewman_Woodland_Camo_2_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Crewman_Woodland_Camo_3: 53rd_Apollo_Crewman_Woodland_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Crewman (Woodland / BDU / Top)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Crewman_Woodland_Camo_3_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Crewman_Woodland_Camo_4: 53rd_Apollo_Crewman_Woodland_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Crewman (Woodland / BDU / Bottom)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Crewman_Woodland_Camo_4_F";
			containerClass="Supply100";
			mass=20;
		};
	};



	class 53rd_Apollo_Crewman_Urban_Camo_1: 53rd_Apollo_Uni_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Crewman (Urban)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Crewman_Urban_Camo_1_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Crewman_Urban_Camo_2: 53rd_Apollo_Crewman_Urban_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Crewman (Urban / BDU)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Crewman_Urban_Camo_2_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Crewman_Urban_Camo_3: 53rd_Apollo_Crewman_Urban_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Crewman (Urban / BDU / Top)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Crewman_Urban_Camo_3_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Crewman_Urban_Camo_4: 53rd_Apollo_Crewman_Urban_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Crewman (Urban / BDU / Bottom)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Crewman_Urban_Camo_4_F";
			containerClass="Supply100";
			mass=20;
		};
	};

////////////////////////////////////////////////////////////////////////////

	class 53rd_Apollo_Engineer_Woodland_Camo_1: 53rd_Apollo_Uni_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Engineer (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Engineer_Woodland_Camo_1_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Engineer_Woodland_Camo_2: 53rd_Apollo_Engineer_Woodland_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Engineer (Woodland / BDU)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Engineer_Woodland_Camo_2_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Engineer_Woodland_Camo_3: 53rd_Apollo_Engineer_Woodland_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Engineer (Woodland / BDU / Top)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Engineer_Woodland_Camo_3_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Engineer_Woodland_Camo_4: 53rd_Apollo_Engineer_Woodland_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Engineer (Woodland / BDU / Bottom)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Woodland.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Engineer_Woodland_Camo_4_F";
			containerClass="Supply100";
			mass=20;
		};
	};


	class 53rd_Apollo_Engineer_Urban_Camo_1: 53rd_Apollo_Uni_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Engineer (Urban)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Engineer_Urban_Camo_1_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Engineer_Urban_Camo_2: 53rd_Apollo_Engineer_Urban_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Engineer (Urban / BDU)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Engineer_Urban_Camo_2_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Engineer_Urban_Camo_3: 53rd_Apollo_Engineer_Urban_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Engineer (Urban / BDU / Top)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Engineer_Urban_Camo_3_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Apollo_Engineer_Urban_Camo_4: 53rd_Apollo_Engineer_Urban_Camo_1
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Engineer (Urban / BDU / Bottom)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Apollo\Uniform\Top\53rd_Apollo_Top_Urban.paa",
				"\53rd_Aux\Apollo\Uniform\Pants\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Aux\Apollo\Uniform\Armor\53rd_Apollo_Armor_Engineer_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Engineer_Urban_Camo_4_F";
			containerClass="Supply100";
			mass=20;
		};
	};



};

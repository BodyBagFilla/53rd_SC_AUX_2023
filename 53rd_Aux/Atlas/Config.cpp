class CfgPatches {
	class 53rd_Atlas_Gear_PlaceHolder
	{
			units[] = 
			{
			"53rd_Atlas_Uni_Rifleman_Base_F",
			"53rd_Atlas_Uni_Rifleman_Woodland_F",
			"53rd_Atlas_Uni_Rifleman_Winter_F",
			"53rd_Atlas_Uni_Rifleman_Desert_F",
			"53rd_Atlas_Uni_Medic_Urban_F",
			"53rd_Atlas_Uni_Medic_Woodland_F",
			"53rd_Atlas_Uni_Medic_Winter_F",
			"53rd_Atlas_Uni_Medic_Desert_F",
			"53rd_Atlas_Uni_Platoon_Urban_F",
			"53rd_Atlas_Uni_Platoon_Woodland_F",
			"53rd_Atlas_Uni_Platoon_Winter_F",
			"53rd_Atlas_Uni_Platoon_Desert_F"
			};
			weapons[] = 
			{
			"53rd_Atlas_AAHelmet_Base",
			"53rd_Atlas_AAHelmet_Urban",
			"53rd_Atlas_AAHelmet_Woodland",
			"53rd_Atlas_AAHelmet_Desert",
			"53rd_Atlas_AAHelmet_Winter",
			"53rd_Atlas_AAHelmet_Medic_Urban",
			"53rd_Atlas_AAHelmet_Medic_Woodland",
			"53rd_Atlas_AAHelmet_Medic_Desert",
			"53rd_Atlas_AAHelmet_Medic_Winter",
			"53rd_Atlas_AAHelmet_Platoon_Urban",
			"53rd_Atlas_AAHelmet_Platoon_Woodland",
			"53rd_Atlas_AAHelmet_Platoon_Desert",				
			"53rd_Atlas_AAHelmet_Platoon_Winter",
			"53rd_Atlas_AAHelmet_PlatoonM_Urban",
			"53rd_Atlas_AAHelmet_PlatoonM_Woodland",
			"53rd_Atlas_AAHelmet_PlatoonM_Desert",
			"53rd_Atlas_AAHelmet_PlatoonM_Winter",
			"53rd_Atlas_Helmet_Base",
			"53rd_Atlas_Helmet_NoVisor_Base",
			"53rd_Atlas_Helmet_Rifleman_Urban",
			"53rd_Atlas_Helmet_Rifleman_Woodland",
			"53rd_Atlas_Helmet_Rifleman_Winter",
			"53rd_Atlas_Helmet_Rifleman_NoVisor_Urban",
			"53rd_Atlas_Helmet_Rifleman_NoVisor_Woodland",
			"53rd_Atlas_Helmet_Rifleman_NoVisor_Winter",
			"53rd_Atlas_Helmet_Rifleman_NoVisor_Desert",
			"53rd_Atlas_Helmet_Medic_Urban",
			"53rd_Atlas_Helmet_Medic_Woodland",
			"53rd_Atlas_Helmet_Medic_Winter",
			"53rd_Atlas_Helmet_Medic_Desert",
			"53rd_Atlas_Helmet_Medic_NoVisor_Urban",
			"53rd_Atlas_Helmet_Medic_NoVisor_Woodland",
			"53rd_Atlas_Helmet_Medic_NoVisor_Winter",
			"53rd_Atlas_Helmet_Medic_NoVisor_Desert",
			"53rd_Atlas_Helmet_Platoon_Urban",
			"53rd_Atlas_Helmet_Platoon_Woodland",
			"53rd_Atlas_Helmet_Platoon_Winter",
			"53rd_Atlas_Helmet_Platoon_Desert",
			"53rd_Atlas_Helmet_Platoon_NoVisor_Urban",
			"53rd_Atlas_Helmet_Platoon_NoVisor_Woodland",
			"53rd_Atlas_Helmet_Platoon_NoVisor_Winter",
			"53rd_Atlas_Helmet_Platoon_NoVisor_Desert",
			"53rd_Atlas_Helmet_PlatoonM_Urban",
			"53rd_Atlas_Helmet_PlatoonM_Woodland",
			"53rd_Atlas_Helmet_PlatoonM_Winter",
			"53rd_Atlas_Helmet_PlatoonM_Desert",
			"53rd_Atlas_Helmet_PlatoonM_NoVisor_Urban",
			"53rd_Atlas_Helmet_PlatoonM_NoVisor_Woodland",
			"53rd_Atlas_Helmet_PlatoonM_NoVisor_Winter",
			"53rd_Atlas_Helmet_PlatoonM_NoVisor_Desert",
			"53rd_Atlas_Uni_Rifleman_Base",
			"53rd_Atlas_Uni_Rifleman_Woodland",
			"53rd_Atlas_Uni_Rifleman_Winter",
			"53rd_Atlas_Uni_Rifleman_Desert",
			"53rd_Atlas_Uni_Medic_Urban",
			"53rd_Atlas_Uni_Medic_Woodland",
			"53rd_Atlas_Uni_Medic_Winter",
			"53rd_Atlas_Uni_Medic_Desert",
			"53rd_Atlas_Uni_Platoon_Urban",
			"53rd_Atlas_Uni_Platoon_Woodland",
			"53rd_Atlas_Uni_Platoon_Winter",
			"53rd_Atlas_Uni_Platoon_Desert"			
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};


#include "AtlasGear.hpp"

class CfgVehicles
{

////////////////////////////////////////////////////////////////////////////
///////////////////////////// Base /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class HaloInf_Marine_WDL_F;
	class UniformItem;

	class 53rd_Atlas_Uni_Rifleman_Base_F: HaloInf_Marine_WDL_F
	{
		displayName="[53rd] Atlas Rifleman Base";
		scope=1;
		scopeArsenal=1;
		side=1;
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Rifleman_Base";
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Rilfeman ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_Uni_Rifleman_Urban_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Rifleman Urban";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Rifleman_Urban";
	};

	class 53rd_Atlas_Uni_Rifleman_Woodland_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Rifleman Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Rifleman_Woodland";
	};

	class 53rd_Atlas_Uni_Rifleman_Winter_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Rifleman Winter";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Winter.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Rifleman_Winter";
	};

	class 53rd_Atlas_Uni_Rifleman_Desert_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Rifleman Desert";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Rifleman_Desert";
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Medic ///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_Uni_Medic_Urban_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Medic Urban";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Medic_Urban";
	};

	class 53rd_Atlas_Uni_Medic_Woodland_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Medic Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Medic_Woodland";
	};

	class 53rd_Atlas_Uni_Medic_Winter_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Medic Winter";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Winter.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Medic_Winter";
	};

	class 53rd_Atlas_Uni_Medic_Desert_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Medic Desert";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Medic_Desert";
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Platoon /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_Uni_Platoon_Urban_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Platoon Urban";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Platoon_Urban";
	};

	class 53rd_Atlas_Uni_Platoon_Woodland_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Platoon Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Platoon_Woodland";
	};

	class 53rd_Atlas_Uni_Platoon_Winter_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Platoon Winter";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Winter.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Platoon_Winter";
	};

	class 53rd_Atlas_Uni_Platoon_Desert_F: 53rd_Atlas_Uni_Rifleman_Base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Platoon Desert";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Atlas_Uni_Platoon_Desert";
	};








};


class CfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class HeadgearItem;
	class UniformItem;
	
////////////////////////////////////////////////////////////////////////////
////////////////////////// Helmets /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
////////////////////////// Air Assault /////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
	class HaloInf_Marine_WDL_headgear;
	class HaloInf_Marine_WDL_NV_headgear;
	class MA_M56A_Helmet;

	class 53rd_Atlas_AAHelmet_Base: MA_M56A_Helmet
	{
		displayName="[53rd] Air Assault Base";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
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

////////////////////////////////////////////////////////////////////////////
////////////////////////// Rifleman ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_AAHelmet_Urban: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Urban)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Urban.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Woodland: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Woodland)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Woodland.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Desert: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Desert)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Desert.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Winter: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Winter)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Winter.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Medic ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_AAHelmet_Medic_Urban: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Medic \ Urban)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Medic_Urban.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Medic_Woodland: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Medic \ Woodland)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Medic_Woodland.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Medic_Desert: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Medic \ Desert)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Medic_Desert.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Medic_Winter: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Medic \ Winter)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Medic_Winter.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Platoon /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_AAHelmet_Platoon_Urban: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Platoon \ Urban)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Platoon_Urban.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Platoon_Woodland: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Platoon \ Woodland)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Platoon_Woodland.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Platoon_Desert: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Platoon \ Desert)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Platoon_Desert.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_Platoon_Winter: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Platoon \ Winter)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_Platoon_Winter.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Platoon /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_AAHelmet_PlatoonM_Urban: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Platoon Medic \ Urban)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_PlatoonM_Urban.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_PlatoonM_Woodland: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Platoon Medic \Woodland)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_PlatoonM_Woodland.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_PlatoonM_Desert: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Platoon Medic \Desert)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_PlatoonM_Desert.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};

	class 53rd_Atlas_AAHelmet_PlatoonM_Winter: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Air-Assault Helmet (Platoon Medic \Winter)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Helmet\AirAssault\53rd_Atlas_Helmet_AA_PlatoonM_Winter.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};



////////////////////////////////////////////////////////////////////////////
////////////////////////// Helmet Base /////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
	
	class 53rd_Atlas_Helmet_Base: HaloInf_Marine_WDL_headgear
	{
		author="Atlas Telamon";
		scope=1;
		displayName="[53rd] Atlas Helmet (Marine / Base)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
			};
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

	class 53rd_Atlas_Helmet_NoVisor_Base: HaloInf_Marine_WDL_NV_headgear
	{
		author="Atlas Telamon";
		scope=1;
		displayName="[53rd] Atlas Helmet No Visor (Marine / Base)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
			};
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

////////////////////////////////////////////////////////////////////////////
////////////////////////// Rilfeman ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_Helmet_Rifleman_Urban: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Rifleman Helmet (Urban / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Rifleman_Urban.paa"
		};
	};

	class 53rd_Atlas_Helmet_Rifleman_Woodland: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Rifleman Helmet (Woodland / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Rifleman_Woodland.paa"
		};
	};

	class 53rd_Atlas_Helmet_Rifleman_Winter: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Rifleman Helmet (Winter / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Rifleman_Winter.paa"
		};
	};

	class 53rd_Atlas_Helmet_Rifleman_Desert: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Rifleman Helmet (Desert / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Rifleman_Desert.paa"
		};
	};
	

	class 53rd_Atlas_Helmet_Rifleman_NoVisor_Urban: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Rifleman Helmet (Urban / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Rifleman_Urban.paa"
		};
	};

	class 53rd_Atlas_Helmet_Rifleman_NoVisor_Woodland: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Rifleman Helmet (Woodland / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Rifleman_Woodland.paa"
		};
	};

	class 53rd_Atlas_Helmet_Rifleman_NoVisor_Winter: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Rifleman Helmet (Winter / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Rifleman_Winter.paa"
		};
	};

	class 53rd_Atlas_Helmet_Rifleman_NoVisor_Desert: 53rd_Atlas_Helmet_NoVisor_Base 
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Rifleman Helmet (Desert / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Rifleman_Desert.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Medic ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_Helmet_Medic_Urban: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Medic Helmet (Urban / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Medic_Urban.paa"
		};
	};

	class 53rd_Atlas_Helmet_Medic_Woodland: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Medic Helmet (Woodland / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Medic_Woodland.paa"
		};
	};

	class 53rd_Atlas_Helmet_Medic_Winter: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Medic Helmet (Winter / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Medic_Winter.paa"
		};
	};

	class 53rd_Atlas_Helmet_Medic_Desert: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Medic Helmet (Desert / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Medic_Desert.paa"
		};
	};
	
	class 53rd_Atlas_Helmet_Medic_NoVisor_Urban: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Medic Helmet (Urban / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Medic_Urban.paa"
		};
	};

	class 53rd_Atlas_Helmet_Medic_NoVisor_Woodland: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Medic Helmet (Woodland / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Medic_Woodland.paa"
		};
	};

	class 53rd_Atlas_Helmet_Medic_NoVisor_Winter: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Medic Helmet (Winter / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Medic_Winter.paa"
		};
	};

	class 53rd_Atlas_Helmet_Medic_NoVisor_Desert: 53rd_Atlas_Helmet_NoVisor_Base 
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Medic Helmet (Desert / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Medic_Desert.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Platoon /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_Helmet_Platoon_Urban: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Helmet (Urban / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Platoon_Urban.paa"
		};
	};

	class 53rd_Atlas_Helmet_Platoon_Woodland: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Helmet (Woodland / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Platoon_Woodland.paa"
		};
	};

	class 53rd_Atlas_Helmet_Platoon_Winter: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Helmet (Winter / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Platoon_Winter.paa"
		};
	};

	class 53rd_Atlas_Helmet_Platoon_Desert: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Helmet (Desert / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Platoon_Desert.paa"
		};
	};
	
	class 53rd_Atlas_Helmet_Platoon_NoVisor_Urban: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Helmet (Urban / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Platoon_Urban.paa"
		};
	};

	class 53rd_Atlas_Helmet_Platoon_NoVisor_Woodland: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Helmet (Woodland / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Platoon_Woodland.paa"
		};
	};

	class 53rd_Atlas_Helmet_Platoon_NoVisor_Winter: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Helmet (Winter / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Platoon_Winter.paa"
		};
	};

	class 53rd_Atlas_Helmet_Platoon_NoVisor_Desert: 53rd_Atlas_Helmet_NoVisor_Base 
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Helmet (Desert / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_Platoon_Desert.paa"
		};
	};

////////////////////////// Platoon Medic ///////////////////////////////////

	class 53rd_Atlas_Helmet_PlatoonM_Urban: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Medic Helmet (Urban / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_PlatoonM_Urban.paa"
		};
	};

	class 53rd_Atlas_Helmet_PlatoonM_Woodland: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Medic Helmet (Woodland / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_PlatoonM_Woodland.paa"
		};
	};

	class 53rd_Atlas_Helmet_PlatoonM_Winter: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Medic Helmet (Winter / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_PlatoonM_Winter.paa"
		};
	};

	class 53rd_Atlas_Helmet_PlatoonM_Desert: 53rd_Atlas_Helmet_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Medic Helmet (Desert / Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_PlatoonM_Desert.paa"
		};
	};
	
	class 53rd_Atlas_Helmet_PlatoonM_NoVisor_Urban: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Medic Helmet (Urban / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_PlatoonM_Urban.paa"
		};
	};

	class 53rd_Atlas_Helmet_PlatoonM_NoVisor_Woodland: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Medic Helmet (Woodland / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_PlatoonM_Woodland.paa"
		};
	};

	class 53rd_Atlas_Helmet_PlatoonM_NoVisor_Winter: 53rd_Atlas_Helmet_NoVisor_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Medic Helmet (Winter / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_PlatoonM_Winter.paa"
		};
	};

	class 53rd_Atlas_Helmet_PlatoonM_NoVisor_Desert: 53rd_Atlas_Helmet_NoVisor_Base 
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Platoon Medic Helmet (Desert / No Visor)";
		picture="\53rd_Aux\Functions\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Helmet\53rd_Atlas_Helmet_PlatoonM_Desert.paa"
		};
	};


////////////////////////////////////////////////////////////////////////////
////////////////////////// Uniforms ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
////////////////////////// Uniform Base ////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class haloinfmar_U_WDL_uniform: Uniform_Base
	{
		class ItemInfo;
	};
	class 53rd_Atlas_Uni_Rifleman_Base: haloinfmar_U_WDL_uniform
	{
		author="Atlas Telamon";
		scope=1;
		scopeArsenal=1;
		displayName = "[53rd] Atlas Rifleman (Base)";
		picture= "\53rd_Aux\Functions\Arsenal\Atlas.paa"
		class ItemInfo: UniformItem
		{
			mass=20;
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Uni_Rifleman_Base_F";
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
				"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Urban.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
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
////////////////////////// Rilfeman ////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_Uni_Rifleman_Urban: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Rifleman (Urban)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Rifleman_Urban_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Rifleman_Woodland: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Rifleman (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Woodland.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Rifleman_Woodland_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Rifleman_Winter: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Rifleman (Winter)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Winter.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Rifleman_Winter_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Rifleman_Desert: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Rifleman (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Desert.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Rifleman_Desert_F";
			containerClass="Supply100";
			mass=20;
		};
	};


////////////////////////////////////////////////////////////////////////////
////////////////////////// Medic ///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

	class 53rd_Atlas_Uni_Medic_Urban: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Medic (Urban)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Urban.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Medic_Urban_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Medic_Woodland: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Medic (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Woodland.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Medic_Woodland_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Medic_Winter: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Medic (Winter)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Winter.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Medic_Winter_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Medic_Desert: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Medic (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Desert.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Rifleman_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Medic_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Medic_Desert_F";
			containerClass="Supply100";
			mass=20;
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////// Platoon /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
	class 53rd_Atlas_Uni_Platoon_Urban: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Platoon (Urban)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Platoon_Urban_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Platoon_Woodland: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Platoon (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Woodland.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Platoon_Woodland_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Platoon_Winter: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Platoon (Winter)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Winter.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Winter.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Platoon_Winter_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Platoon_Desert: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Atlas Telamon";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Platoon (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Desert.paa"
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
			"\53rd_Aux\Atlas\Uniform\Top\53rd_Atlas_Top_Platoon_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Desert.paa",
			"\53rd_Aux\Atlas\Uniform\Armor\53rd_Atlas_Armor_Rifleman_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Platoon_Desert_F";
			containerClass="Supply100";
			mass=20;
		};
	};


};
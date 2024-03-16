class CfgPatches
{
	class SedraArmor
	{
		version="1.0";
		units[]={
			"19th_H2A_marine_backpack_light",
			"19th_H2A_marine_backpack_rto",
			"19th_H2A_marine_backpack",
			"19th_H2A_marine_backpack_light_rto",
			"19th_H2A_marine_backpack_heavy",
			"19th_H2A_marine_backpack_heavy_rto"
		};
		weapons[]={};
		requiredVersion="1.0";
		requiredAddons[]={};

	};
};
class CfgVehicles
{
	class B_Soldier_base_F;

	class Sedra_Uniform: B_Soldier_base_F
	{
		author	= "19th Fleet Mod Team - Split Jaw";
		scope	=2;
		model="\19th_H2A_armor\19th_H2A_marines.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Units\factions\Sedra\Armor\Sedra_Armor_Chest_Green.paa",
			"53rd_sc_aux\Units\factions\Sedra\Armor\Sedra_Armor_Shoulders_Green.paa",
			"\19th_H2A_armor\textures\legs_co.paa",
			"\19th_H2A_armor\textures\bdu_co.paa",
			"\19th_H2A_armor\textures\misc_co.paa"
		};
	};
	
	class Sedra_UniformMedic: B_Soldier_base_F
	{
		author	= "19th Fleet Mod Team - Split Jaw";
		scope	=2;
		model="\19th_H2A_armor\19th_H2A_marines.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Units\factions\Sedra\Armor\Sedra_Armor_Chest_Green.paa",
			"53rd_sc_aux\Units\factions\Sedra\Armor\Sedra_Armor_Shoulders_GreenMedic.paa",
			"\19th_H2A_armor\textures\legs_co.paa",
			"\19th_H2A_armor\textures\bdu_co.paa",
			"\19th_H2A_armor\textures\misc_co.paa"
		};
	};	

};
class cfgWeapons
{
	class ItemCore;
	class VestItem;
	class InventoryItem_Base_F;
	class UniformItem;
	class Uniform_Base;

	class Sedra_Uniform_Base: Uniform_Base
	{
		scope=2;
		author="19th Fleet Mod Team - Split Jaw";
		displayName="[Sedra] Marine Armor";
		picture="\19th_H2A_armor\textures\H2A_marine_icon";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Sedra_Uniform";
			containerClass="Supply100";
			mass=100;
			allowedSlots[]={"701","801","901"};
			armor=1;
		};
	};


	class Sedra_Uniform_Medic_Base: Uniform_Base
	{
		scope=2;
		author="19th Fleet Mod Team - Split Jaw";
		displayName="[Sedra] Medic Armor";
		picture="\19th_H2A_armor\textures\H2A_marine_icon";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Sedra_UniformMedic";
			containerClass="Supply100";
			mass=100;
			allowedSlots[]={"701","801","901"};
			armor=1;
		};
	};

};

// Thank you Splitjaw, I love you <3 // 






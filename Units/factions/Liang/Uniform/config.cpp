class CfgPatches
{
	class LiangArmor
	{
		version="1.0";
		units[]={
			"53rd_Liang_Trooper",
			"53rd_Liang_Worker"

		};
		weapons[]={};
		requiredVersion="1.0";
		requiredAddons[]={};

	};
};
class CfgVehicles
{
	class B_Soldier_base_F;

	class 53rd_Liang_Trooper: B_Soldier_base_F
	{
		author	= "53rd Aux Team";
		scope	=1;
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		hiddenSelections[]=
		{

			"camo1",
			"camo2",
			"camo3",

		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Top.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Pants.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Armor.paa"
		};
	};
	
	class 53rd_Liang_Worker: B_Soldier_base_F
	{
		author	= "53rd Aux Team";
		scope	=1;
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		hiddenSelections[]=
		{

			"camo1",
			"camo2",
			"camo3",

		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Top.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Pants.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Armor.paa"
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

	class 53rd_Liang_Worker_Uniform: Uniform_Base
	{
		scope=2;
		author="19th Fleet Mod Team - Split Jaw";
		displayName="[Liang] Liang-Dortmund Worker";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="53rd_Liang_Worker";
			containerClass="Supply100";
			mass=100;
			allowedSlots[]={"701","801","901"};
			armor=1;
		};
	};


	class 53rd_Liang_Trooper_Uniform: Uniform_Base
	{
		scope=2;
		author="19th Fleet Mod Team - Split Jaw";
		displayName="[Liang] Liang-Dortmund Armor";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="53rd_Liang_Trooper";
			containerClass="Supply100";
			mass=100;
			allowedSlots[]={"701","801","901"};
			armor=1;
		};
	};

};





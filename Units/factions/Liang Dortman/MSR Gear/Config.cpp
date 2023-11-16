class CfgPatches {
	class 53rd_Liang_Dortman
	{
			units[] = 
			{

			};
			weapons[] = 
			{
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};	
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class haloinfmar_U_WDL_uniform: Uniform_Base
	{
		class ItemInfo;
	};
	class 53rd_Dortman_Base_uniform: haloinfmar_U_WDL_uniform
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName = "[53rd] Dortman MSR Base";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_AR_base_F";
			containerClass="Supply100";
			mass=80;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Top.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\53rd_Dortman_Pants.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Armor.paa"
		};
	};
	class 53rd_Dortman_Uniform_SN: 53rd_Dortman_Base_uniform
	{
		author="53rd Mod Team";
		scope=1;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Dortman Uniform";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Top.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\53rd_Dortman_Pants.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Armor.paa"
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
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Top.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\53rd_Dortman_Pants.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Armor.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Dortman_base_F";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Dortman_Uniform_WK: 53rd_Dortman_Base_uniform
	{
		author="53rd Mod Team";
		scope=1;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Dortman Uniform Worker";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Top.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\53rd_Dortman_Pants.paa",
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
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Top.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\53rd_Dortman_Pants.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Dortman_Worker_base_F";
			containerClass="Supply90";
			mass=80;
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class haloinf_Marine_Soldier_base_F: B_Soldier_base_F{};
	class HaloInf_Marine_WDL_F: haloinf_Marine_Soldier_base_F
	{
	class UniformItem;
	};
	class 53rd_Dortman_base_F: HaloInf_Marine_WDL_F
	{
		scope=1;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Dort Base Uniform";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Dortman_Uniform_SN";
			containerClass="Supply100";
			mass=80;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Top.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\53rd_Dortman_Pants.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Armor.paa"
		};
	};
	class 53rd_Dortman_Worker_base_F: HaloInf_Marine_WDL_F
	{
		scope=1;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Dort Base Uniform";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Dortman_Uniform_WK";
			containerClass="Supply100";
			mass=80;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\Liang_Dort_Top.paa",
			"53rd_SC_aux\Units\factions\Liang Dortman\MSR Gear\53rd_Dortman_Pants.paa",
		};
	};
};
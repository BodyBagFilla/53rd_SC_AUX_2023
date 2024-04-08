class CfgPatches {
	class 53rd_Liang_Armor_Base
	{
			units[] = 
			{

			};
			weapons[] = 
			{
				"Liang_Armor_Trooper_F",
				"Liang_Armor_Worker_F",

			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};

class cfgWeapons
{

//////////////VEST//////////////////////////////

	class UniformItem;
	class Uniform_Base;
	class haloinfmar_U_WDL_uniform: Uniform_Base
	{
		class ItemInfo;
	};
	class Liang_U_Base_uniform: haloinfmar_U_WDL_uniform
	{
		author="Body";
		scope=1;
		allowedSlots[]={901};
		displayName="[Liang] Uniform Base ";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Top.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Pants.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Armor.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="HaloInf_Marine_WDL_F";
			containerClass="Supply100";
			mass=80;
		};
	};
	class Liang_Armor_Trooper: Liang_U_Base_uniform
	{
		author="Scarecrow";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[Liang] Trooper";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Top.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Pants.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Armor.paa"
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
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Top.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Pants.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Armor.paa"
			};
			uniformModel="-";
			uniformClass="Liang_Armor_Trooper_F";
			containerClass="Supply90";
			mass=80;
		};
	};
	class Liang_Armor_Worker: Liang_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[Liang] Worker";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="Liang_Armor_Worker_F";
			containerClass="Supply90";
			mass=80;
		};
	};

};

class CfgVehicles
{
	class UniformItem;
	class Uniform_Base;
	class ItemInfo;
	class B_CTRG_Soldier_F;
	class haloinf_Marine_Soldier_base_F: B_CTRG_Soldier_F{};
	class Liang_base_F: haloinf_Marine_Soldier_base_F
	{
		displayName="[53rd] Base Uniform";
		modelsides[] += {0,1,2,3,6};
		class ItemInfo: ItemInfo
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="Liang_base_F";
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	class Liang_Armor_Trooper_F: Liang_base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Winter Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Top.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Pants.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Armor.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="Liang_base_F";
	};
	class Liang_Armor_Worker_F: Liang_base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Woodland Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Top.paa",
			"\53rd_sc_aux\Units\factions\Liang\Uniform\Liang_Dort_Pants.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="Liang_base_F";
	};

};
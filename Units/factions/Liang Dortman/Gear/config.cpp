class CfgPatches {
	class LD_Gear {
		units[] = 
        {
            "WIP"
        };
		weapons[] = 
        {
            "53rd_Dortman_Uni"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons 
{
    class ItemCore;
	class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class UniformItem;
	class OPTRE_Ins_BJ_Undersuit;
	class 53rd_Dortman_Uni: OPTRE_Ins_BJ_Undersuit
	{
		author="Sgt. Body";
		scope=1;
		side=2;
		displayName="[53rd] Liang Dortman Uniform";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass="53rd_LD_Base";
			containerClass="Supply40";
			mass=40;
			
		};
	};
	class OPTRE_UNSC_M52A_Armor3_WDL;
	class OPTRE_UNSC_M52A_Armor1_WDL;
	class LD_M52A_Light: OPTRE_UNSC_M52A_Armor1_WDL
	{
		author="Sgt. Body";
		scope=1;
		displayName="[53rd] Liang Dortman M52A";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\M52A_DM_2_U.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_U.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_3_U.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_U.paa"
		};
	};
	class LD_M52A_Heavy: OPTRE_UNSC_M52A_Armor3_WDL
	{
		author="Sgt. Body";
		scope=1;
		displayName="[53rd] Liang Dortman M52A (H)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\M52A_DM_2_U.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_U.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_3_U.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_U.paa"
		};
	}; 

};
class CfgVehicles
{
	class LM_OPCAN_URA_Base_D;
	class 53rd_LD_Base: LM_OPCAN_URA_Base_D
	{
		author="Body";
		displayName="[53rd] Liang Dortman Uniform";
		scope=1;
		side=2;
		model="\LM_OPCAN3.0\OPF\URA\U\URA_Uni.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\Dortman_U.paa"
		};
		class UniformItem;
		class ItemInfo: UniformItem
		{
			uniformModel="\LM_OPCAN3.0\OPF\URA\U\URA_Uni.p3d";
			uniformClass="53rd_Dortman_Uni";
			containerClass="Supply40";
			mass=40;
		};
	};
};
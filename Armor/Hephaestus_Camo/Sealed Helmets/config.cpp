class CfgPatches {
	class Hephaestus_Sealed_Helmets_Redux {
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
    class ItemInfo;
    class UniformItem;
	class HeadgearItem;
	class VestItem;
	class Hands;
	class Pelvis;
	class VES_CH252D;
	class VES_CH252D_dp;
	class VES_CH252_MAR_Vacuum_dp:VES_CH252D_dp
	{
	class ItemInfo;
	};
	class VES_CH252_MAR_Vacuum:VES_CH252D
	{
	class ItemInfo;
	};
///////////////////////////////////////////////////////////
	class 53rd_Sealed_Urban : VES_CH252_MAR_Vacuum
    {
		author="Vespade & Baseplate";
		displayName = "[53rd] Camo Sealed Helmet (Urban)";
		model="\OPTRE_UNSC_Units\Army\helmet_p";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Gen2_CH252_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			uniformModel="OPTRE_UNSC_Units\Army\helmet_p";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Gen2_CH252_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=35;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=35;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=35;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
		allowedFacewear[]={};
	};
	class 53rd_Sealed_Desert : VES_CH252_MAR_Vacuum
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] Camo Sealed Helmet (Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Gen2_CH252_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Sealed_Woodland : VES_CH252_MAR_Vacuum
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] Camo Sealed Helmet (Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Gen2_CH252_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Sealed_Winter : VES_CH252_MAR_Vacuum
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] Camo Sealed Helmet (Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Sealed_CH252_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
    class 53rd_Sealed_Urban_dp: VES_CH252_MAR_Vacuum_dp
	{
		author="Vespade & Baseplate & Body";
		displayName = "[53rd] Camo Sealed Helmet (Urban) DP";
		model="\OPTRE_UNSC_Units\Army\helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Gen2_CH252_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Gen2_CH252_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=35;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=35;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=35;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
		allowedFacewear[]={};
	};
	class 53rd_Sealed_Desert_dp : VES_CH252_MAR_Vacuum_dp
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] Camo Sealed Helmet (Desert) DP";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Gen2_CH252_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Sealed_Woodland_dp : VES_CH252_MAR_Vacuum_dp
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] Camo Sealed Helmet (Woodland) DP";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Gen2_CH252_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Sealed_Winter_dp : VES_CH252_MAR_Vacuum_dp
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] Camo Sealed Helmet (Winter) DP";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Sealed_CH252_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
};
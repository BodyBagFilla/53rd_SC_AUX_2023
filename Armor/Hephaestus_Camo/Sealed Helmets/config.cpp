/*class CfgPatches {
	class Hephaestus_Sealed_Helmets {
		units[] = 
        {
			""
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
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
	class OPTRE_UNSC_M52A_Armor_Base;
	class Hands;
	class Pelvis;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_WDL_Heavy;
	class HaloInf_Marine_WDL_NV_headgear
	{
		class HitpointsProtectionInfo;
	};
	class HaloInf_Marine_WDL_headgear
	{
		class HitpointsProtectionInfo;
	};
	class VES_BDU_Evolved_Slim;
///////////////////////////////////////////////////////////
	//VACSEALED
	class 53rd_Sealed_Base : VES_CH252_MAR_Vacuum
    {
        scope = 1;
        displayName = "[53rd] Hephaestus Helmet (Urban)";
        author = "53rd AUX TEAM";
        model="\OPTRE_UNSC_Units\Army\helmet";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            //"H_Collar",
            "H_Ghillie"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_Armor_Rework\tex\53rd_Helmet",
            "53rd_Armor_Rework\tex\Helmet_Visor_co"
        };
		class ItemInfo: HeadgearItem
		{
            mass=1;
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=15;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				//"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
                "53rd_Armor_Rework\tex\53rd_Helmet",
                "53rd_Armor_Rework\tex\Helmet_Visor_co"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"
			};
        };
    };
	class 53rd_Sealed_Base_dp : 53rd_Sealed_Base
    {
        scope = 0;
        scopeArsenal = 0;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
        displayName = "[53rd] Hephaestus Helmet (Rifleman) dp";
        model="\OPTRE_UNSC_Units\Army\helmet";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            //"H_Collar",
            "H_Ghillie"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_Armor_Rework\tex\53rd_Helmet",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
		class ItemInfo: HeadgearItem
		{
            mass=1;
            class HitpointsProtectionInfo
            {
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
                class Head
                {
                    hitPointName="HitHead";
                    armor=40;
                    passThrough=0.1;
                };
            };
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				//"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
                "53rd_Armor_Rework\tex\53rd_Helmet",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				""
			};
        };
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Winter : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Winter_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
    //Medic
    	class 53rd_Helmet_Vac_Sealed_Medic_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Urban_Medic.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Urban_Medic.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Desert_Medic.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Desert_Medic.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Woodland_Medic.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Woodland_Medic.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Winter : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Snow_Medic.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Winter_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Snow_Medic.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Camo_Sealed_Rifleman_Winter : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Camo Sealed Helmet (Rifleman / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Sealed_CH252_Winter.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Camo_Sealed_Rifleman_Winter_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Camo Sealed Helmet (Rifleman / Winter) DP";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Sealed_CH252_Winter.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
};
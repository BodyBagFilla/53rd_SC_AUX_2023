class CfgPatches 
{
class 53rd_Base_Berets
{
    units[] = 
    {
        ""
    };
    weapons[] = 
    {

        ///Berets///

        "53_Apollo_Beret",
        "53_Ares_Beret",
        "53_Atlas_Beret",
        "53_Heph_Beret",
        "53_Volare_Beret",
        "53_BXR_Beret",
        "53_Sedra_Beret",
        "53_Liang_Beret",
        "53_LiangWhite_Beret",
        "53_Apollo_Beret",
        "53_ONI_Beret",
        "53_beret",
 
    };
    requiredVersion = 0.100000;
    requiredAddons[] = {};
	}
}

class cfgWeapons 
{

    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	
    /////Berets/////

    class 53rd_Base_Beret: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=1;
		scopeArsenal = 1;
		displayName="[53rd] Beret (Hephaestus)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
		model="a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Hephaestus.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="a3\characters_f_epb\BLUFOR\headgear_beret02";
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					explosionShielding = 3;
					passThrough=0.3;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=50;
					explosionShielding = 3;
					passThrough=0.3;
				};
				class Neck
				{
					armor=50;
					hitpointName="HitNeck";
					explosionShielding = 3;
					passThrough=0.1;
				};
			};
		};
	};

	class 53_BXR_Beret: 53rd_Base_Beret
	{	
	author="Frankie";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53] BXR Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\TEST\53BXRberet.paa"
		};
	};

	class 53_Sedra_Beret: 53rd_Base_Beret
	{	
	author="Frankie";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Sedra] Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\TEST\53Sedraberet.paa"
		};
	};

	class 53_Liang_Beret: 53rd_Base_Beret
	{	
	author="Frankie";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Liang] Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\TEST\53Liangberet.paa"
		};
	};

	class 53_LiangWhite_Beret: 53rd_Base_Beret
	{	
	author="Frankie";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Liang] Beret (White)";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\TEST\53LiangWhiteberet.paa"
		};
	};
	
	class 53_ONI_Beret: 53rd_Base_Beret
	{	
	author="Frankie";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[ONI] Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\TEST\53ONIberet.paa"
		};
	};
	
	
	class TKE_UCMCHelm;
	class Liang_Trooper_Helmet: TKE_UCMCHelm
	{	
	author="Frankie";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Liang] Trooper Helmet";
		
				hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\TEST\Liang_Helmet.paa"
		};
	};	
	
	class TKE_MDTFArmour1;
	class BXR_Trooper_Vest: TKE_MDTFArmour1
	{
		author="Frankie";
		scope=2;
		displayName="[BXR] Standard Mining Vest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\TEST\BXR_Vest.paa"
		};
	};

	class TKE_MDTFArmour2;	
	class BXR_Trooper_Heavy: TKE_MDTFArmour2
	{
		author="Frankie";
		scope=2;
		displayName="[BXR] Heavy Mining Suit";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Units\factions\TEST\BXR_Vest.paa";
			"\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa"
		};
	};


	class OPTRE_UNSC_CH252D_Helmet;
	class ONI_Seal_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;		
		author="Frankie";
        picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
        model = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
		displayName="[ONI] Sealed Helmet";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Units\factions\TEST\ONI_Helmet.paa",
			"53rd_sc_aux\Units\factions\TEST\ONI_Helmet_Visor.paa"
		};
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
	};			

	class 53rd_Base_Recon;
    class ONI_Recon_Helmet: 53rd_Base_Recon 
    {
        author="Frankie";
        scope=2;
        scopeArsenal=2;
        displayName="[ONI] Recon Helmet";
        picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
        model= "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
        hiddenSelections[]=
        {
            "Camo",
            "Camo2",
            "H_Ghillie"            
        };
        hiddenSelectionsTextures[]=
        {
			"53rd_sc_aux\Units\factions\TEST\ONI_Helmet.paa",
			"53rd_sc_aux\Units\factions\TEST\ONI_Helmet_Visor.paa"
        };
    };

	class OPTRE_UNSC_M52D_Armor;
	class ONI_Base_Armor: OPTRE_UNSC_M52D_Armor
	{

		author="Frankie";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;		
		displayName="[ONI] M52D Body Armor";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Units\factions\TEST\ONI_Armor_Vest.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"53rd_sc_aux\Units\factions\TEST\ONI_Armor_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"53rd_sc_aux\Units\factions\TEST\ONI_Armor_Top.paa"
		};
	};		
};

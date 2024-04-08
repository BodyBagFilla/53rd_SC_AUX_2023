class CfgPatches {
	class Volare_Armor {
		units[] = 
        {
            "BDU_V_Volare_Black",
			""
        };
		weapons[] = 
        {
            "Volare_BDU_Bl",
			"53rd_VX19_Black_Helmet",
			"53rd_VX19_Blue_Helmet",
			"53rd_VX19_Red_Helmet",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
class cfgWeapons 
{
	class HeadgearItem;
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class Hands;
	class Pelvis;

//Volare Helmets
    class OPTRE_FC_VX19_Helmet;
////////////UNSC ARMORY HELMETS////////////////////////
	class H_HelmetB
    {
        class ItemInfo;
    };
	class 53rd_UNSC_PilotHelmet: H_HelmetB
    {
       author = "Moose (Outworld Studios)";
       displayName = "[53rd] Volare Pilot Helmet Black";
       picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
       model = "\UNSCGear\UNSCPilotHelmet.p3d";
	   hiddenSelections[] = {"Camo"};
	   hiddenSelectionsTextures[] = {"53rd_SC_aux\Armor\Volare_Armor\Pilot_Helmet_Plain.paa"};
       class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\UNSCGear\UNSCPilotHelmet.p3d";
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo 
			{
			 class Head 
			  {
			  hitpointName = "HitHead";
			  armor = 35;
			  passThrough = 0.5;
			  };
			 class Face 
			 {
				hitpointName = "HitFace";
				armor = 35;
				passThrough = 0.5;
			};
		   };
		};
	};
	class 53rd_UNSC_PilotHelmet_Silver: 53rd_UNSC_PilotHelmet
    {
       author = "Moose (Outworld Studios) & Body";
       displayName = "[53rd] Volare Pilot Helmet Silver";
       picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
       model = "\UNSCGear\UNSCPilotHelmet.p3d";
	   hiddenSelections[] = {"Camo"};
	   hiddenSelectionsTextures[] = {"53rd_SC_aux\Armor\Volare_Armor\Pilot_Helmet_Silver.paa"};
	};
	class 53rd_UNSC_PilotHelmet_blue: 53rd_UNSC_PilotHelmet
    {
       author = "Moose (Outworld Studios) & Body";
       displayName = "[53rd] Volare Pilot Helmet Blue";
       picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
       model = "\UNSCGear\UNSCPilotHelmet.p3d";
	   hiddenSelections[] = {"Camo"};
	   hiddenSelectionsTextures[] = {"53rd_SC_aux\Armor\Volare_Armor\Pilot_Helmet_Blue.paa"};
	};
	class 53rd_UNSC_PilotHelmet_NCO: 53rd_UNSC_PilotHelmet
    {
       author = "Moose (Outworld Studios) & Body";
       displayName = "[53rd] Volare Pilot Helmet NCO";
       picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
       model = "\UNSCGear\UNSCPilotHelmet.p3d";
	   hiddenSelections[] = {"Camo"};
	   hiddenSelectionsTextures[] = {"53rd_SC_aux\Armor\Volare_Armor\Pilot_Helmet_Red.paa"};
	};
	class 53rd_H_Echo419_Helmet: H_HelmetB
    {
       author = "Moose (Outworld Studios)";
       displayName = "[53rd] Echo 419 Helmet (Foe Hammer)";
       picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
       model = "\Echo419\Echo419Helmet.p3d";
	   hiddenSelections[] = {"Camo"};
	   hiddenSelectionsTextures[] = {"53rd_SC_aux\Armor\Volare_Armor\CE_Pilot_Helmet.paa"};
       class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Echo419\Echo419Helmet.p3d";
			hiddenSelections[] = {""};
			class HitpointsProtectionInfo 
			{
			class Head 
				{
				hitpointName = "HitHead";
				armor = 20;
				passThrough = 0.5;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 12;
					passThrough = 0.5;
				};
			};
		};
	 };
	class 53rd_H_Echo419_HelmetB: H_HelmetB
    {
      author = "Moose (Outworld Studios)";
      displayName = "[53rd] Echo 419 Helmet-B (Foe Hammer)";
      picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
      model = "\Echo419B\Echo419Helmet2.p3d";
	  hiddenSelections[] = {"Camo"};
	  hiddenSelectionsTextures[] = {"53rd_SC_aux\Armor\Volare_Armor\CE_Pilot_Helmet.paa"};
		  class ItemInfo: HeadgearItem
			{
			mass = 10;
			uniformModel = "\Echo419B\Echo419Helmet2.p3d";
			hiddenSelections[] = {""};
			class HitpointsProtectionInfo 
			{
				class Head 
				{
					hitpointName = "HitHead";
					armor = 20;
					passThrough = 0.5;
				};
				class Face 
				{
				hitpointName = "HitFace";
				armor = 12;
				passThrough = 0.5;
				};
			};
		};
	};
    //////////////////OPTRE HELMETS/////////////
	class 53rd_VX19_Black_Helmet : OPTRE_FC_VX19_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "53rd AUX TEAM";
        weaponPoolAvailable = 1;
        model="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
		displayName = "[53rd] VX19 Flight Helmet (Black V)";
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.60;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Collar",
			"H_Neck",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
        class ItemInfo: HeadgearItem
		{
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Collar",
				"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_Aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
                "53rd_SC_Aux\tex\visr_black_CO.paa"
            };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 20;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 40;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
    class 53rd_VX19_Black_Helmet_dp : 53rd_VX19_Black_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Black V) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Collar",
				"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_Aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };
    class 53rd_VX19_Blue_Helmet : 53rd_VX19_Black_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] VX19 Flight Helmet (Blue V)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_blue_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
    };
    class 53rd_VX19_Blue_Helmet_dp : 53rd_VX19_Black_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Blue V) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_blue_CO.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Collar",
				"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_blue_CO.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };
	class 53rd_VX19_Red_Helmet : 53rd_VX19_Black_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] VX19 Flight Helmet (Red V)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_red_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
    };
    class 53rd_VX19_Red_Helmet_dp : 53rd_VX19_Black_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Red V) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_red_CO.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Collar",
				"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_red_CO.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };
	class 53rd_VX19_Snow_Helmet : 53rd_VX19_Black_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] VX19 Flight Helmet (Snow)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_White_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
    };
    class 53rd_VX19_Snow_Helmet_dp : 53rd_VX19_Black_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Snow) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_White_CO.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Collar",
				"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_White_CO.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };
    
//Volare Armor
    class OPTRE_FC_M52B_Armor_Rifleman;
    class OPTRE_FC_M52B_Armor_Teamleader;
	class OPTRE_FC_Marines_Uniform;
	class Vest_Camo_Base;
	class UNSC_Pilot_Uniform;

    class 53rd_V_Pilot_Armor_Black:OPTRE_FC_M52B_Armor_Rifleman
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (Black)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_black_co.paa"};
    };
    class 53rd_V_Pilot_Armor_Black_NCO:OPTRE_FC_M52B_Armor_Teamleader
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (NCO\Black)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_nco_black_co.paa"};
    };
    class 53rd_V_Pilot_Armor_BU_NCO:OPTRE_FC_M52B_Armor_Teamleader
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (NCO\Blue)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_nco_black_blue_co.paa"};
    };
	 class 53rd_V_Pilot_Armor_Red_NCO:OPTRE_FC_M52B_Armor_Teamleader
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (NCO\Red)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_nco_red_co.paa"};
    };
	class 53rd_V_Pilot_Armor_White:OPTRE_FC_M52B_Armor_Teamleader
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (Snow)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_White_co.paa"};
    };
    class Volare_BDU_Bl:OPTRE_FC_Marines_Uniform
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (Black)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BDU_V_Volare_Black";
            uniformType = "Neopren";
            containerClass = "Supply100";
            modelSides[] = {6};
        };
    };
    class Volare_BDU_Bl_NCO:OPTRE_FC_Marines_Uniform
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (NCO\Black)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BDU_V_Volare_Black_NCO";
            uniformType = "Neopren";
            containerClass = "Supply100";
            modelSides[] = {6};
        };
    };
	class Volare_BDU_B2_NCO:OPTRE_FC_Marines_Uniform
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (NCO\Blue)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BDU_V_Volare_Blue_NCO";
            uniformType = "Neopren";
            containerClass = "Supply100";
            modelSides[] = {6};
        };
    };
	class Volare_BDU_B3_Snow:OPTRE_FC_Marines_Uniform
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (Snow)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BDU_V_Volare_White";
            uniformType = "Neopren";
            containerClass = "Supply100";
        };
    };
////////////////UNSC ARMOR /////////////////////////////
	class 53rd_UNSC_Pilot_Armor_Black: Vest_Camo_Base
	{
		_generalMacro = "UNSC_Gear"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		author = "Moose (Outworld Studios) & Body";
		displayName = "[53rd] Volare Pilot Armor Black";
		picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
		model = "UNSCGear\UNSCPilotArmor.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
		{
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Legs_Plain.paa",
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Torso_Plain.paa"
		};
		class ItemInfo : VestItem
		{
			uniformModel = "UNSCGear\UNSCPilotArmor.p3d";
			picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
			hiddenSelections[] = {"camo","camo1"};
		    hiddenSelectionsTextures[] =
			{
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Armor_Legs_Plain.paa",
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Torso_Plain.paa"
			};
			containerClass = "Supply160";
			mass = 80;
			modelsides[] = {0, 1, 2, 3};
			
			class HitpointsProtectionInfo
			{
				class Neck {
					hitpointName = "HitNeck";
					armor = 35;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 35;
					passThrough = 0.5;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 35;
					passThrough = 0.6;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 35;
					passThrough = 0.6;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 35;
					passThrough = 0.3;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 35;
					passThrough = 0.3;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 35;
					passThrough = 0.5;
				};
			};
		};
	};
	class 53rd_UNSC_Pilot_Armor_Blue: 53rd_UNSC_Pilot_Armor_Black
	{
		_generalMacro = "UNSC_Gear"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		author = "Moose (Outworld Studios)";
		displayName = "[53rd] Volare Pilot Armor Blue";
		picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
		model = "UNSCGear\UNSCPilotArmor.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Armor_Legs_Blue.paa",
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Armor_Torso_Blue.paa",
		};
	};
	class 53rd_UNSC_Pilot_Armor_NCO: 53rd_UNSC_Pilot_Armor_Black
	{
		_generalMacro = "UNSC_Gear"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		author = "Moose (Outworld Studios)";
		displayName = "[53rd] Volare Pilot Armor NCO";
		picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
		model = "UNSCGear\UNSCPilotArmor.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Armor_Legs_Red.paa",
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Armor_Torso_Red.paa"
		};
	};
	class 53rd_UNSC_Pilot_Armor_Silver: 53rd_UNSC_Pilot_Armor_Black
	{
		_generalMacro = "UNSC_Gear"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		author = "Moose (Outworld Studios)";
		displayName = "[53rd] Volare Pilot Armor Silver";
		picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
		model = "UNSCGear\UNSCPilotArmor.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
		{
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Armor_Legs_Silver.paa",
		"53rd_SC_aux\Armor\Volare_Armor\Pilot_Armor_Torso_Silver.paa"
		};
	};
	
//Combat Armor
	
/*	class  53rd_UNSC_Pilot_UniformGrey : UNSC_Pilot_Uniform
	{
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (Grey)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"UNSCPilotUniform\black\DefaultMaterial_CO.paa"};
		class ItemInfo : ItemInfo
		{
			uniformClass = "53rd_Pilot_Uniform_Grey";
		
		};
	};
	class  53rd_UNSC_Pilot_UniformBlue : UNSC_Pilot_Uniform
	{
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (Blue)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"UNSCPilotUniform\black\DefaultMaterial_CO.paa"};
		class ItemInfo : ItemInfo
		{
			uniformClass = "53rd_Pilot_Uniform_Blue";
		
		};
	};
	class  53rd_UNSC_Pilot_UniformNCO : UNSC_Pilot_Uniform
	{
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (NCO)";
		hiddenSelectionsTextures[] = {"UNSCPilotUniform\black\DefaultMaterial_CO.paa"};
		class ItemInfo : ItemInfo
		{
			uniformClass = "53rd_Pilot_Uniform_Red";
		
		};
	};
	class  53rd_UNSC_Pilot_UniformBlack : UNSC_Pilot_Uniform
	{
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
		displayName = "[53rd] Volare Flight Suit (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"UNSCPilotUniform\black\DefaultMaterial_CO.paa"};
		class ItemInfo : ItemInfo
		{
			uniformClass = "53rd_Pilot_Uniform_Black";
		
		};
	};
*/
};

class CfgVehicles
{
	class OPTRE_UNSC_Army_Soldier_WDL;
	class O_V_Soldier_hex_F;

	class BDU_V_Volare_Black : OPTRE_UNSC_Army_Soldier_WDL 
    { 
        model = "\OPTRE_FC_Units\Marines\h3_uniform.p3d"; 
        uniformClass = "Volare_BDU_Bl"; 
        hiddenSelections[] = {"camo1","camo2"}; 
        hiddenSelectionsTextures[] = 
		{
			"53rd_SC_aux\tex\Volare Armor\h3_uniform_black_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa",
		};
    }; 
	class BDU_V_Volare_Black_NCO : OPTRE_UNSC_Army_Soldier_WDL 
    { 
        model = "\OPTRE_FC_Units\Marines\h3_uniform.p3d"; 
        uniformClass = "Volare_BDU_Bl_NCO"; 
        hiddenSelections[] = {"camo1","camo2"}; 
        hiddenSelectionsTextures[] =
		{
			"53rd_SC_aux\tex\Volare Armor\h3_uniform_black_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa",
		};
    };
	class BDU_V_Volare_Blue_NCO : OPTRE_UNSC_Army_Soldier_WDL 
    { 
        model = "\OPTRE_FC_Units\Marines\h3_uniform.p3d"; 
        uniformClass = "Volare_BDU_B2_NCO"; 
        hiddenSelections[] = {"camo1","camo2"}; 
        hiddenSelectionsTextures[] = 
		{
			"53rd_SC_aux\tex\Volare Armor\h3_uniform_black_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa",
		};
    };
	class BDU_V_Volare_White : OPTRE_UNSC_Army_Soldier_WDL 
    { 
        model = "\OPTRE_FC_Units\Marines\h3_uniform.p3d"; 
        uniformClass = "Volare_BDU_B3_Snow"; 
        hiddenSelections[] = {"camo1","camo2"}; 
        hiddenSelectionsTextures[] = 
		{
			"53rd_SC_aux\tex\Volare Armor\h3_uniform_black_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa",
		};
    };

	class 53rd_Pilot_Uniform_Grey : O_V_Soldier_hex_F 
	{
		scope = 1;
		modelSides[] = {0, 1, 2, 3};
		displayName = "[53rd] UNSC Pilot Uniform Grey";
		model = "UNSCPilotUniform\UNSCPilotUniform.p3d";
		picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
		hiddenSelectionsTextures[] = {"UNSCPilotUniform\uniform\DefaultMaterial_CO.paa"};
	};
	class 53rd_Pilot_Uniform_Blue : O_V_Soldier_hex_F 
	{
		scope = 1;
		modelSides[] = {0, 1, 2, 3};
		displayName = "[53rd] UNSC Pilot Uniform Blue";
		model = "UNSCPilotUniform\UNSCPilotUniform.p3d";
		picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
		hiddenSelectionsTextures[] = {"UNSCPilotUniform\uniform\DefaultMaterial_CO.paa"};
	};
	class 53rd_Pilot_Uniform_Red : O_V_Soldier_hex_F 
	{
		scope = 1;
		modelSides[] = {0, 1, 2, 3};
		displayName = "[53rd] UNSC Pilot Uniform Red";
		model = "UNSCPilotUniform\UNSCPilotUniform.p3d";
		picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
		hiddenSelectionsTextures[] = {"UNSCPilotUniform\uniform\DefaultMaterial_CO.paa"};
	};
	class 53rd_Pilot_Uniform_Black : O_V_Soldier_hex_F 
	{
		scope = 1;
		modelSides[] = {0, 1, 2, 3};
		displayName = "[53rd] UNSC Pilot Uniform Black";
		model = "UNSCPilotUniform\UNSCPilotUniform.p3d";
		picture = "\53rd_sc_aux\tex\Arsenal\Volare.paa";
		hiddenSelectionsTextures[] = {"UNSCPilotUniform\uniform\DefaultMaterial_CO.paa"};
	};
};
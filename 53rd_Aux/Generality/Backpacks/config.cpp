
class CfgPatches
{
    class 53rd_Infantry_Backpacks
    { 
        units[] = 
		{
		"53rd_Backpacks_ILCS_Base",
		"53rd_Backpacks_ILCS_Black",
		"53rd_Backpacks_ILCS_Desert",
		"53rd_Backpacks_ILCS_Woodland",
		"53rd_Backpacks_ILCS_Winter",
		"53rd_Backpacks_Medic_ILCS_Black",
		"53rd_Backpacks_Medic_ILCS_Woodland",
		"53rd_Backpacks_Medic_ILCS_Winter",
		"53rd_Backpacks_Medic_ILCS_Desert",
		"53rd_Backpacks_Heavy_ILCS_Urban",
		"53rd_Backpacks_Heavy_ILCS_Woodland",
		"53rd_Backpacks_Heavy_ILCS_Winter",
		"53rd_Backpacks_Heavy_ILCS_Desert",
		"53rd_Backpacks_LR_ANPRC521_Base",
		"53rd_Backpacks_LR_ANPRC521_Urban",
		"53rd_Backpacks_LR_ANPRC521_Woodland",
		"53rd_Backpacks_LR_ANPRC521_Desert",
		"53rd_Backpacks_LR_ANPRC521_Winter",
		"53rd_ILCS_ANPRC_515",
		"53rd_LR_Parachute",
		"53rd_Atlas_Jumpack_Base",
		"Series_8LR_Jumpack_M",
		"Series_8LR_Jumpack",
		"53rd_Backpacks_Rucksack_Base",
		"53rd_Backpacks_Heavy_Rucksack_Base",
		"53rd_Backpacks_Radio_Rucksack_Base",
		"53rd_Backpacks_Rucksack_Urban",
		"53rd_Backpacks_Rucksack_Woodland",
		"53rd_Backpacks_Rucksack_Winter",
		"53rd_Backpacks_Rucksack_Desert",
		"53rd_Backpacks_Rucksack_Heavy_Urban",
		"53rd_Backpacks_Rucksack_Heavy_Woodland",
		"53rd_Backpacks_Rucksack_Heavy_Winter",
		"53rd_Backpacks_Rucksack_Heavy_Desert",
		"53rd_Backpacks_LR_Rucksack_Urban",
		"53rd_Backpacks_LR_Rucksack_Woodland",
		"53rd_Backpacks_LR_Rucksack_Winter",
		"53rd_Backpacks_LR_Rucksack_Desert",
		"53rd_Backpacks_Rucksack2_Base",
		"53rd_Backpacks_Medic_Rucksack2_Base",
		"53rd_Backpacks_Heavy_Rucksack2_Base",
		"53rd_Backpacks_Radio_Rucksack2_Base"

		}; 
        weapons[] = 
		{

		}; 
        requiredVersion = 0.1; 
        requiredAddons[] = 
		{

		}; 
    }; 
};

#include "Backpacks.hpp"

class cfgVehicles
{

//////////////////////////// ILCS ////////////////////////////
//////////////////////////// Base ////////////////////////////

	class OPTRE_ILCS_Rucksack_Heavy;
	class 53rd_Backpacks_ILCS_Base:OPTRE_ILCS_Rucksack_Heavy
    {
        author = "Herkules";
        displayName = "[53rd] ILCS Rucksack (Urban)";
 		scope=1;
		scopeArsenal=1;
		maximumLoad = 300;
		mass = 20;
		hiddenSelections[] = 
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		hiddenSelectionsTextures[] = 
			{
				"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Black.paa"
			};
		tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };

//////////////////////////// Rifle ////////////////////////////

	class 53rd_Backpacks_ILCS_Black:53rd_Backpacks_ILCS_Base
    {
        displayName = "[53rd] ILCS Rucksack (Black)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Black.paa"
		};
    };

	class 53rd_Backpacks_ILCS_Desert:53rd_Backpacks_ILCS_Black
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Rucksack (Desert)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Desert.paa"
		};
    };

	class 53rd_Backpacks_ILCS_Woodland:53rd_Backpacks_ILCS_Black
    {
 
        displayName = "[53rd] ILCS Rucksack (Woodland)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Woodland.paa"
		};
    };

	class 53rd_Backpacks_ILCS_Winter:53rd_Backpacks_ILCS_Black
    {
  
        displayName = "[53rd] ILCS Rucksack (Winter)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Winter.paa"
		};
    };

//////////////////////////// Medical ////////////////////////////

	class 53rd_Backpacks_Medic_ILCS_Black:53rd_Backpacks_ILCS_Base
    {

        displayName = "[53rd] ILCS Corpsman Rucksack (Urban)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad = 300;
		hiddenSelections[] = {"camo1","AP_Heavy"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Black.paa"
		};
	};

	class 53rd_Backpacks_Medic_ILCS_Woodland:53rd_Backpacks_Medic_ILCS_Black
    {

        displayName = "[53rd] ILCS Corpsman Rucksack (Woodland)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad = 300;
		hiddenSelections[] = {"camo1","AP_Heavy"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Woodland.paa"
		};
    };

	class 53rd_Backpacks_Medic_ILCS_Winter:53rd_Backpacks_Medic_ILCS_Black
    {

        displayName = "[53rd] ILCS Corpsman Rucksack (Winter)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad = 300;
		hiddenSelections[] = {"camo1","AP_Heavy"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Winter.paa"
		};
    };


	class 53rd_Backpacks_Medic_ILCS_Desert:53rd_Backpacks_Medic_ILCS_Black
    {

        displayName = "[53rd] ILCS Corpsman Rucksack (Desert)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad = 300;
		hiddenSelections[] = {"camo1","AP_Heavy"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Desert.paa"
		};
    };


//////////////////////////// Heavy ////////////////////////////


	class 53rd_Backpacks_Heavy_ILCS_Urban:53rd_Backpacks_ILCS_Base
    {

        displayName = "[53rd] ILCS Heavy Rucksack (Black)";
 		scope=2;
		scopeArsenal=2;
        maximumLoad = 350;
		hiddenSelections[] = {"camo1","biofoam"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Black.paa"
		};
    };

	class 53rd_Backpacks_Heavy_ILCS_Woodland:53rd_Backpacks_Heavy_ILCS_Urban
    {
 
        displayName = "[53rd] ILCS Heavy Rucksack (Woodland)";
 		scope=2;
		scopeArsenal=2;
        maximumLoad = 350;
		hiddenSelections[] = {"camo1","biofoam"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Woodland.paa"
		};
    };

	class 53rd_Backpacks_Heavy_ILCS_Winter:53rd_Backpacks_Heavy_ILCS_Urban
    {
  
        displayName = "[53rd] ILCS Heavy Rucksack (Winter)";
 		scope=2;
		scopeArsenal=2;
        maximumLoad = 350;
		hiddenSelections[] = {"camo1","biofoam"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Winter.paa"
		};
    };

	class 53rd_Backpacks_Heavy_ILCS_Desert:53rd_Backpacks_Heavy_ILCS_Urban
    {
        displayName = "[53rd] ILCS Heavy Rucksack (Desert)";
 		scope=2;
		scopeArsenal=2;
        maximumLoad = 350;
		hiddenSelections[] = {"camo1","biofoam"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_Rucksack_Desert.paa"
		};
    };


/////////////////////////// ANPRC ////////////////////////////
//////////////////////////// Base ////////////////////////////

	class OPTRE_ANPRC_515;
	class OPTRE_ANPRC_521_black;

	class 53rd_Backpacks_LR_ANPRC521_Base: OPTRE_ANPRC_521_black
	{
        author = "Herkules";
		displayName="[53rd] Radiopack AN/PRC-521 (Urban)";
 		scope=1;
		scopeArsenal=1;
		maximumLoad=200;
		mass = 20;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\Soft_Backpack_Urban.paa",
			"\53rd_Aux\Generality\Backpacks\ILCS_ANPRC_521_Urban.paa"
		};

		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

//////////////////////////// 521 ////////////////////////////
	class 53rd_Backpacks_LR_ANPRC521_Urban:53rd_Backpacks_LR_ANPRC521_Base
	{
		displayName="[53rd] Radiopack AN/PRC-521 (Urban)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\Soft_Backpack_Urban.paa",
			"\53rd_Aux\Generality\Backpacks\ILCS_ANPRC_521_Urban.paa"
		};
	};

	class 53rd_Backpacks_LR_ANPRC521_Woodland:53rd_Backpacks_LR_ANPRC521_Base
	{
		displayName="[53rd] Radiopack AN/PRC-521 (Woodland)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\Soft_Backpack_Woodland.paa",
			"\53rd_Aux\Generality\Backpacks\ILCS_ANPRC_521_Woodland.paa"
		};
	};
/* PENDING CAMO UPDATE
	class 53rd_Backpacks_LR_ANPRC521_Winter:53rd_Backpacks_LR_ANPRC521_Base
	{
		displayName="[53rd] Radiopack AN/PRC-521 (Winter)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\Soft_Backpack_Winter.paa",
			"\53rd_Aux\Generality\Backpacks\ILCS_ANPRC_521_Winter.paa"
		};
	};
*/
	class 53rd_Backpacks_LR_ANPRC521_Desert:53rd_Backpacks_LR_ANPRC521_Base
	{
		displayName="[53rd] Radiopack AN/PRC-521 (Desert)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\Soft_Backpack_Desert.paa",
			"\53rd_Aux\Generality\Backpacks\ILCS_ANPRC_521_Desert.paa"
		};
	};



//////////////////////////// 515 ////////////////////////////
	class 53rd_ILCS_ANPRC_515: OPTRE_ANPRC_515
    {
        displayName = "[53rd] ILCS AN/PRC-515";
        maximumLoad = 300;
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Generality\Backpacks\ILCS_ANPRC_515.paa"
		};
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };

///////////////////////// Rucksack ////////////////////////////
////////////////////////// Base ///////////////////////////////

	class Halo_Rucksack_01;

	class 53rd_Backpacks_Rucksack_Base: Halo_Rucksack_01
	{
		author="53rd Aux Team";
		displayName="[53rd] Infantry Rucksack (Base)";
 		scope=1;
		scopeArsenal=1;
		maximumLoad=200;
		mass=20;
		model="\Halo_marine_02\Backpacks\Rucksack";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Urban.paa"
		};
	};

	class 53rd_Backpacks_Medic_Rucksack_Base: Halo_Rucksack_01
	{
		author="53rd Aux Team";
		displayName="[53rd] Infantry Rucksack (Base / Heavy)";
 		scope=1;
		scopeArsenal=1;
		maximumLoad=250;
		mass=20;
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Medic_Urban.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};


	class 53rd_Backpacks_Heavy_Rucksack_Base: Halo_Rucksack_01
	{
		author="53rd Aux Team";
		displayName="[53rd] Infantry Rucksack (Base / Heavy)";
 		scope=1;
		scopeArsenal=1;
		maximumLoad=250;
		mass=20;
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Urban.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};

	class 53rd_Backpacks_Radio_Rucksack_Base: Halo_Rucksack_01
	{
		author="53rd Aux Team";
		displayName="[53rd] Infantry Rucksack (Base)";
 		scope=1;
		scopeArsenal=1;
		maximumLoad=200;
		mass=20;
		model="\Halo_marine_02\Backpacks\Rucksack";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Urban.paa"
		};
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};



////////////////////////// Rucksack ///////////////////////////////

	class 53rd_Backpacks_Rucksack_Urban: 53rd_Backpacks_Rucksack_Base
	{
		displayName="[53rd] Infantry Rucksack (Urban)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Urban.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Woodland: 53rd_Backpacks_Rucksack_Urban
	{
		displayName="[53rd] Infantry Rucksack (Woodland)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Woodland.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Winter: 53rd_Backpacks_Rucksack_Urban
	{
		displayName="[53rd] Infantry Rucksack (Winter)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Winter.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Desert: 53rd_Backpacks_Rucksack_Urban
	{
		displayName="[53rd] Infantry Rucksack (Desert)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Desert.paa"
		};
	};	




////////////////////////// Medic ///////////////////////////////
	class 53rd_Backpacks_Rucksack_Medic_Urban: 53rd_Backpacks_Medic_Rucksack_Base
	{
		displayName="[53rd] Infantry Rucksack (Urban / Medic)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Medic_Urban.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Medic_Woodland: 53rd_Backpacks_Rucksack_Medic_Urban
	{
		displayName="[53rd] Infantry Rucksack (Woodland / Medic)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Medic_Woodland.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Medic_Winter: 53rd_Backpacks_Rucksack_Medic_Urban
	{
		displayName="[53rd] Infantry Rucksack (Winter / Medic)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Medic_Winter.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Medic_Desert: 53rd_Backpacks_Rucksack_Medic_Urban
	{
		displayName="[53rd] Infantry Rucksack (Desert / Medic)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Medic_Desert.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};	



////////////////////////// Heavy ///////////////////////////////
	class 53rd_Backpacks_Rucksack_Heavy_Urban: 53rd_Backpacks_Heavy_Rucksack_Base
	{
		displayName="[53rd] Infantry Rucksack (Urban / Heavy)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Urban.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Heavy_Woodland: 53rd_Backpacks_Rucksack_Heavy_Urban
	{
		displayName="[53rd] Infantry Rucksack (Woodland / Heavy)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Woodland.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Heavy_Winter: 53rd_Backpacks_Rucksack_Heavy_Urban
	{
		displayName="[53rd] Infantry Rucksack (Winter / Heavy)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Winter.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};	

	class 53rd_Backpacks_Rucksack_Heavy_Desert: 53rd_Backpacks_Rucksack_Heavy_Urban
	{
		displayName="[53rd] Infantry Rucksack (Desert / Heavy)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Desert.paa",
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Pouches.paa"
		};
	};	


////////////////////////// Radio ///////////////////////////////
	class 53rd_Backpacks_LR_Rucksack_Urban: 53rd_Backpacks_Radio_Rucksack_Base
	{
		displayName="[53rd] Infantry Radiopack (Urban)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Urban.paa"
		};
	};	

	class 53rd_Backpacks_LR_Rucksack_Woodland: 53rd_Backpacks_LR_Rucksack_Urban
	{
		displayName="[53rd] Infantry Radiopack (Woodland)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Woodland.paa"
		};
	};	

	class 53rd_Backpacks_LR_Rucksack_Winter: 53rd_Backpacks_LR_Rucksack_Urban
	{
		displayName="[53rd] Infantry Radiopack (Winter)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Winter.paa"
		};
	};	

	class 53rd_Backpacks_LR_Rucksack_Desert: 53rd_Backpacks_LR_Rucksack_Urban
	{
		displayName="[53rd] Infantry Radiopack (Desert)";
 		scope=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Backpacks\53rd_Ruck_Desert.paa"
		};
	};	


//////////////////////// Rucksack 2 ////////////////////////////
////////////////////////// Base ///////////////////////////////


	class 53rd_Backpacks_Rucksack2_Base: Halo_Rucksack_01
	{
		author="53rd Aux Team";

		displayName="[53rd] Atlas Rucksack (Base)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad=200;
		mass=20;
		model="\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"19thVests_Kelp\Backpack\Standard\Main_ca.paa",
			"",
			"",
			""
		};
	};

	class 53rd_Backpacks_Medic_Rucksack2_Base: Halo_Rucksack_01
	{
		author="53rd Aux Team";

		displayName="[53rd] Atlas Medic Rucksack (Medic)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad=250;
		mass=20;
		model="\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"19thVests_Kelp\Backpack\Standard\Main_ca.paa",
			"",
			"19thVests_Kelp\Backpack\Base\Addon_biofoam_ca.paa",
			""
		};
	};

	class 53rd_Backpacks_Heavy_Rucksack2_Base: Halo_Rucksack_01
	{
		author="53rd Aux Team";

		displayName="[53rd] Atlas Rucksack (Heavy)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad=250;
		mass=20;
		model="\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"19thVests_Kelp\Backpack\Standard\Main_ca.paa",
			"19thVests_Kelp\Backpack\Standard\Addon_Pouch_ca.paa",
			"19thVests_Kelp\Backpack\Base\Addon_biofoam_ca.paa",
			""
		};
	};

	class 53rd_Backpacks_Radio_Rucksack2_Base: Halo_Rucksack_01
	{
		author="53rd Aux Team";

		displayName="[53rd] Atlas Radiopack";
 		scope=2;
		scopeArsenal=2;
		maximumLoad=200;
		mass=20;
		model="\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"19thVests_Kelp\Backpack\Standard\Main_ca.paa",
			"",
			"",
			"19thVests_Kelp\Backpack\Base\Addon_antenna_ca.paa"
		};
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};



//////////////////////// Rucksack 2 ////////////////////////////
////////////////////////// Base ///////////////////////////////


	class 53rd_Backpacks_Rucksack3_Engineer: Halo_Rucksack_01
	{
		author="53rd Aux Team";

		displayName="[53rd] Engineer Rucksack B (Toolkit)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad=300;
		mass=20;
		model= "\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Backpacks\53rd_Helios_Backpack.paa",
			"",
			"",
			""
		};
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;

	};

	class 53rd_Backpacks_Heavy_Rucksack2_UAV: Halo_Rucksack_01
	{
		author="53rd Aux Team";

		displayName="[53rd] Engineer Rucksack B (UAV)";
 		scope=2;
		scopeArsenal=2;
		maximumLoad=400;
		mass=20;
		model= "\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Apollo\Backpacks\53rd_Helios_Backpack_UAV.paa",
			"19thVests_Kelp\Backpack\Standard\Addon_Pouch_ca.paa",
			"",
			""
		};
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};



//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

	class NSM_neutral_XD_1_backpack;
	class 53rd_Atlas_Jumpack_Base : NSM_neutral_XD_1_backpack
    {
		displayName = "[53rd] Series 8 SOLA";
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_range = 1;
		tf_hasLRradio = 0;
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 210;
		NSM_jumppack_recharge = .5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv53rdart.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = 
		{
			{"High Jump",{5,15,40,0,0,0}},
			{"Landing/Adjust Flare",{5,10,10,0,1,1}},
			{"Long Jump",{15,10,25,0,1,1}}
		};
			
		maximumload = 250;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {""};
    };

	class Series_8LR_Jumpack : 53rd_Atlas_Jumpack_Base
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] Series 8 SOLA-LR";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_range = 120000;
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 210;
		NSM_jumppack_recharge = .5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv53rdart.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = 
		{
			{"High Jump",{5,15,40,0,0,0}},
			{"Landing/Adjust Flare",{5,10,10,0,1,1}},
			{"Long Jump",{15,10,25,0,1,1}}
		};
		maximumload = 250;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {""};
    };
	class Series_8LR_Jumpack_M : 53rd_Atlas_Jumpack_Base
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] Series 8LR SOLA-M";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_range = 120000;
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 210;
		NSM_jumppack_recharge = .5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv53rdart.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = 
		{
			{"High Jump",{5,15,40,0,0,0}},
			{"Landing/Adjust Flare",{5,10,10,0,1,1}},
			{"Long Jump",{15,10,25,0,1,1}}
		};
		maximumload = 300;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {""};
    };


	class B_Parachute;
	class 53rd_LR_Parachute: B_Parachute
	{
		author="53rd Aux";
		scope=2;
		displayName="[53rd] Parachute (LR)";
		maximumLoad=50;
		mass=1;
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
		backpackSimulation="ParachuteSteerable";
		ParachuteClass="Steerable_Parachute_F";
        ace_reserveParachute = "53rd_LR_Parachute";
        ace_hasReserveParachute = 1;
	};



};
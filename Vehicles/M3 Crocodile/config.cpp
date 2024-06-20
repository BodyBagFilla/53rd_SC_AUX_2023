class CfgPatches {
	class 53rd_Crocodile{
		units[] = {"53rd_Crocodile_APC","53rd_Crocodile_IFV","53rd_Crocodile_AA","53rd_Coyote_RV"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class DMNS_M511_Springbok_base;
	class DMNS_M511_Springbok_APC:DMNS_M511_Springbok_base
	{};
	class DMNS_M511_Springbok_IFV:DMNS_M511_Springbok_base
	{};
	class DMNS_M511_Springbok_MGS:DMNS_M511_Springbok_base
	{};
	class DMNS_M511_Springbok_AA:DMNS_M511_Springbok_base
	{};
	class 53rd_Crocodile_APC : DMNS_M511_Springbok_APC
	{
		displayName="[53rd] M3 Crocodile APC";
		author="53rd";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportSoldier=15;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_APC";
		crew="53rd_crewman_unit";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"clan",
			"clan_text",
			"insignia",
			"_Ammobox",
			"_Axe",
			"_Cans",
			"_FireExtinguisher",
			"_Shovel"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_M511_Body.paa",
			"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
			"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_Apollo_Details_co.paa"
		};
		class textureSources
		{
			class Gray
			{
				displayName="Gray";
				author="DemonicOnPc";
				textures[]=
				{
				"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_M511_Body.paa",
				"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
				"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_Apollo_Details_co.paa"
				};
			};
		};
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_Hardbox_Resupply
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };

	};
	class 53rd_Crocodile_IFV : DMNS_M511_Springbok_IFV
	{
		displayName="[53rd] M3 Crocodile IFV";
		author="53rd";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportSoldier=15;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_APC";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.64999998;
		tf_range=10000;
		crew="53rd_crewman_unit";
		TFAR_hasIntercom=1;
		waterResistanceCoef=0.050000001;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"clan",
			"clan_text",
			"insignia",
			"_Ammobox",
			"_Axe",
			"_Cans",
			"_FireExtinguisher",
			"_Shovel"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_M511_Body.paa",
			"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
			"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_Apollo_Details_co.paa"
		};
		class textureSources
		{
			class Gray
			{
				displayName="Gray";
				author="DemonicOnPc";
				textures[]=
				{
				"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_M511_Body.paa",
				"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
				"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_Apollo_Details_co.paa"
				};
			};
		};
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_Hardbox_Resupply
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Crocodile_AA : DMNS_M511_Springbok_AA
	{
		displayName="[53rd] M3 Crocodile AA";
		author="53rd";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportSoldier=15;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_APC";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.64999998;
		tf_range=10000;
		crew="53rd_crewman_unit";
		TFAR_hasIntercom=1;
		waterResistanceCoef=0.050000001;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"clan",
			"clan_text",
			"insignia",
			"_Ammobox",
			"_Axe",
			"_Cans",
			"_FireExtinguisher",
			"_Shovel"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_M511_Body.paa",
			"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
			"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_Apollo_Details_co.paa"
		};
		class textureSources
		{
			class Gray
			{
				displayName="Gray";
				author="DemonicOnPc";
				textures[]=
				{
				"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_M511_Body.paa",
				"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
				"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_Apollo_Details_co.paa"
				};
			};
		};
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_Hardbox_Resupply
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Coyote_RV : DMNS_M511_Springbok_APC
	{
		displayName="[53rd] M4 Coyote CRV";
		author="53rd";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportSoldier=15;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_APC";
		crew="53rd_crewman_unit";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"clan",
			"clan_text",
			"insignia",
			"_Ammobox",
			"_Axe",
			"_Cans",
			"_FireExtinguisher",
			"_Shovel"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_M511_Body.paa",
			"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
			"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_Apollo_Details_co.paa"
		};
		class textureSources
		{
			class Gray
			{
				displayName="Gray";
				author="DemonicOnPc";
				textures[]=
				{
				"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_M511_Body.paa",
				"DMNS\DMNS_Armour\M511_Springbok\Data\M511_Interior_co.paa",
				"53rd_SC_aux\Vehicles\M3 Crocodile\53rd_Apollo_Details_co.paa"
				};
			};
		};
		supplyRadius=2;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply=1200;
        ace_refuel_fuelCargo=1000;
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 8;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_Hardbox_Resupply
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };

	};
};
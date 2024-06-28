class CfgPatches {
    class 53rd_Bulldog {
        units[] = {
            "53rd_Bulldog_RV",
            "53rd_Bulldog_Panzer",
            "53rd_Bulldog_MG"
        };
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {};
    };
};

class CfgVehicles 
{
    class DMNS_Bulldog_FAV;
    class DMNS_Bulldog_LRV_MG;
    class DMNS_Bulldog_LRV_AGL;

    class 53rd_Bulldog_RV: DMNS_Bulldog_FAV
	{
        displayName = "[53rd] Bulldog (Repair)";
        author = "Fixer";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "53rd_faction";
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Motor";
        crew = "53rd_crewman_unit";
        typicalCargo[] = {"53rd_crewman_unit"};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
		{
            "\53rd_Aux\Generality\Vehicles\Bulldog\53rd_Veh_Bulldog_RV_Hull.paa"
        };
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        ace_refuel_fuelCargo = 1000;
        class TransportBackpacks {};
        class TransportItems 
		{
            class _xx_53rd_Copium {
                name = "53rd_Copium";
                count = 20;
            };
            class _xx_ITC_Land_B_AR2i_Packed {
                name = "ITC_Land_B_AR2i_Packed";
                count = 2;
            };
            class _xx_OPTRE_Biofoam {
                name = "OPTRE_Biofoam";
                count = 20;
            };
            class _xx_ChemicalDetector_01_watch_F {
                name = "ChemicalDetector_01_watch_F";
                count = 2;
            };
            class _xx_ACE_Chemlight_IR {
                name = "ACE_Chemlight_IR";
                count = 10;
            };
            class _xx_ACE_EntrenchingTool {
                name = "ACE_EntrenchingTool";
                count = 2;
            };
            class _xx_ACE_Fortify {
                name = "ACE_Fortify";
                count = 2;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 2;
            };
            class _xx_ACE_UAVBattery {
                name = "ACE_UAVBattery";
                count = 2;
            };
            class _xx_B_UavTerminal {
                name = "B_UavTerminal";
                count = 2;
            };
            class _xx_ACE_DefusalKit {
                name = "ACE_DefusalKit";
                count = 2;
            };
            class _xx_53rd_anprc152l {
                name = "53rd_anprc152l";
                count = 2;
            };
        };
        class TransportMagazines 
		{
            class _xx_APERSMineDispenser_Mag {
                magazine = "APERSMineDispenser_Mag";
                count = 3;
            };
            class _xx_C7_Remote_Mag {
                magazine = "C7_Remote_Mag";
                count = 5;
            };
            class _xx_C12_Remote_Mag {
                magazine = "C12_Remote_Mag";
                count = 2;
            };
        };
        class TransportWeapons {};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo 
		{
            class Cargo {
                class 53rd_SupplyPod_Medical {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
                class 53rd_Weapon_Resupply {
                    type = "53rd_Weapon_Resupply";
                    amount = 1;
                };
            };
        };
    };

    class 53rd_Bulldog_MG: DMNS_Bulldog_LRV_MG {
        displayName = "[53rd] Bulldog (HMG)";
        author = "Fixer";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "53rd_faction";
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Motor";
        crew = "53rd_crewman_unit";
        typicalCargo[] = {"53rd_crewman_unit"};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
		{
            "\53rd_Aux\Generality\Vehicles\Bulldog\53rd_Veh_Bulldog_Hull.paa"
        };
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        ace_refuel_fuelCargo = 1000;
        class TransportBackpacks {};
        class TransportItems 
		{
            class _xx_53rd_Copium {
                name = "53rd_Copium";
                count = 20;
            };
            class _xx_ITC_Land_B_AR2i_Packed {
                name = "ITC_Land_B_AR2i_Packed";
                count = 2;
            };
            class _xx_OPTRE_Biofoam {
                name = "OPTRE_Biofoam";
                count = 20;
            };
            class _xx_ChemicalDetector_01_watch_F {
                name = "ChemicalDetector_01_watch_F";
                count = 2;
            };
            class _xx_Chemlight_blue {
                name = "Chemlight_blue";
                count = 10;
            };
            class _xx_ACE_Chemlight_HiBlue {
                name = "ACE_Chemlight_HiBlue";
                count = 10;
            };
            class _xx_ACE_Chemlight_HiWhite {
                name = "ACE_Chemlight_HiWhite";
                count = 2;
            };
            class _xx_ACE_Chemlight_IR {
                name = "ACE_Chemlight_IR";
                count = 2;
            };
            class _xx_ACE_EntrenchingTool {
                name = "ACE_EntrenchingTool";
                count = 2;
            };
            class _xx_ACE_Fortify {
                name = "ACE_Fortify";
                count = 2;
            };
            class _xx_OPTRE_Smartfinder {
                name = "OPTRE_Smartfinder";
                count = 2;
            };
            class _xx_OPTRE_M8_Flare_Blue {
                name = "OPTRE_M8_Flare_Blue";
                count = 10;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 2;
            };
            class _xx_ACE_UAVBattery {
                name = "ACE_UAVBattery";
                count = 2;
            };
            class _xx_B_UavTerminal {
                name = "B_UavTerminal";
                count = 2;
            };
            class _xx_ACE_DefusalKit {
                name = "ACE_DefusalKit";
                count = 2;
            };
            class _xx_53rd_anprc152l {
                name = "53rd_anprc152l";
                count = 2;
            };
        };
        class TransportMagazines 
		{
            class _xx_DMNS_400Rnd_762x51_Mag_Tracer {
                magazine = "DMNS_400Rnd_762x51_Mag_Tracer";
                count = 2;
            };
            class _xx_APERSMineDispenser_Mag {
                magazine = "APERSMineDispenser_Mag";
                count = 3;
            };
            class _xx_C7_Remote_Mag {
                magazine = "C7_Remote_Mag";
                count = 5;
            };
            class _xx_C12_Remote_Mag {
                magazine = "C12_Remote_Mag";
                count = 2;
            };
        };
        class TransportWeapons {};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo 
		{
            class Cargo {
                class 53rd_SupplyPod_Medical {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
                class 53rd_Weapon_Resupply {
                    type = "53rd_Weapon_Resupply";
                    amount = 1;
                };
            };
        };
    };

    class 53rd_Bulldog_Panzer: DMNS_Bulldog_LRV_AGL 
	{
        dlc = "53rd";
        displayName = "[53rd] Bulldog (Panzer)";
        author = "Fixer";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "53rd_faction";
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Motor";
        crew = "53rd_crewman_unit";
        typicalCargo[] = {"53rd_crewman_unit"};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            "\53rd_Aux\Generality\Vehicles\Bulldog\53rd_Veh_Bulldog_Panzer_Hull.paa"
        };

        class TransportItems 
		{
            class _xx_ACE_PlasmaIV {
                name = "ACE_PlasmaIV";
                count = 20;
            };
            class _xx_ACE_plasmaIV_500 {
                name = "ACE_plasmaIV_500";
                count = 20;
            };
            class _xx_53rd_Copium {
                name = "53rd_Copium";
                count = 40;
            };
            class _xx_ACE_Tourniquet {
                name = "ACE_Tourniquet";
                count = 20;
            };
            class _xx_ACE_splint {
                name = "ACE_splint";
                count = 20;
            };
            class _xx_53rd_r_biofoam {
                name = "53rd_r_biofoam";
                count = 3;
            };
            class _xx_53rd_r_medigel {
                name = "53rd_r_medigel";
                count = 3;
            };
            class _xx_53rd_biofoam {
                name = "53rd_biofoam";
                count = 50;
            };
            class _xx_ACE_packingBandage {
                name = "ACE_packingBandage";
                count = 40;
            };
            class _xx_ACE_elasticBandage {
                name = "ACE_elasticBandage";
                count = 40;
            };
            class _xx_ACE_epinephrine {
                name = "ACE_epinephrine";
                count = 10;
            };
            class _xx_ACE_adenosine {
                name = "ACE_adenosine";
                count = 10;
            };
            class _xx_ACE_surgicalKit {
                name = "ACE_surgicalKit";
                count = 2;
            };
        };
        class TransportMagazines {};
        class TransportWeapons {};
        ace_medical_isMedicalVehicle = 1;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo {
            class Cargo {
                class 53rd_SupplyPod_Medical {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
    };
};

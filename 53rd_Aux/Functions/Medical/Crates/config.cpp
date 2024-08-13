class CfgPatches {
    class 53rd_MedicalCrates {
        units[] = {
            "53rd_Hardbox_Medical"
        };
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {};
    };
};

class CfgVehicles {
    // Cargo Boxes
    class Box_NATO_Support_F;
    class 53rd_Hardbox_Medical: Box_NATO_Support_F {
        editorCategory = "53rd_cat_faction";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "53rd aux";
        displayName = "[53rd] Medical Hardbox";
        model = "\OPTRE_Buildings\Containers\optre_milcrate_h2smallcrate_medic";
        maximumLoad = 1500;
        class TransportBackpacks {
            class _xx_OPTRE_UNSC_Rucksack_MedicLR_53rd {
                backpack = "OPTRE_UNSC_Rucksack_MedicLR_53rd";
                count = 2;
            };
        };
        class TransportItems {
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
            class _xx_ACE_packingBandage {
                name = "ACE_packingBandage";
                count = 50;
            };
            class _xx_ACE_elasticBandage {
                name = "ACE_elasticBandage";
                count = 50;
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
            class _xx_kat_IV_16 {
                name = "kat_IV_16";
                count = 30;
            };
            class _xx_kat_AWD {
                name = "kat_AWD";
                count = 3;
            };
            class _xx_kat_EACA {
                name = "kat_EACA";
                count = 50;
            };
            class _xx_kat_IO_FAST {
                name = "kat_IO_FAST";
                count = 40;
            };
            class _xx_kat_naloxone {
                name = "kat_naloxone";
                count = 40;
            };
            class _xx_kat_norepinephrine {
                name = "kat_norepinephrine";
                count = 10;
            };
            class _xx_kat_TXA {
                name = "kat_TXA";
                count = 10;
            };
            class _xx_Laserbatteries {
                name = "Laserbatteries";
                count = 2;
            };
            class _xx_kat_X_AED {
                name = "kat_X_AED";
                count = 2;
            };
            class _xx_kat_lorazepam {
                name = "kat_lorazepam";
                count = 10;
            };
            class _xx_kat_phenylephrine {
                name = "kat_phenylephrine";
                count = 2;
            };
            class _xx_SmokeShellPurple {
                name = "SmokeShellPurple";
                count = 2;
            };
            class _xx_tf_anprc152 {
                name = "tf_anprc152";
                count = 8;
            };
        };
        class TransportMagazines {};
        class TransportWeapons {};
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
    };
};

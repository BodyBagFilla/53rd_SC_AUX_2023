class CfgPatches {
    class 53rd_Aqua_Recon
    {
            units[] = 
            {

            };
            weapons[] = 
            {
            "53rd_Base_Recon",
            "53rd_Aqua_Recon",
            };
            requiredVersion = 0.100000;
            requiredAddons[] = {};
    };
};
class cfgWeapons
{
    class ItemCore;
    class ItemInfo;
    class OPTRE_UNSC_CH252D_Helmet_Base: ItemCore
    {
     class ItemInfo;
    };

    class 53rd_Base_Recon: OPTRE_UNSC_CH252D_Helmet_Base
    {
        dlc = "OPTRE";
        scope = 1;
        scopeArsenal = 1;
        author = "Article 2 Studios & Gamma";
        picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
        model = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
        displayName = "[53rd] ReconTest";
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\Pilot_Helmet_co.paa","OPTRE_UNSC_Units\Army\data\Pilot_Visor_co.paa"};
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
            mass = 40;
            modelSides[] = {6};
            passThrough = 0.1;
            hiddenSelections[] = {"camo","camo2","H_Ghillie"};
            hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
        class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=38;
                    passThrough=0.1;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=38;
                    passThrough=0.1;
                };
                class Neck
                {
                    hitpointName="HitNeck";
                    armor=38;
                    passThrough=0.1;
                };
            };
        };
    };

    /////HELMETS/////

    //Test    
    class 53rd_Aqua_Recon: 53rd_Base_Recon 
    {
        author="53rd Texture Team";
        scope=2;
        scopeArsenal=2;
        side=1;
        displayName="[53rd] Aqyrys (Custom)";
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
            "53rd_Ares\Ares_Camo\Customs\53rd_Aqyrys_Recon_Helmet.paa",
            "53rd_Ares\Ares_Camo\Customs\Recon_Visor_co.paa"
        };
    };
};





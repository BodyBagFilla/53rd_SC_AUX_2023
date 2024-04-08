class CfgPatches 
{
class 53rd_Heph_Armors 
{
    units[] = 
    {
        ""
    };
    weapons[] = 
    {

        "53rd_InvisVest",
        ///Helms///
        //WINTER//
        "53rd_Rifleman_Helmet_Winter_No_Visor",
        "53rd_Rifleman_Helmet_Winter_Visor",
        "53rd_1_1_Rifleman_Helmet_Winter_NVisor",
        "53rd_1_1_Rifleman_Helmet_Winter_Visor",
        "53rd_1_1_Medic_Helmet_Winter_NVisor",
        "53rd_1_1_Medic_Helmet_Winter_Visor",
        "53rd_1_2_Rifleman_Helmet_Winter_NVisor",
        "53rd_1_2_Rifleman_Helmet_Winter_Visor",
        "53rd_1_2_Medic_Helmet_Winter_NVisor",
        "53rd_1_2_Medic_Helmet_Winter_Visor",
        "53rd_1_3_Rifleman_Helmet_Winter_NVisor",
        "53rd_1_3_Rifleman_Helmet_Winter_Visor",
        "53rd_1_3_Medic_Helmet_Winter_NVisor",
        "53rd_1_3_Medic_Helmet_Winter_Visor",
        //DESERT//
        "53rd_Rifleman_Helmet_Desert_No_Visor",
        "53rd_Rifleman_Helmet_Desert_Visor",
        "53rd_1_1_Rifleman_Helmet_Desert_NVisor",
        "53rd_1_1_Rifleman_Helmet_Desert_Visor",
        "53rd_1_1_Medic_Helmet_Desert_NVisor",
        "53rd_1_1_Medic_Helmet_Desert_Visor",
        "53rd_1_2_Rifleman_Helmet_Desert_NVisor",
        "53rd_1_2_Rifleman_Helmet_Desert_Visor",
        "53rd_1_2_Medic_Helmet_Desert_NVisor",
        "53rd_1_2_Medic_Helmet_Desert_Visor",
        "53rd_1_3_Rifleman_Helmet_Desert_NVisor",
        "53rd_1_3_Rifleman_Helmet_Desert_Visor",
        "53rd_1_3_Medic_Helmet_Desert_NVisor",
        "53rd_1_3_Medic_Helmet_Desert_Visor",
        //URBAN//
        "53rd_Rifleman_Helmet_Urban_No_Visor",
        "53rd_Rifleman_Helmet_Urban_Visor",
        "53rd_1_1_Rifleman_Helmet_Urban_NVisor",
        "53rd_1_1_Rifleman_Helmet_Urban_Visor",
        "53rd_1_1_Medic_Helmet_Urban_NVisor",
        "53rd_1_1_Medic_Helmet_Urban_Visor",
        "53rd_1_2_Rifleman_Helmet_Urban_NVisor",
        "53rd_1_2_Rifleman_Helmet_Urban_Visor",
        "53rd_1_2_Medic_Helmet_Urban_NVisor",
        "53rd_1_2_Medic_Helmet_Urban_Visor",
        "53rd_1_3_Rifleman_Helmet_Urban_NVisor",
        "53rd_1_3_Rifleman_Helmet_Urban_Visor",
        "53rd_1_3_Medic_Helmet_Urban_NVisor",
        "53rd_1_3_Medic_Helmet_Urban_Visor",
        //WOODLAND//
        "53rd_Rifleman_Helmet_Woodland_No_Visor",
        "53rd_Rifleman_Helmet_Woodland_Visor",
        "53rd_1_1_Rifleman_Helmet_Woodland_NVisor",
        "53rd_1_1_Rifleman_Helmet_Woodland_Visor",
        "53rd_1_1_Medic_Helmet_Woodland_NVisor",
        "53rd_1_1_Medic_Helmet_Woodland_Visor",
        "53rd_1_2_Rifleman_Helmet_Woodland_NVisor",
        "53rd_1_2_Rifleman_Helmet_Woodland_Visor",
        "53rd_1_2_Medic_Helmet_Woodland_NVisor",
        "53rd_1_2_Medic_Helmet_Woodland_Visor",
        "53rd_1_3_Rifleman_Helmet_Woodland_NVisor",
        "53rd_1_3_Rifleman_Helmet_Woodland_Visor",
        "53rd_1_3_Medic_Helmet_Woodland_NVisor",
        "53rd_1_3_Medic_Helmet_Woodland_Visor",
        ///////////////////////////////////////
        //Armor//
        //Rifleman//
        "53rd_Rifleman_SN",
        "53rd_Rifleman_WD",
        "53rd_Rifleman_UB",
        "53rd_Rifleman_DS",
        //Medic//
        "53rd_Uniform_Medic_SN",
        "53rd_Uniform_Medic_WD",
        "53rd_Uniform_Medic_UB",
        "53rd_Uniform_Medic_DS",
        //Anti-tank//
        "53rd_Uniform_AT_SN",
        "53rd_Uniform_AT_WD",
        "53rd_Uniform_AT_UB",
        "53rd_Uniform_AT_DS",
        //AutoRifle//
        "53rd_Uniform_AR_SN",
        "53rd_Uniform_AR_WD",
        "53rd_Uniform_AR_UB",
        "53rd_Uniform_AR_DS",
        //Grenadier//
        "53rd_Uniform_GL_SN",
        "53rd_Uniform_GL_WD",
        "53rd_Uniform_GL_UB",
        "53rd_Uniform_GL_DS",
        //JTAC//
        "53rd_Uniform_JTAC_SN",
        "53rd_Uniform_JTAC_WD",
        "53rd_Uniform_JTAC_UB",
        "53rd_Uniform_JTAC_DS",
    };
    requiredVersion = 0.100000;
    requiredAddons[] = {};
}
}
#include "../xtdGear.hpp"
class cfgWeapons 
{
    class ItemCore;
    class ItemInfo;
    class HeadgearItem;
    class MA_TGE_InvisVest
    {
        class Iteminfo;
    };
    class 53rd_InvisVest: MA_TGE_InvisVest
    {
        author="Scarecrow";
        scope=2;
        scopeArsenal=2;
        side=1;
        displayName="[53rd] Invisible Vest";
        picture="\53rd_sc_aux\tex\Arsenal\53rd.paa";
        model="\Halo_marine_02\null.p3d";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Armor\Invis Vest\Vest\null_CA.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="\Halo_marine_02\null.p3d";
            vestType = "Rebreather";
            containerClass="Supply100";
            mass=80;
            class HitpointsProtectionInfo
            {
               class Neck
				{
					hitpointName="HitNeck";
					armor=50;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=50;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=50;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=50;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=50;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=50;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=50;
					passThrough=0.1;
				};
            };
        };
    };


    /////Helmets/////

    class HaloInf_Marine_WDL_headgear: ItemCore
    {
        class ItemInfo;
    };
    class HaloInf_Marine_WDL_NV_headgear: ItemCore
    {
        class ItemInfo;
    };
    class 53rd_Base_headgear: HaloInf_Marine_WDL_headgear
    {
        scope=1;
        scopeArsenal=1;
        side=1;
        displayName="[53rd] Base CH252";
        hiddenSelections[]=
        {
            "Camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
        };
        class ItemInfo: ItemInfo
        {
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
    class 53rd_Base_NV_headgear: HaloInf_Marine_WDL_NV_headgear
    {
        scope=1;
        scopeArsenal=1;
        side=1;
        displayName="[53rd] Base CH252 Visor ";
        picture="\53rd_sc_aux\tex\Arsenal\53rd.paa";
        model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
        hiddenSelections[]=
        {
            "Camo1",
            "_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            mass=10;
            uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
            allowedSlots[]={801,901,701,605};
            modelSides[]={6};
            hiddenSelections[]=
            {
                "Camo1",
                "_Visor"
            };
            hiddenSelectionsTextures[]=
            {
                "Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
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

    #include "Rifleman\ReservistHelms.hpp"
    #include "1-1 Helmets\1-1Helms.hpp"
    #include "1-2 Helmets\1-2Helms.hpp"
    #include "1-3 Helmets\1-3Helms.hpp"
    #include "Sealed Helmets\sealedHelms.hpp"

    //Armor Weaps//
    class UniformItem;
    class Uniform_Base: ItemCore
    {
        class ItemInfo;
    };
    class haloinfmar_U_WDL_uniform: Uniform_Base
    {
        class HitPoints;
        class ItemInfo;
    };
    class 53rd_U_Base_uniform_W: haloinfmar_U_WDL_uniform
    {
        scope=1;
        scopeArsenal=1;
        side=1;
        displayName = "[53rd] Rifleman Base";
        class ItemInfo: UniformItem
        {
            uniformType = "Neopren";
            uniformModel="-";
            uniformClass="53rd_U_Base_uniform_V";
            containerClass="Supply100";
            mass=80;
        };
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
            "53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
            "53rd_SC_aux\Armor\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
        };
    };

    #include "ArmorWeap.hpp"

}

class CfgVehicles
{
    class B_Soldier_base_F;
    class haloinf_Marine_Soldier_base_F: B_Soldier_base_F{};
    class HaloInf_Marine_WDL_F: haloinf_Marine_Soldier_base_F
    {
    class UniformItem;
    };
    class 53rd_U_Base_uniform_V: HaloInf_Marine_WDL_F
    {
        scope=1;
        scopeArsenal=1;
        side=1;
        displayName="[53rd] Base Uniform";
        class ItemInfo: UniformItem
        {
            uniformType = "Neopren";
            uniformModel="-";
            uniformClass="53rd_U_Base_uniform_W";
            containerClass="Supply100";
            mass=80;
        };
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
            "53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
            "53rd_SC_aux\Armor\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
        };
    };

    #include "ArmorVeh.hpp"

};
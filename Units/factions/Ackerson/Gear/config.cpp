class CfgPatches {
	class Arkerson_Gear {
		units[] = 
        {
            "WIP"
        };
		weapons[] = 
        {
            "WIP"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class UniformItem;
	class OPTRE_UNSC_CH252A_Helmet;
//Uniform
	class OPTRE_FC_Marines_Uniform;
	class 53rd_Ackerson_Uniform: OPTRE_FC_Marines_Uniform
	{
		author="Sgt. Body";
		scope=2;
		side=2;
		displayName="'Ackerson - Marine BDU";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="53rd_Ackerson_Base";
			containerClass="Supply80";
			mass=1;
			
		};
	};
//Vests// Base Class
class OPTRE_FC_M52B_Armor_Vest;
class 53rd_Rebel_Armor: OPTRE_FC_M52B_Armor_Vest
	{
		dlc="OPTRE";
		scope=2;
		author="Sgt. Body";
		displayName="Ackerson's - Rebel Vest";
		model="\OPTRE_FC_Units\Marines\h3_vest.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\Akerson_vest_co.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			//"attach_arms",
			"A_Ghillie",
			//"AP_AR",
			"AP_BR",
			//"AB_Canteen",
			"AP_Frag",
			"AP_GL",
			//"AP_Knife",
			"AP_Pack",
			"AP_Pistol",
			"AP_SG",
			"AP_SMG",
			//"AP_Smoke",
			//"AP_Sniper"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_FC_Units\Marines\h3_vest.p3d";
			containerClass="Supply160";
			mass=20;
			passThrough=0.15000001;
			modelSides[]={6};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Factions\Akerson_vest_co.paa"
			};
			hiddenSelections[]=
			{
				"camo1",
				//"attach_arms",
				"A_Ghillie",
				//"AP_AR",
				"AP_BR",
				//"AB_Canteen",
				"AP_Frag",
				"AP_GL",
				//"AP_Knife",
				"AP_Pack",
				"AP_Pistol",
				"AP_SG",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=20;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=20;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
// Helmets
class OPTRE_FC_CH255_Helmet;
class 53rd_Ackerson_Helmet_SF : OPTRE_UNSC_CH252A_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Ackerson Airborne Helmet";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Units\factions\Ackerson\Gear\53rd_Ackerson_SF_Helmet.paa",
            "53rd_SC_aux\Units\factions\Ackerson\Gear\AA_Helmet_Visor_CO.paa"
        };
    };
	class 53rd_Ackerson_Helmet_SF_DP : OPTRE_UNSC_CH252A_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Rifleman)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Units\factions\Ackerson\Gear\53rd_Ackerson_SF_Helmet.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
class 53rd_Rebel_Helmet: OPTRE_FC_CH255_Helmet
	{
		scope=2;
		author="Sgt. Body";
		displayName="[53rd] Ackerson Helmet";
		model="\OPTRE_FC_Units\Marines\h3_helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"attach_visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\Akersons_helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_FC_Units\Marines\h3_helmet.p3d";
			mass=1;
			modelSides[]={6};
			passThrough=0.15000001;
			hiddenSelections[]=
			{
				"camo",
				"attach_visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Factions\Akersons_helmet_CO.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=18;
					passThrough=0.1;
				};
			};
		};
	};
};
class CfgVehicles{
	class BDU_V_Volare_Black;
	class 53rd_Ackerson_Base: BDU_V_Volare_Black
	{
		author="Body";
		displayName="[53rd] Ackerson's Rebel Uniform";
		scope=1;
		side=2;
		model="\OPTRE_FC_Units\Marines\h3_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2"}; 
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\h3_uniform_urb_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"
		};
		class UniformItem;
		class ItemInfo: UniformItem
		{
			model="\OPTRE_FC_Units\Marines\h3_uniform.p3d";
			uniformClass="53rd_Ackerson_Uniform";
			containerClass="Supply60";
			mass=1;
		};
	};
};
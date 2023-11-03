class CfgPatches {
	class 53rd_Air_Sword {
		units[] = {"53rd_UNSC_Shortsword"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};

class cfgVehicles {	
	class DMNS_Shortsword_01_F;
	class 53rd_UNSC_Shortsword: DMNS_Shortsword_01_F
	{
		dlc="53rd";
		author="Demonic";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		displayName="[53rd] B-62 Shortsword (CAP)";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_FixedWing";
		crew="53rd_Volare_airmen_unit";
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		weapons[]=
			{
				"CMFlareLauncher",
				"missiles_ASRAAM",
				"OPTRE_MISRIAH_Cannon",
				"OPTRE_bomblauncher_2000lb"
			};
			magazines[]=
			{
				"168Rnd_CMFlare_Chaff_Magazine",
				"168Rnd_CMFlare_Chaff_Magazine",
				"OPTRE_2500Rnd_50mm_HE2",
				"OPTRE_2500Rnd_50mm_APFSDS",
				"168Rnd_CMFlare_Chaff_Magazine",
				"4Rnd_AAA_missiles",
				"4Rnd_AAA_missiles",
				"4Rnd_AAA_missiles",
				"4Rnd_AAA_missiles",
				"OPTRE_16Rnd_2000lb_bomb",
			};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		hiddenSelectionsTextures[] = 			// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"dmns\DMNS_Air\b_62_shortsword\data\shortsword_wings_co.paa",
			"dmns\DMNS_Air\b_62_shortsword\data\hull_co.paa",
			"dmns\DMNS_Air\b_62_shortsword\data\cockpit_hull_co.paa",
			"dmns\DMNS_Air\b_62_shortsword\data\tail_co.paa",
			"dmns\DMNS_Air\b_62_shortsword\data\cockpit_ext_co.paa"
		};
	};
};
class CfgPatches {
	class 53rd_Land_IFV {
		units[] = {"53rd_IFV76_A"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class B_APC_Wheeled_01_cannon_F;
	class 53rd_IFV76_A: B_APC_Wheeled_01_cannon_F
	{
		
		displayName="[53rd] AFV-35 Honey-Badger";
		author="Body";
		dlc = "53rd AUX";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_APC";
		armor=720;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.64999998;
		tf_range=10000;
		transportSoldier=15;
		crew="53rd_crewman_unit";
		TFAR_hasIntercom=1;
		waterResistanceCoef=0.050000001;
		class EventHandlers;
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
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};

		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\HoneyBadger\53_Badger_Hull.paa",
			"53rd_SC_aux\Vehicles\HoneyBadger\53_Badger_Wheels.paa",
			"53rd_SC_aux\Vehicles\HoneyBadger\53_Badger_Turret.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};

        ace_cargo_hasCargo = 1;
        ace_cargo_space = 4;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_Hardbox_Resupply_int
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };
	};
};
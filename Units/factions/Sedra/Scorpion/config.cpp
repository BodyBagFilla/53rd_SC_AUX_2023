class CfgPatches {
	class Sedra_Scorpion {
		units[] = {"53rd_M808B_Sedra"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[]={"OPTRE_Core"};
	};
};

class CfgVehicles
{

	class B_MBT_01_cannon_F;
	class DMNS_M808B:B_MBT_01_cannon_F
	{
		class Turrets
		{
			class MainTurret
			{
				class Turrets
				{
					weapons[]=
					{
						"DMNS_90mm_M512",
						"DMNS_M247T_Coax",
						"SmokeLauncher"
					};
					magazines[]=
					{
						"DMNS_64Rnd_90mm_APBC",
						"DMNS_32Rnd_90mm_SAPHE",
						"DMNS_32Rnd_90mm_HEAT",
						"OPTRE_10Rnd_90mm_S1",
						"DMNS_500Rnd_127x99_Mag_Tracer",
						"DMNS_500Rnd_127x99_Mag_Tracer",
						"DMNS_500Rnd_127x99_HE_Mag_Tracer",
						"DMNS_500Rnd_127x99_HE_Mag_Tracer",
						"SmokeLauncherMag"
					};
				};
			};
		};
	};
	class DMNS_M808B_F: DMNS_M808B
	{
	};
	class Sedra_M808B_Base: DMNS_M808B_F
	{
		author="DemonicOnPc & Body";
		scope=2;
		side=2
		scopeArsenal=2;
		scopeCurator=2;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Tank";
		displayName="[Sedra] M808B Scorpion MBT";
		model="\DMNS\DMNS_Armour\M808B_Scorpion\Scoprion_base.p3d";
		picture="\OPTRE_Vehicles_Tracked\Scorpion\data\UI\M808B_MBT_ca.paa";
		icon="\OPTRE_Vehicles_Tracked\Scorpion\data\UI\map_M808B_ca.paa";
		editorPreview="\OPTRE_Vehicles_Tracked\M808B2\data\OPTRE_M808S.jpg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Hull.paa",   
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Turret.paa",
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_FrontTrack.paa",
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_RearTrack.paa", 
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Commander.paa",  
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Details1.paa", 
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Details2.paa",
			"DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Int_co.paa"
		};
		class TextureSources
        {
			class colorsStandard
			{
				displayName="Standard";
				author="DemSedracOnPC";
				textures[]=
				{
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Hull.paa",   
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Turret.paa",
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_FrontTrack.paa",
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_RearTrack.paa", 
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Commander.paa",  
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Details1.paa", 
			"53rd_SC_aux\Units\factions\Sedra\Scorpion\Sedra_Scorpion_Details2.paa",
			"DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Int_co.paa"
				};
			};
        };
        ace_cargo_space = 6;
        ace_cargo_hasCargo = 6;
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_track
                {
                    type = "ACE_track";
                    amount = 4;
                };
            };
        };
    };


};


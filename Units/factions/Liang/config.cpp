class CfgPatches {
	class 53rd_Faction_Liang {
		units[] = {"53rd_Liang_D77_TC_Pelican","53rd_Liang_stallion","53rd_Liang_stallion_Covered","53rd_Liang_stallion_Ammo","53rd_Liang_stallion_Repair","53rd_Liang_stallion_Fuel","Liang_M808B_Base","53rd_Liang_Polaris_MG","53rd_Liang_Polaris_AT","53rd_Liang_Polaris_Unarmed","53rd_Liang_Hornet_AV","53rd_Liang_Hornet_Transport","53rd_Liang_M12A1_LRV","53rd_Liang_M12G1_LRV","53rd_Liang_M12R_AA","53rd_Liang_M12_FAV","53rd_Liang_M12_FAV_APC","53rd_Liang_M12_LRV","53rd_Liang_M813_TT","53rd_Liang_M914_RV","53rd_Liang_falcon","53rd_Liang_falcon_armed"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"Splits_Vehicles"};
	};
};

class CfgVehicles
{
//---------------------------INHERITENCE-------------------------------/
	class EventHandlers;
	class OPTRE_m1087_stallion_cover_unsc;
	class OPTRE_m1087_stallion_unsc;
	class OPTRE_m1087_stallion_unsc_resupply;
	class OPTRE_m1087_stallion_unsc_refuel;
	class OPTRE_m1087_stallion_unsc_repair;
	class OPTRE_UNSC_falcon 
	{ 
		class Components; 
	}; 
	class OPTRE_UNSC_falcon_armed_S 
	{ 
		class Components; 
	};
	class OPTRE_UNSC_hornet;
	class OPTRE_UNSC_hornet_CAP;
	class Components;	
	class OPTRE_M12_FAV;
	class OPTRE_M813_TT;
	class OPTRE_M12_FAV_APC;
	class OPTRE_M12_LRV;
	class OPTRE_M12R_AA;
	class OPTRE_M12G1_LRV;
	class OPTRE_M914_RV;
	class OPTRE_M12A1_LRV;
	class O_T_LSV_02_armed_F;
	class O_T_LSV_02_AT_F;
	class O_T_LSV_02_unarmed_F;
	class I_Heli_Transport_02_F;				
	class I_Heli_light_03_unarmed_F;
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
	class Splits_Pelican_base;
	class Splits_UNSC_D77_TC_Pelican: Splits_Pelican_base 
	{
	class Components;
	};
//-------------------------PELICAN-------------------------------------/
	class 53rd_Liang_D77_TC_Pelican: Splits_UNSC_D77_TC_Pelican
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] D77-TC Pelican";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Pelican\53rd_body_co.paa",
			"53rd_SC_aux\Vehicles\Pelican\53rd_wings_and_gear_co.paa",
			"Splits\Splits_Vehicles\Pelican\data\weaponry_co.paa"
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="53rd - Liang D77";
						author="Body";
						textures[]=
						{
						"53rd_SC_aux\Vehicles\Pelican\53rd_body_co.paa",
						"53rd_SC_aux\Vehicles\Pelican\53rd_wings_and_gear_co.paa",
						"Splits\Splits_Vehicles\Pelican\data\weaponry_co.paa"
						};
					};
				};
				class UserActions
				{
					class PelLift_LoadVehicle
					{
						condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
						displayName="<t color='#00BF00'>Maglock Cargo";
						displayNameDefault="<t color='#00BF00'>Maglock Cargo";
						onlyForPlayer=0;
						position="cargo_door_handle";
						priority=2;
						radius=15;
						showWindow=0;
						statement="0 = [this,vehicle player] spawn F53rd_fnc_PelicanMaglockLoad";
						textToolTip="<t color='#00BF00'>Maglock Cargo";
						userActionID=6;
					};
					class PelLift_UnLoadVehicle
					{
						condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
						displayName="<t color='#DF3A01'>Release Maglock";
						displayNameDefault="<t color='#DF3A01'>Release Maglock";
						onlyForPlayer=0;
						position="cargo_door_handle";
						priority=3;
						radius=5;
						showWindow=0;
						statement="0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
						textToolTip="<t color='#DF3A01'>Release Maglock";
						userActionID=7;
					};
					class PelLift_LoadPodMenu
					{
						userActionID=9;
						displayName="Load Supply Pods";
						displayNameDefault="Load Supply Pods";
						textToolTip="Load Supply Pods";
						position="cargo_door_handle";
						showWindow=0;
						radius=15;
						priority=2;
						onlyForPlayer=0;
						condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
						statement="Splits_pelicanloadSupplyPods_Menu_PelicanObject = this; createDialog ""Splits_pelicanloadSupplyPods_Menu""; Splits_pelicanloadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL Splits_pelicanloadSupplyPods_Menu_PelicanObject;  Splits_pelicanloadSupplyPods_Menu_cam CamSetTarget Splits_pelicanloadSupplyPods_Menu_PelicanObject; Splits_pelicanloadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; Splits_pelicanloadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; Splits_pelicanloadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
					};
					class PelLift_LoadDevice
					{
						condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
						displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
						displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
						onlyForPlayer=0;
						position="cargo_door_handle";
						priority=2;
						radius=4;
						showWindow=0;
						statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
						textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
						userActionID=6;
					};
					class PelLift_OpenDetachPodMenu
					{
						userActionID=8;
						displayName="Detach Individual Supply Pod Menu";
						displayNameDefault="Detach Individual Supply Pod Menu";
						textToolTip="Detach Individual Supply Pod Menu";
						position="cargo_door_handle";
						showWindow=0;
						radius=5;
						priority=3;
						onlyForPlayer=0;
						condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
						statement="0 = this spawn Splits_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
					};
					class RampOpen
					{
						userActionID=50;
						displayName="Close Ramp";
						displayNameDefault="Close Ramp";
						textToolTip="Close Ramp";
						position="cargo_door_handle";
						showWindow=0;
						radius=100000;
						priority=4;
						onlyForPlayer=0;
						condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
						statement="this animate [""cargoDoor_1"",1]";
						animPeriod=5;
					};
					class RampClose: RampOpen
					{
						userActionID=51;
						displayName="Open Ramp";
						displayNameDefault="Open Ramp";
						textToolTip="Open Ramp";
						priority=4;
						condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
						statement="this animate [""cargoDoor_1"",0]";
						animPeriod=5;
					};
					class ThrusterEngage
					{
						userActionID=122;
						displayName="ENGAGE FORWARD THRUSTERS";
						displayNameDefault="ENGAGE FORWARD THRUSTERS";
						textToolTip="ENGAGE FORWARD THRUSTERS";
						position="cargo_door_handle";
						priority=10;
						radius=3;
						onlyForPlayer=0;
						condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
						statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
						animPeriod=4;
					};
					class ThrusterDisengage: ThrusterEngage
					{
						userActionID=123;
						displayName="DISENGAGE FORWARD THRUSTERS";
						displayNameDefault="DISENGAGE FORWARD THRUSTERS";
						textToolTip="DISENGAGE FORWARD THRUSTERS";
						condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
						statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
					};
					class AirbrakeEngage: ThrusterEngage
					{
						userActionID=124;
						displayName="ENGAGE AIRBRAKES";
						displayNameDefault="ENGAGE AIRBRAKES";
						textToolTip="ENGAGE AIRBRAKES";
						condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
						statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
					};
					class ECM_ON
					{
						displayName = "ECM JAMMER ON";
						position = "pos cano";
						radius = 15;
						shortcut = "User2";
						condition = "player in this and isengineon this and (this getvariable 'ECMJAMMER' == 'yes' or 'FIR_ECMPOD' in weapons this)";
						statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
						onlyforplayer = "False";
						hideOnUse = 1;
					};
				};
	};
//-------------------------Trucks-------------------------------------/
	class 53rd_Liang_stallion: OPTRE_m1087_stallion_unsc
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] D77-TC Pelican";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckCargo2.paa",
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="53rd - Dortman D77";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckCargo2.paa",
						};
					};
				};
	};
	class 53rd_Liang_stallion_Covered: OPTRE_m1087_stallion_cover_unsc
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] D77-TC Pelican";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckCargo2.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckCargo2.paa",
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="53rd - Dortman D77";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckCargo.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckCover.paa",

						};
					};
				};
	};
	class 53rd_Liang_stallion_Ammo: OPTRE_m1087_stallion_unsc_resupply
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] D77-TC Pelican";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckAmmo.paa",
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="53rd - Dortman D77";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckAmmo.paa",
						};
					};
				};
	};
	class 53rd_Liang_stallion_Repair: OPTRE_m1087_stallion_unsc_repair
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] D77-TC Pelican";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckCargo2.paa",
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="53rd - Dortman D77";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckCargo2.paa",
						};
					};
				};
	};
	class 53rd_Liang_stallion_Fuel: OPTRE_m1087_stallion_unsc_refuel
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] D77-TC Pelican";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckFuel.paa",
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="53rd - Dortman D77";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Liang\Truck\Liang_TruckFuel.paa",
						};
					};
				};
	};
//-------------------------Scorpion-------------------------------------/
	class Liang_M808B_Base: DMNS_M808B_F
	{
		author="DemonicOnPc & Body";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		displayName="[Liang][L] M808B Scorpion MBT";
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
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Hull.paa",   
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Turret.paa",
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_FrontTrack.paa",
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_RearTrack.paa", 
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Commander.paa",  
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Details1.paa", 
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Details2.paa",
			"DMNS\DMNS_Armour\M808B_Scorpion\data\M808B_Track_Int_co.paa"
		};
		class TextureSources
        {
			class colorsStandard
			{
				displayName="Standard";
				author="DemonicOnPC";
				textures[]=
				{
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Hull.paa",   
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Turret.paa",
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_FrontTrack.paa",
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_RearTrack.paa", 
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Commander.paa",  
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Details1.paa", 
			"53rd_SC_aux\Units\factions\Liang\Scorpion\Liang_Scorpion_Details2.paa",
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

//-------------------------Polaris-------------------------------------/
	class 53rd_Liang_Polaris_MG: O_T_LSV_02_armed_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] Growler MG";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisDet.paa",
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="Liang Stanard";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisDet.paa",
						};
					};
				};
	};
	class 53rd_Liang_Polaris_AT: O_T_LSV_02_AT_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] Growler AT";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisDet.paa",
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="Liang Stanard";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisDet.paa",
						};
					};
				};
	};
	class 53rd_Liang_Polaris_Unarmed: O_T_LSV_02_unarmed_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		crew="53rd_Volare_airmen_unit";
		displayName="[Liang] Growler Transport";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisDet.paa",
		};
		tf_range=25000;		
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
				class textureSources
				{
					class Standard
					{
						displayName="Liang Stanard";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Liang\Polaris\Liang_PolarisDet.paa",
						};
					};
				};
	};
//-------------------------Hornet-------------------------------------/
    class 53rd_Liang_Hornet_Transport: OPTRE_UNSC_hornet
    {
        dlc="53rd";
        author="Skywalker";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        forceInGarage=1;
        displayName="[Liang] AV-14";
        editorPreview="53rd_SC_aux\Vehicles\Hornet\Hornet-HQ.jpg";
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Rotary";
        crew="53rd_Volare_airmen_unit";
        mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Units\factions\Liang\Hornet\Liang_Hornet_Hull.paa"
        };
		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_GUA23A",
			"OPTRE_missiles_C2GMLS",
            "missiles_ASRAAM"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_8Rnd_C2GMLS_missiles",
            "4Rnd_AAA_missiles"
		};
		class UserActions
		{
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID=58;
			};
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
			class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
		};
	};
	class 53rd_Liang_Hornet_AV: OPTRE_UNSC_hornet_CAP
    {
        dlc="53rd";
        author="Skywalker";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        forceInGarage=1;
        displayName="[Liang] AV-14 (CAP)";
        editorPreview="53rd_SC_aux\Vehicles\Hornet\Hornet-HQ.jpg";
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Rotary";
        crew="53rd_Volare_airmen_unit";
        mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Units\factions\Liang\Hornet\Liang_Hornet_Hull.paa"
        };
		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_GUA23A",
			"OPTRE_missiles_C2GMLS",
            "missiles_ASRAAM"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_8Rnd_C2GMLS_missiles",
            "4Rnd_AAA_missiles"
		};
		class UserActions
		{
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID=58;
			};
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
			class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
		};
	};
//-------------------------Hog-------------------------------------/
	class 53rd_Liang_M12_FAV_APC: OPTRE_M12_FAV_APC
	{
		displayName="[Liang] M12 APC Warthog";
		author="Six";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_APCTop_A1.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_APCBay_A1.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\LiangDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_Liang_M813_TT: OPTRE_M813_TT
	{
		dlc = "53rd";
		displayName="[Liang] M813 Transport Warthog";
		author="Six";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_APCTop_A1.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\LiangDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_Liang_M12A1_LRV: OPTRE_M12A1_LRV
	{
		dlc = "53rd";
		displayName="[Liang] M12A1 AT Warthog";
		author="Six";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Turret.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\LiangDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_Liang_M12_FAV: OPTRE_M12_FAV
	{
		dlc = "53rd";
		displayName="[Liang] M12 Recon Warthog";
		author="Six";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\LiangDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_Liang_M12_LRV: OPTRE_M12_LRV
	{
		dlc = "53rd";
		displayName="[Liang] M12 LAAG Warthog";
		author="Six";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Turret.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\LiangDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_Liang_M12G1_LRV: OPTRE_M12G1_LRV
	{
		dlc = "53rd";
		displayName="[Liang] M12G1 Gauss Warthog";
		author="Six";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12HogMaav_53rd_wood_co.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa",
			"53rd_SC_aux\tex\Hogs\m68_turret_Grey_co.paa",
			"53rd_SC_aux\tex\Hogs\m12_turret_grey_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
		};
	};
	class 53rd_Liang_M12R_AA: OPTRE_M12R_AA
	{
		dlc = "53rd";
		displayName="[Liang] M12 AA Warthog";
		author="Six";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_AATurret.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\LiangDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_Liang_M914_RV: OPTRE_M914_RV
	{
		dlc = "53rd";
		displayName="[Liang] M914 RV Warthog";
		author="Six";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\Liang_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Liang\Hog\LiangDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;     
	};
//-------------------------Falcon-------------------------------------/
	class 53rd_Liang_falcon: OPTRE_UNSC_falcon
	{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[Liang] UH-144 Jay  (Unarmed)";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_Rotary";
			crew="53rd_Volare_airmen_unit";
			tf_range=25000;
			tf_isolatedAmount=0.40000001;
			tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio=1;
			enableRadio=1;
			weapons[]=
			{
				"OPTRE_M638",
				"CMFlareLauncher",
				"Laserdesignator_pilotCamera"
			};
			magazines[]=
			{
				"OPTRE_2000Rnd_20mm_HE",
				"OPTRE_2000Rnd_20mm_HE",
				"168Rnd_CMFlare_Chaff_Magazine",
				"Laserbatteries"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Hull.paa",
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Wings.paa",
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Interior.paa",
			};
			class textureSources
			{
				class Standard
				{
					displayName="Grey";
					author="Body";
					textures[]=
					{
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Hull.paa",
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Wings.paa",
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Interior.paa",
					};
				};
			class UserActions
			{
				class ThrusterEngage
				{
					userActionID=122;
					displayName="ENGAGE FORWARD THRUSTERS";
					displayNameDefault="ENGAGE FORWARD THRUSTERS";
					textToolTip="ENGAGE FORWARD THRUSTERS";
					position="cargo_door_handle";
					priority=10;
					radius=3;
					onlyForPlayer=0;
					condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
					statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
					animPeriod=4;
				};
				class ThrusterDisengage: ThrusterEngage
				{
					userActionID=123;
					displayName="DISENGAGE FORWARD THRUSTERS";
					displayNameDefault="DISENGAGE FORWARD THRUSTERS";
					textToolTip="DISENGAGE FORWARD THRUSTERS";
					condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
					statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
				};
				class AirbrakeEngage: ThrusterEngage
				{
					userActionID=124;
					displayName="ENGAGE AIRBRAKES";
					displayNameDefault="ENGAGE AIRBRAKES";
					textToolTip="ENGAGE AIRBRAKES";
					condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
					statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
				};
				class ECM_ON
				{
					displayName = "ECM JAMMER ON";
					position = "pos cano";
					radius = 15;
					shortcut = "User2";
					condition = "player in this and isengineon this and (this getvariable 'ECMJAMMER' == 'yes' or 'FIR_ECMPOD' in weapons this)";
					statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
					onlyforplayer = "False";
					hideOnUse = 1;
				};
			};
		};
	};
	class 53rd_Liang_falcon_armed: OPTRE_UNSC_falcon_armed_S
	{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[Liang] UH-144 Jay  (Armed)";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_Rotary";
			crew="53rd_Volare_airmen_unit";
			tf_range=25000;
			tf_isolatedAmount=0.40000001;
			tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio=1;
			enableRadio=1;
			weapons[]=
			{
				"OPTRE_M638",
				"CMFlareLauncher",
				"Laserdesignator_pilotCamera"
			};
			magazines[]=
			{
				"OPTRE_2000Rnd_20mm_HE",
				"OPTRE_2000Rnd_20mm_HE",
				"168Rnd_CMFlare_Chaff_Magazine",
				"Laserbatteries"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Hull.paa",
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Wings.paa",
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Interior.paa",
			};
			class textureSources
			{
				class Standard
				{
					displayName="Grey";
					author="Body";
					textures[]=
					{
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Hull.paa",
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Wings.paa",
				"53rd_SC_aux\Units\factions\Liang\Falcon\Liang_Falcon_Interior.paa",
					};
				};
			class UserActions
			{
				class ThrusterEngage
				{
					userActionID=122;
					displayName="ENGAGE FORWARD THRUSTERS";
					displayNameDefault="ENGAGE FORWARD THRUSTERS";
					textToolTip="ENGAGE FORWARD THRUSTERS";
					position="cargo_door_handle";
					priority=10;
					radius=3;
					onlyForPlayer=0;
					condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
					statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
					animPeriod=4;
				};
				class ThrusterDisengage: ThrusterEngage
				{
					userActionID=123;
					displayName="DISENGAGE FORWARD THRUSTERS";
					displayNameDefault="DISENGAGE FORWARD THRUSTERS";
					textToolTip="DISENGAGE FORWARD THRUSTERS";
					condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
					statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
				};
				class AirbrakeEngage: ThrusterEngage
				{
					userActionID=124;
					displayName="ENGAGE AIRBRAKES";
					displayNameDefault="ENGAGE AIRBRAKES";
					textToolTip="ENGAGE AIRBRAKES";
					condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
					statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
				};
				class ECM_ON
				{
					displayName = "ECM JAMMER ON";
					position = "pos cano";
					radius = 15;
					shortcut = "User2";
					condition = "player in this and isengineon this and (this getvariable 'ECMJAMMER' == 'yes' or 'FIR_ECMPOD' in weapons this)";
					statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
					onlyforplayer = "False";
					hideOnUse = 1;
				};
			}; 
		};
	};
};
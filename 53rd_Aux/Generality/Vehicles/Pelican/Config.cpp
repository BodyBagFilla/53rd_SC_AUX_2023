class CfgPatches 
{
	class 53rd_Air_Pelican 
	{
		units[] = 
		{
			"53rd_Pelican",
			"53rd_UNSC_D77_TC_Pelican",
			"53rd_UNSC_D77_FL_Pelican",
			};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{

	class Eventhandlers;
	class UserActions;
	class Components;

/////////////////////// OPTRE Small Peli ///////////////////////
	class VES_D77HTCI_A;
    class 53rd_VES_Pelican_Base: VES_D77HTCI_A
    {
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;	
        displayName="[53rd] D77H Pelican/AV";
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Rotary";
        crew="53rd_Volare_airmen_unit";
		class UserActions
		{
			class AMS_LiteOpen
			{
			displayName = "<t color='#739eff'>Open AMS Lite</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User3";
				condition = "player in this and (speed this < 1)";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\AMS\AMS_Lite\AMS_Lite_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
				hideOnUse = 1;
			};		
			class Aircraft_MFD_Open_N
			{
				displayName="Open I-TGT System";
				position="pilotcontrol";
				radius=15;
				shortcut="User4";
				condition="('FIR_TGTPOD' in weapons this or 'Laserdesignator_pilotCamera' in weapons this) and player in this and isengineon this";
				statement="this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer="false";
				hideOnUse=1;
			};
		};
		class EventHandlers: EventHandlers
		{
			class FIR_AWS_Common_EH
			{
				Init="[_this select 0,'yes'] execVM ""\FIR_AirWeaponSystem_US\Script\init\init.sqf"";";
				hit="_this call bis_fnc_planeAiEject";
			};
		};
    };
	class 53rd_Pelican: 53rd_VES_Pelican_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		crewCrashProtection=9.9999997e-005;
		crewExplosionProtection=9.9999997e-005;
		displayName="[53rd] D77H Pelican/AV";
		transportSoldier=21;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		fuelCapacity=200;
		tf_range=120000;
		crew="53rd_Volare_airmen_unit";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Veh_Pelican_Small.paa"
		};
		memoryPointGun="machinegun_end";
		selectionFireAnim="muzzleFlash";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
		weapons[]=
		{
			"OPTRE_M638",
			"CMFlareLauncher",
			"Laserdesignator_mounted"
		};
		magazines[]=
		{
			"OPTRE_2000Rnd_20mm_HE",
			"OPTRE_2000Rnd_20mm_HE",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		ace_cargo_space=10;
		ace_cargo_hasCargo=1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        }; 
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_100Rnd_65x39_caseless_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_NLAW_F;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;

		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			class _xx_ACE_plasmaIV_1000
			{
				name="ACE_plasmaIV_1000";
				count=10;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _xx_ACE_adenosine
			{
				name="ACE_adenosine";
				count=10;
			};
			class _xx_ACE_Banana
			{
				name="ACE_Banana";
				count=5;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=36;
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
			class PelLift_LoadPodMenu
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				displayName="<t color='#FFBF00'>Load Supply Pods";
				displayNameDefault="<t color='#FFBF00'>Load Supply Pods";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip="<t color='#FFBF00'>Load Supply Pods";
				userActionID=9;
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
			class PelLift_OpenDetatchPodMenu
			{
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				displayNameDefault="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				userActionID=8;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
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
		class textureSources
		{
			class Grey
			{
				displayName="Grey";
				author="Body";
				textures[]=
				{
					""
				};
			};
			class DGrey
			{
				displayName="Dark Grey";
				author="Body";
				textures[]=
				{
					""
				};
			};
			class FDGrey
			{
				displayName="Flight Lead";
				author="Body";
				textures[]=
				{
					""
				};
			};
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa"
				};
			};
		};
	};



/////////////////////// DMNS Large Peli ///////////////////////

	class Splits_UNSC_D77_TC_Pelican;
	class 53rd_FOU_Pelican_Base: Splits_UNSC_D77_TC_Pelican
    {
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;	
		side=1;
        displayName="[53rd] D77H BASE";
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Rotary";
        crew="53rd_Volare_airmen_unit";
		class UserActions: UserActions
		{
			class AMS_LiteOpen
			{
			displayName = "<t color='#739eff'>Open AMS Lite</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User3";
				condition = "player in this and (speed this < 1)";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\AMS\AMS_Lite\AMS_Lite_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
				hideOnUse = 1;
			};		
			class Aircraft_MFD_Open_N
			{
				displayName="Open I-TGT System";
				position="pilotcontrol";
				radius=15;
				shortcut="User4";
				condition="('FIR_TGTPOD' in weapons this or 'Laserdesignator_pilotCamera' in weapons this) and player in this and isengineon this";
				statement="this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer="false";
				hideOnUse=1;
			};
		};
		class EventHandlers: EventHandlers
		{
			class FIR_AWS_Common_EH
			{
				Init="[_this select 0,'yes'] execVM ""\FIR_AirWeaponSystem_US\Script\init\init.sqf"";";
				hit="_this call bis_fnc_planeAiEject";
			};
		};
    };
 


	class 53rd_UNSC_D77_FL_Pelican: 53rd_FOU_Pelican_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		crew="53rd_Volare_airmen_unit";
		displayName="[53rd] D77-FL Pelican";
		hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Hull.paa",
				"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Wings.paa",
				"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Weapons.paa"
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
					displayName="53rd - Base";
					author="Icarus";
					textures[]=
					{
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Hull.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Wings.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Weapons.paa"
					};
				};

				class Volare
				{
					displayName="53rd - Volare";
					author="Icarus";
					textures[]=
					{
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Hull_Volare.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Wings_Volare.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Weapons.paa"
					};
				};

				class Red
				{
					displayName="53rd - Red";
					author="Icarus";
					textures[]=
					{
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Hull_Red.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Wings_Red.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Weapons.paa"
					};
				};

				class Blue
				{
					displayName="53rd - Blue";
					author="Icarus";
					textures[]=
					{
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Hull_Blue.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Wings_Blue.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Weapons.paa"
					};
				};

				class Green
				{
					displayName="53rd - Green";
					author="Icarus";
					textures[]=
					{
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Hull_Green.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Wings_Green.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Weapons.paa"
					};
				};

				class Purple
				{
					displayName="53rd - Purple";
					author="Icarus";
					textures[]=
					{
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Hull_Purple.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Wings_Purple.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Weapons.paa"
					};
				};


				class BigBen
					{
					displayName="Custom BigBen";
					author="Icarus";
					textures[]=
					{
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Ben_Custom_D77_Body_co.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Ben_Custom_D77_Wings_co.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\53rd_Pelican_Weapons.paa"
					};
				};

				class AK
					{
					displayName="Custom AK";
					author="Icarus";
					textures[]=
					{
						"\53rd_Aux\Generality\Vehicles\Pelican\PelicanHullAK.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\PelicanWingsAK.paa",
						"\53rd_Aux\Generality\Vehicles\Pelican\PelicanWeaponsAK.paa"
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
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				shortcut="user20";
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast";
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
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast";
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
				shortcut="user19";
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
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
				shortcut="user17";
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
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
				shortcut="user19";
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
				shortcut="user17";
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
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
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class Pylons
				{
					class PylonRight1
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=4;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"FIR_BLUFOR_Combined_HP",
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.1};
					};
					class PylonRight2
					{
						attachment="Splits_PylonMissile_AGM_Pelican_x2";
						priority=3;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"FIR_BLUFOR_Combined_HP",
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.2};
					};
					class PylonRight3
					{
						attachment="Splits_PylonMissile_AGM_Bottom_Pelican_x3";
						priority=2;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"Splits_T_Missiles",
							"FIR_BLUFOR_Combined_HP",
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.1};
					};
					class PylonRight4
					{
						attachment="Splits_PylonMissile_AGM_Bottom_Pelican_x3";
						priority=1;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"Splits_T_Missiles",
							"FIR_BLUFOR_Combined_HP",
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.2};
					};
					class PylonsLeft1: PylonRight1
					{
						UIposition[]={0.25,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft2: PylonRight2
					{
						UIposition[]={0.25,0.40000001};
						mirroredMissilePos=1;
					};
					class PylonsLeft3: PylonRight3
					{
						UIposition[]={0.60000002,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft4: PylonRight4
					{
						UIposition[]={0.60000002,0.40000001};
						mirroredMissilePos=1;
					};
				};
				class Bays
				{
					class BayCenter1
					{
						bayOpenTime=0.34999999;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=0;
					};
					class BayCenter2: BayCenter1
					{
					};
					class BayRight1
					{
						bayOpenTime=0.34999999;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=0;
					};
					class BayLeft1: BayRight1
					{
					};
				};
			};
		class EventHandlers: EventHandlers
		{
			class FIR_AWS_Common_EH
			{
					Init="[_this select 0,'yes'] execVM ""\FIR_AirWeaponSystem_US\Script\init\init.sqf"";";
					hit="_this call bis_fnc_planeAiEject";
			};
		};
	};
};


};
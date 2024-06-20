	class CfgPatches
	{
		class 53rd_Vehicles_Air_Falcon_II
		{
			units[]=
			{
				"53rd_CMA_falcon",
				"53rd_UNSC_falcon_armed",
				"53rd_UNSC_falcon_Ferret",
			};
			weapons[]={};
			requiredVersion=0.1;
			requiredAddons[]={};
			magazines[]={};
		};
	};
	class CfgVehicles
	{
		class OPTRE_UNSC_falcon;
		class OPTRE_UNSC_falcon_armed_S; 
		class 53rd_CMA_falcon: OPTRE_UNSC_falcon
		{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[53rd] UH-144 Jay  (Unarmed)";
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
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Main_co.paa",
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Attachments_co.paa",
				"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
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
		class 53rd_UNSC_falcon_armed: OPTRE_UNSC_falcon_armed_S
		{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[53rd] UH-144 Jay  (Armed)";
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
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Main_co.paa",
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Attachments_co.paa",
				"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
			};
			class textureSources
			{
				class Standard
				{
					displayName="Grey";
					author="Body";
					textures[]=
					{
					"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Main_co.paa",
					"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Attachments_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
					};
				};
				class Ferret
				{
					displayName="Ferret Custom";
					author="Body";
					textures[]=
					{
					"53rd_SC_aux\Vehicles\Falcon_New\Falcon_Hull_Ferret.paa",
					"53rd_SC_aux\Vehicles\Falcon_New\Falcon_Wings_Ferret.paa",
					"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
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
	};


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
///////////////////////////////VEHICLES/////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

	class EventHandlers;
	class OPTRE_m1087_stallion_cover_unsc;
	class OPTRE_m1087_stallion_unsc;
	class OPTRE_m1087_stallion_unsc_resupply;
	class OPTRE_m1087_stallion_unsc_refuel;
	class OPTRE_m1087_stallion_unsc_repair;
	class OPTRE_UNSC_falcon;
	class OPTRE_UNSC_falcon_armed_S;
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
	class Splits_Pelican_base;
	class Splits_UNSC_D77_TC_Pelican: Splits_Pelican_base 
	{
	class Components;
	};

//-------------------------PELICAN-------------------------------------/
	class 53rd_SEDRA_D77_TC_Pelican: Splits_UNSC_D77_TC_Pelican
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Rotary";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[Sedra] D77-TC Pelican";
		hiddenSelectionsTextures[]=
		{
		"53rd_sc_aux\Units\factions\Sedra\Pelican\Sedra_Pelican_Hull.paa",
		"53rd_sc_aux\Units\factions\Sedra\Pelican\Sedra_Pelican_Wing.paa",
		"53rd_sc_aux\Units\factions\Sedra\Pelican\Sedra_Pelican_Weapons.paa"
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
						displayName="53rd - Sedra D77";
						author="Body";
						textures[]=
						{
						"53rd_sc_aux\Units\factions\Sedra\Pelican\Sedra_Pelican_Hull.paa",
						"53rd_sc_aux\Units\factions\Sedra\Pelican\Sedra_Pelican_Wings.paa",
						"53rd_sc_aux\Units\factions\Sedra\Pelican\Sedra_Pelican_Weapons.paa"
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

//-------------------------Falcon-------------------------------------/
		class 53rd_Sedra_falcon: OPTRE_UNSC_falcon
		{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[53rd] UH-144 Jay (Unarmed)";
			scope=2;
			side=2
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			faction="53rd_Sedra";
			crew="Sedra_Crewman";
			editorSubCategory = "Sedra_Rotary";
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
				"53rd_sc_aux\Units\factions\Sedra\Falcon\Sedra_Falcon_Hull.paa",
				"53rd_sc_aux\Units\factions\Sedra\Falcon\Sedra_Falcon_Wings.paa",
				"53rd_sc_aux\Units\factions\Sedra\Falcon\Sedra_Falcon_interior.paa",
				"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
				"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"
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
			class Components:Components 
			{ 
				class TransportPylonsComponent 
				{ 
					UIPicture="\optre_vehicles_air\falcon\FalconPylonPic.paa"; 
					class pylons 
					{ 
						class WingPylonRight1 
						{ 
							maxweight=560; 
							hardpoints[]= 
							{ 
								"OPAEX_Hardpoint_UH144" 
							}; 
							attachment="OPTRE_16Rnd_Anvil1_missiles"; 
							bay=-1; 
							priority=3; 
							UIposition[]={0.34999999,0.1}; 
							turret[]={}; 
						}; 
						class WingPylonLeft1: WingPylonRight1 
						{ 
							mirroredMissilePos=1; 
							UIposition[]={0.34999999,0.46700001}; 
						}; 
					}; 
					class Presets 
					{ 
						class Default 
						{ 
							displayName="Empty"; 
							attachment[]={}; 
						}; 
						class CAS_Rockets 
						{ 
							displayName="CAS: ANVIL I"; 
							attachment[]= 
							{ 
								"OPTRE_16Rnd_Anvil1_missiles", 
								"OPTRE_16Rnd_Anvil1_missiles" 
							}; 
						}; 
						class CAS_Rockets_Guided 
						{ 
							displayName="CAS: ANVIL II & III"; 
							attachment[]= 
							{ 
								"OPTRE_16Rnd_Anvil2_missiles", 
								"OPTRE_16Rnd_Anvil3_missiles" 
							}; 
						}; 
						class CAS_AT 
						{ 
							displayName="AT"; 
							attachment[]= 
							{ 
								"OPTRE_1Rnd_Jackknife_missile", 
								"OPTRE_1Rnd_Jackknife_missile" 
							}; 
						}; 
					}; 
				}; 
			};
		};
		class 53rd_SEDRA_falcon_armed: OPTRE_UNSC_falcon_armed_S
		{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[SEDRA] UH-144 Jay (Armed)";
			scope=2;
			side=2
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			faction="53rd_Sedra";
			crew="Sedra_Crewman";
			editorSubCategory = "Sedra_Rotary";
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
				"53rd_sc_aux\Units\factions\Sedra\Falcon\Sedra_Falcon_Hull.paa",
				"53rd_sc_aux\Units\factions\Sedra\Falcon\Sedra_Falcon_Wings.paa",
				"53rd_sc_aux\Units\factions\Sedra\Falcon\Sedra_Falcon_interior.paa",
				"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
				"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"
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
			class Components:Components 
			{ 
				class TransportPylonsComponent 
				{ 
					UIPicture="\optre_vehicles_air\falcon\FalconPylonPic.paa"; 
					class pylons 
					{ 
						class WingPylonRight1 
						{ 
							maxweight=560; 
							hardpoints[]= 
							{ 
								"OPAEX_Hardpoint_UH144" 
							}; 
							attachment="OPTRE_16Rnd_Anvil1_missiles"; 
							bay=-1; 
							priority=3; 
							UIposition[]={0.34999999,0.1}; 
							turret[]={}; 
						}; 
						class WingPylonLeft1: WingPylonRight1 
						{ 
							mirroredMissilePos=1; 
							UIposition[]={0.34999999,0.46700001}; 
						}; 
					}; 
					class Presets 
					{ 
						class Default 
						{ 
							displayName="Empty"; 
							attachment[]={}; 
						}; 
						class CAS_Rockets 
						{ 
							displayName="CAS: ANVIL I"; 
							attachment[]= 
							{ 
								"OPTRE_16Rnd_Anvil1_missiles", 
								"OPTRE_16Rnd_Anvil1_missiles" 
							}; 
						}; 
						class CAS_Rockets_Guided 
						{ 
							displayName="CAS: ANVIL II & III"; 
							attachment[]= 
							{ 
								"OPTRE_16Rnd_Anvil2_missiles", 
								"OPTRE_16Rnd_Anvil3_missiles" 
							}; 
						}; 
						class CAS_AT 
						{ 
							displayName="AT"; 
							attachment[]= 
							{ 
								"OPTRE_1Rnd_Jackknife_missile", 
								"OPTRE_1Rnd_Jackknife_missile" 
							}; 
						}; 
					}; 
				}; 
			}; 
		};
	
//-------------------------Hornet-------------------------------------/
    class 53rd_SEDRA_Hornet_Transport: OPTRE_UNSC_hornet
    {
        dlc="53rd";
        author="Skywalker";
        scope=2;
		side=2
        scopeCurator=2;
        scopeArsenal=2;
        forceInGarage=1;
        displayName="[SEDRA] AV-14";
        editorPreview="53rd_SC_aux\Vehicles\Hornet\Hornet-HQ.jpg";
		faction="53rd_Sedra";
		editorSubCategory = "Sedra_Rotary";
		crew="Sedra_Crewman";
        mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Units\factions\Sedra\Hornet\Sedra_Hornet_Hull.paa"
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
	class 53rd_SEDRA_Hornet_AV: OPTRE_UNSC_hornet_CAP
    {
        dlc="53rd";
        author="Skywalker";
        scope=2;
		side=2
        scopeCurator=2;
        scopeArsenal=2;
        forceInGarage=1;
        displayName="[SEDRA] AV-14 (CAP)";
        editorPreview="53rd_SC_aux\Vehicles\Hornet\Hornet-HQ.jpg";
		faction="53rd_Sedra";
		editorSubCategory = "Sedra_Rotary";
		crew="Sedra_Crewman"; 
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Units\factions\Sedra\Hornet\Sedra_Hornet_Hull.paa"
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
	
//-------------------------Trucks-------------------------------------/
	class 53rd_SEDRA_stallion: OPTRE_m1087_stallion_unsc
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[SEDRA] Stallion";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckCargo.paa",
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
						displayName="[SEDRA] Stallion";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckCargo.paa",
						};
					};
				};
	};
	class 53rd_SEDRA_stallion_Covered: OPTRE_m1087_stallion_cover_unsc
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[SEDRA] Stallion (Covered)";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckCargo.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckCover.paa",
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
						displayName="[SEDRA] Stallion (Covered)";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckCargo.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckCover.paa",

						};
					};
				};
	};
	class 53rd_SEDRA_stallion_Ammo: OPTRE_m1087_stallion_unsc_resupply
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[SEDRA] Stallion (Ammo)";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckCargo.paa",
							"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa",
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
						displayName="[SEDRA] Stallion (Ammo)";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckCargo.paa",
							"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa",
						};
					};
				};
	};
	class 53rd_SEDRA_stallion_Repair: OPTRE_m1087_stallion_unsc_repair
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[SEDRA] Stallion (Repair)";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_sc_aux\Units\factions\Sedra\Truck\Sedra_TruckAmmo.paa",
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
						displayName="[SEDRA] Stallion (Repair)";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"\53rd_sc_aux\Units\factions\Sedra\Truck\Sedra_TruckAmmo.paa",
						};
					};
				};
	};

	class 53rd_SEDRA_stallion_Fuel: OPTRE_m1087_stallion_unsc_refuel
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[SEDRA] Stallion (Fuel)";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckFuel.paa",
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
						displayName="[SEDRA] Stallion (Fuel)";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckWheel.paa",
							"53rd_SC_aux\Units\factions\Sedra\Truck\Sedra_TruckFuel.paa",
						};
					};
				};
	};
//-------------------------Scorpion-------------------------------------/



//-------------------------Polaris-------------------------------------/
	class 53rd_SEDRA_Polaris_MG: O_T_LSV_02_armed_F
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[SEDRA] Growler MG";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisDet.paa",
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
						displayName="Sedra Stanard";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisDet.paa",
						};
					};
				};
	};
	class 53rd_SEDRA_Polaris_AT: O_T_LSV_02_AT_F
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[SEDRA] Growler AT";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisDet.paa",
							"A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
							"A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",

							
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
						displayName="Sedra Stanard";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisDet.paa",
							"A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
							"A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
						};
					};
				};
	};
	class 53rd_SEDRA_Polaris_Unarmed: O_T_LSV_02_unarmed_F
	{
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		author="SplitJaw & DemonicOnPC,Body";
		displayName="[SEDRA] Growler Transport";
		hiddenSelectionsTextures[]=
		{
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisDet.paa",
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
						displayName="Sedra";
						author="Body";
						textures[]=
						{
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisHull.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisWheels.paa",
							"53rd_SC_aux\Units\factions\Sedra\Polaris\Sedra_PolarisDet.paa",
						};
					};
				};
	};
//-------------------------Hog-------------------------------------/
	class 53rd_SEDRA_M12_FAV_APC: OPTRE_M12_FAV_APC
	{
		displayName="[SEDRA] M12 APC Warthog";
		author="Six";
		dlc = "53rd";
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		typicalCargo[]=
		{
			"Sedra_Crewman"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_APCTop.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_APCBay.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\SedraDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",

		};
	};

	class 53rd_SEDRA_M813_TT: OPTRE_M813_TT
	{
		dlc = "53rd";
		displayName="[SEDRA] M813 Transport Warthog";
		author="Six";
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		typicalCargo[]=
		{
			"Sedra_Crewman"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_APCTop.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\SedraDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",

		};
	};
	class 53rd_SEDRA_M12A1_LRV: OPTRE_M12A1_LRV
	{
		dlc = "53rd";
		displayName="[SEDRA] M12A1 AT Warthog";
		author="Six";
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		typicalCargo[]=
		{
			"Sedra_Crewman"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_Turret.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\SedraDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_SEDRA_M12_FAV: OPTRE_M12_FAV
	{
		dlc = "53rd";
		displayName="[SEDRA] M12 Recon Warthog";
		author="Six";
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		typicalCargo[]=
		{
			"Sedra_Crewman"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\SedraDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_SEDRA_M12_LRV: OPTRE_M12_LRV
	{
		dlc = "53rd";
		displayName="[SEDRA] M12 LAAG Warthog";
		author="Six";
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		typicalCargo[]=
		{
			"Sedra_Crewman"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_Turret.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\SedraDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_SEDRA_M12_AA: OPTRE_M12R_AA
	{
		dlc = "53rd";
		displayName="[SEDRA] M12 AA Warthog";
		author="Six";
		scope=2;
		side=2
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Sedra";
		crew="Sedra_Crewman";
		editorSubCategory = "Sedra_Motor";
		typicalCargo[]=
		{
			"Sedra_Crewman"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_Hull.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_HullBot.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\Sedra_Hog_AATurret.paa",
			"53rd_SC_aux\Units\factions\Sedra\Hog\SedraDecal.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
		};
	};
class CfgPatches {
	class 53rd_VTOL {
		units[] = {"53rd_Wyvern"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class OPTRE_VTOLI_01;
	class 53rd_Wyvern: OPTRE_VTOLI_01
	{
		author="1Lt. Body";
		displayName="[53rd] Amatus - Wyvren";
		scope=2;
		scopeCurator=2;
		side=1
		transportSoldier=21;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		crew="53rd_Volare_airmen_unit";
		typicalCargo[]=
		{
			"53rd_Volare_airmen_unit"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Generality\Vehicles\Wyvern\53rd_VTOL_02_EXT01_co.paa",
			"\53rd_Aux\Generality\Vehicles\Wyvern\53_VTOL_02_EXT02_co.paa",
			"\53rd_Aux\Generality\Vehicles\Wyvern\53rd_VTOL_02_EXT03_L_co.paa",
			"\53rd_Aux\Generality\Vehicles\Wyvern\53rd_VTOL_02_EXT03_L_co.paa",
		};

		textureList[]=
		{
			"53rd_wyvern_01",
			1
		};
		class textureSources
		{
			class 53rd_wyvern_01
			{
			author="1Lt. Body";
			displayName="[53rd] Amat - Wyvren";
				textures[]=
				{
				"\53rd_Aux\Generality\Vehicles\Wyvern\53rd_VTOL_02_EXT01_co.paa",
				"\53rd_Aux\Generality\Vehicles\Wyvern\53_VTOL_02_EXT02_co.paa",
				"\53rd_Aux\Generality\Vehicles\Wyvern\53rd_VTOL_02_EXT03_L_co.paa",
				"\53rd_Aux\Generality\Vehicles\Wyvern\53rd_VTOL_02_EXT03_L_co.paa",
				};
				materials[]={};
				factions[]=
				{
					"BLU_F",
					"BLU_G_F"
				};
			};
		};
		class UserActions
		{
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
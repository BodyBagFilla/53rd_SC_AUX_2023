class CfgPatches {
	class 53rd_Air_Night {
		units[] = {"53rd_Nightingale","53rd_Nightingale_medic"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class Turrets;
	class CopilotTurret;
	class ACE_SelfActions;
	class CargoTurret;
	class DMNS_Nightingale_base;
	class 53rd_Nightingale : DMNS_Nightingale_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side=1;
        icon = "OPTRE_Vehicles\Falcon\Data\icon.paa";
        editorPreview="53rd_SC_aux\Vehicles\Nightingale\Nightingale-Grey.jpg";
		vehicleClass = "Air";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		author = "Body";
		crew = "53rd_Volare_airmen_unit";
		displayName = "[53rd] EV-44 Nightingale";
		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_GUA23A",
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"OPTRE_2000Rnd_20mm_HEIAP",
		};
		hiddenSelections[] =
		{
			"camo1",
			"clan",
			"clan_text",
			"insignia",

			//Added Selections
			"_Ammobox",
			"_Axe",
			"_Cans",
			"_FireExtinguisher",
			"_Shovel"
		};
        // TFAR Config
        tf_range = 25000;
        tf_isolatedAmount = .4;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        enableRadio = 1;
		hiddenSelectionsTextures[] = { "53rd_SC_aux\Vehicles\Nightingale\Nightingale_Base_Grey_co.paa" };
		class textureSources
		{
			class 53rd_Grey
			{
				displayName="Black";
				author="Body";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Nightingale\Nightingale_Base_Black_co.paa"
				};
			};
			class 53rd_DGrey
			{
				displayName="Dark Grey";
				author="Body";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Nightingale\Nightingale_Base_Grey_co.paa"
				};
			};
			class 53rd_Green
			{
				author="Body";
				displayName="Green";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Nightingale\Nightingale_Base_Green_co.paa"
				};
			};
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
	};
    class 53rd_Nightingale_medic:53rd_Nightingale
    {
		displayName = "[53rd] EV-44 Nightingale (Medical)";
        hiddenSelectionsTextures[] = { "53rd_SC_aux\Vehicles\Nightingale\Medical_night.paa" };
		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_GUA23A",
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"OPTRE_2000Rnd_20mm_HEIAP",
		};
    };
};
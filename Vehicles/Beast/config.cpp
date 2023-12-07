	class CfgPatches
	{
		class 53rd_Vehicles_Wildebeest
		{
			units[]=
			{
				"53rd_M125_APC"
			};
			weapons[]={};
			requiredVersion=0.1;
			requiredAddons[]=
			{
			};
			magazines[]={};
			ammo[]={};
		};
	};
	class CfgVehicles
	{
		class OPTRE_M125_APC;
		class 53rd_M125_APC: OPTRE_M125_APC
		{
			dlc="53rd";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			displayName="[53rd] Boar IFV";
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_APC";
			crew="53rd_crewman_unit";
			tf_range=25000;
			transportSoldier=15;
			tf_isolatedAmount=0.40000001;
			tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio=1;
			enableRadio=1;
			class UserActions
			{
				class CargoDoorOpen
				{
					userActionID=60;
					displayName="Open Cargo Door";
					displayNameDefault="Open Cargo Door";
					textToolTip="Open Cargo Door";
					position="cargodoor_axis";
					radius=6;
					priority=2;
					onlyForPlayer=0;
					condition="((this animationPhase ""CargoDoor"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
					statement="this animate [""CargoDoor"",1]";
					animPeriod=5;
				};
				class CargoDoorClose: CargoDoorOpen
				{
					userActionID=61;
					displayName="Close Cargo Door";
					displayNameDefault="Close Cargo Door";
					textToolTip="Close Cargo Door";
					priority=2;
					condition="((this animationPhase ""CargoDoor"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
					statement="this animate [""CargoDoor"",0]";
					animPeriod=5;
				};
				class Flip
				{
					displayNameDefault="Press SPACEBAR to Flip Wildebeest";
					displayName="Press SPACEBAR to Flip Wildebeest";
					position="";
					radius=6;
					onlyForPlayer=1;
					condition="(alive this) AND !(canmove this)";
					statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 2]; this setVectorUp surfaceNormal getposATL this;";
				}
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Vehicles\Beast\Exterior_CO.paa",
				"OPTRE_Vehicles\Wildebeest\data\interior_co.paa"
			};
		};
	};

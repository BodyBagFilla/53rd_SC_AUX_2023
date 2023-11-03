class CfgPatches {
	class 53rd_Custom_Stuff_Pazner
	{
			units[] = 
			{
			"53rd_Custom_Helmet_Panzer_Pilot_Woodland",
			"53rd_Custom_Helmet_Panzer_Pilot_Desert",
			"53rd_Custom_Helmet_Panzer_Pilot_Winter",
			"53rd_Custom_Helmet_Panzer_Pilot_Urban",
			};
			weapons[] = 
			{
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};
#include "..\xtdGear.hpp"	
class cfgWeapons
{
	class OPTRE_UNSC_HRPilot_Helmet;
	//Panzer Pilot
	class 53rd_Custom_Helmet_Panzer_Pilot_Woodland: OPTRE_UNSC_HRPilot_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet Panzer Pilot / Woodland)";
			model="OPTRE_UNSC_Units\Army\Helmets\HRPilot_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Custom_Helmet_Woodland.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Visor.paa"
			};
		};
	class 53rd_Custom_Helmet_Panzer_Pilot_Urban: OPTRE_UNSC_HRPilot_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet Panzer Pilot / Urban)";
			model="OPTRE_UNSC_Units\Army\Helmets\HRPilot_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Custom_Helmet_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Visor.paa"
			};
		};
	class 53rd_Custom_Helmet_Panzer_Pilot_Desert: OPTRE_UNSC_HRPilot_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet Panzer Pilot / Desert)";
			model="OPTRE_UNSC_Units\Army\Helmets\HRPilot_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Custom_Helmet_Desert.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Visor.paa"
			};
		};
	class 53rd_Custom_Helmet_Panzer_Pilot_Winter: OPTRE_UNSC_HRPilot_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet Panzer Pilot / Winter )";
			model="OPTRE_UNSC_Units\Army\Helmets\HRPilot_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Custom_Helmet_Winter.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Visor.paa"
			};
		};
	class 53rd_Custom_Helmet_Panzer_Pilot_Woodland_dp: OPTRE_UNSC_HRPilot_Helmet
		{
			scope=1;
			scopeArsenal=1;
			displayName="[53rd] Custom Helmet Panzer Pilot / Woodland dp)";
			model="OPTRE_UNSC_Units\Army\Helmets\HRPilot_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Custom_Helmet_Woodland.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Visor.paa"
			};
		};
	class 53rd_Custom_Helmet_Panzer_Pilot_Urban_dp: OPTRE_UNSC_HRPilot_Helmet
		{
			scope=1;
			scopeArsenal=1;
			displayName="[53rd] Custom Helmet Panzer Pilot / Urban dp)";
			model="OPTRE_UNSC_Units\Army\Helmets\HRPilot_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Custom_Helmet_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Visor.paa"
			};
		};
	class 53rd_Custom_Helmet_Panzer_Pilot_Desert_dp: OPTRE_UNSC_HRPilot_Helmet
		{
			scope=1;
			scopeArsenal=1;
			displayName="[53rd] Custom Helmet Panzer Pilot / Desert dp)";
			model="OPTRE_UNSC_Units\Army\Helmets\HRPilot_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Custom_Helmet_Desert.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Visor.paa"
			};
		};
	class 53rd_Custom_Helmet_Panzer_Pilot_Winter_dp: OPTRE_UNSC_HRPilot_Helmet
		{
			scope=1;
			scopeArsenal=1;
			displayName="[53rd] Custom Helmet Panzer Pilot / Winter dp)";
			model="OPTRE_UNSC_Units\Army\Helmets\HRPilot_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Custom_Helmet_Winter.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Pazner\Panzer_Visor.paa"
			};
		};
};
class CfgVehicles
{
};
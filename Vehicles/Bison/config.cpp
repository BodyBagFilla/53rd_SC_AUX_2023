class CfgPatches
	{
		class 53rd_Vehicles_Bison
		{
			units[]=
			{
				"53rd_PL_IFV_UNSC",
				"53rd_Heph_IFV_UNSC",
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
	class OPTRE_M412_IFV_UNSC
	{
		class Turrets
		{
			class MainTurret;
		}
	};
	class 53rd_PL_IFV_UNSC: OPTRE_M412_IFV_UNSC
	{
		vehicleClass="OPTRE_UNSC_Armored_class";
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Chimera - IFV PL";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_APC";
		crew="53rd_crewman_unit";
		tf_range=25000;
		transportSoldier=15;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OPTRE_M230",
					"OPTRE_M670_ATGM_Launcher"
				};
				magazines[]=
				{
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
				};
			};
		};
		class textureSources
		{
			class FiftyThirdPL
			{
				displayName="53rd PL";
				author="1Lt. Body";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Bison\Bison_PL_Body_blk_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_53rd_Misc_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_wheelsCannon_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_90mm_blk_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class FiftyThird
			{
				displayName="53rd";
				author="1Lt. Body";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Bison\Bison_HEP_Body_blk_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_53rd_Misc_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_wheelsCannon_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_90mm_blk_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class standard
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorgreen
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorblack
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="Snow";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colortan",
			1,
			"colorsnow",
			1
		};
	};
	class 53rd_Heph_IFV_UNSC: OPTRE_M412_IFV_UNSC
	{
		vehicleClass="OPTRE_UNSC_Armored_class";
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Chimera - IFV";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_APC";
		crew="53rd_crewman_unit";
		tf_range=25000;
		transportSoldier=15;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OPTRE_M230",
					"OPTRE_M670_ATGM_Launcher"
				};
				magazines[]=
				{
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_2Rnd_GAT_missiles"
				};
			};
		};
		class textureSources
		{
			class FiftyThirdPL
			{
				displayName="53rd PL";
				author="1Lt. Body";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Bison\Bison_PL_Body_blk_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_53rd_Misc_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_wheelsCannon_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_90mm_blk_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class FiftyThird
			{
				displayName="53rd";
				author="1Lt. Body";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Bison\Bison_HEP_Body_blk_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_53rd_Misc_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_wheelsCannon_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"53rd_SC_aux\Vehicles\Bison\Bison_90mm_blk_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class standard
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorgreen
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorblack
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
			class colorsnow
			{
				displayName="Snow";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Bison\data\Bison_Body_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Misc_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_snow_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
					"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1,
			"colorgreen",
			1,
			"colorblack",
			1,
			"colortan",
			1,
			"colorsnow",
			1
		};
	};
};

/*class CfgPatches {
	class West_Enia_Army {
		units[] = 
        {
            "WIP"
        };
		weapons[] = 
        {
            "WEA_Uniform"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons{
    class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class UniformItem;

//Base

//Vest
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;

	class WEA_Lite: V_CarrierRigKBT_01_light_base_F
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Lite Vest";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Chest_WEA.paa"
		};
	};
	class WEA_Vest: V_CarrierRigKBT_01_base_F
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Vest";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Chest_WEA.paa"
		};
	};
	class WEA_Heavy: V_CarrierRigKBT_01_heavy_base_F
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Heavy Vest";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Chest_WEA.paa"
		};
	};

//Uniform
	class Uniform_Base;

	class WEA_Uniform: Uniform_Base
	{
		scope=2;
		side=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Uniform";
		//picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Uniform_WEA.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WEA_Uniform_thing";
			containerClass="Supply40";
			mass=40;
		};
	};
	
//Helmet
	class H_HelmetHBK_F;
	
	class WEA_Helmet: H_HelmetHBK_F
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Helmet";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Helmet_WEA.paa"
		};
	};
};

class CfgVehicles{
	class B_G_Soldier_LAT_F;
	class B_Kitbag_rgr;
	class OPTRE_M808B_UNSC;
	class OPTRE_Pelican_armed;
	class OPTRE_M494;
	class OPTRE_UNSC_hornet;
	class OPTRE_M12_Base;
	class OPTRE_M12_LRV;
	class Turrets;
	class NewTurret;
	class OPTRE_M12_FAV;
	class B_Plane_Fighter_01_F;
	
	class WEA_Uniform_thing: B_G_Soldier_LAT_F
	{
		scope=1;
		side=2;
		uniformClass="WEA_Uniform_thing_2";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Uniform_WEA.paa"
		};
	};
	
	class WEA_Kitbag: B_Kitbag_rgr
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Kitbag";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Kitbag_WEA.paa"
		};
	};
	
	class 53rd_WEA_M808B: OPTRE_M808B_UNSC
	{
		crew="OPTRE_Ins_URF_Rifleman_AR";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPTRE_INS";
		displayName="Scorpion MBT (WEA)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_base_ins_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_tur_ins_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\det_3_ins_co.paa",
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Scorp_insdecals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_net_ins_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_net_ins_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\mine_roller_ins_co.paa"
		};
		class textureSources
		{
			class ins
			{
				displayName="Ins";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_base_ins_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_tur_ins_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\det_3_ins_co.paa",
					"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Scorp_insdecals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_net_ins_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_net_ins_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\mine_roller_ins_co.paa"
				};
			};
		};
	};
	
	class 53rd_WEA_Pelican_armed: OPTRE_Pelican_armed
	{
		author="Article 2 Studios";
		displayName="Pelican (WEA)";
		side=0;
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Pelican.paa",
			""
		};
		textureList[]=
		{
			"colorinnie",
			1
		};
	};
	
	class 53rd_WEA_M494: OPTRE_M494
	{
		dlc="OPTRE";
		scope=2;
		scopeCurator=2;
		displayName="Oryx IFV (WEA)";
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		side=0;
		textureList[]=
		{
			"ins",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\oryx_armor_ins_co.paa",
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\oryx_main_ins_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\ins\oryx_net_ins_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\ins\oryx_net_ins_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\ins\oryx_net_ins_ca.paa",
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\oryx_turret_ins_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\ins\Scorp_mg_ins_co.paa"
		};
		class textureSources
		{
			class ins
			{
				displayName="Ins";
				author="Article 2 Studios";
				textures[]=
				{
					"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\oryx_armor_ins_co.paa",
					"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\oryx_main_ins_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\ins\oryx_net_ins_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\ins\oryx_net_ins_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\ins\oryx_net_ins_ca.paa",
					"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\oryx_turret_ins_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\ins\Scorp_mg_ins_co.paa"
				};
			};
		};
	};

	class 53rd_WEA_hornet: OPTRE_UNSC_hornet
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		side=0;
		displayName="Hornet (WEA)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Hornet.paa"
		};
		textureList[]=
		{
			"colorinnie",
			1
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};

	class 53rd_WEA_M12_LRV: OPTRE_M12_LRV
	{
		displayName="LAAG Warthog (WEA)";
		author="Article 2 Studios";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\m12_turret_ins3_co.paa"
		};
		class textureSources
		{
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins_co.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins2_co.paa"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins3_co.paa"
				};
			};
		};
		vehicleClass="OPTRE_Ins_Vehicle_class";
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_BR";
		faction="OPTRE_Ins";
	};

	class 53rd_WEA_M12_FAV: OPTRE_M12_FAV
	{
		displayName="Transport Warthog (WEA)";
		author="Article 2 Studios";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
		};
		vehicleClass="OPTRE_Ins_Vehicle_class";
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		faction="OPTRE_Ins";
		class textureSources
		{
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"
				};
			};
		};
	};

	class 53rd_WEA_bayonet: B_Plane_Fighter_01_F
	{
		displayName="Bayonet (WEA)";
		scope=2;
		scopeCurator=2;
		faction="OPTRE_INS";
		side=0;
		crew="OPTRE_Ins_URF_Pilot";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Bayonet_02_fuselage_01_co.paa",
			"53rd_SC_aux\Units\factions\West_Enia_Army\Tex\Bayonet_02_fuselage_02_co.paa"
		};
	};

};

class CfgGlasses{
};
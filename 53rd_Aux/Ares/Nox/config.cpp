
class CfgPatches
{
    class 53rd_Ares_Nox_Gear
    { 
        units[] = 
		{
			"53rd_Ares_Nox_Ghillie_Winter_Half_F",
			"53rd_Ares_Nox_Ghillie_Urban_Half_F",
			"53rd_Ares_Nox_Ghillie_Woodland_Half_F",
			"53rd_Ares_Nox_Ghillie_SemiArid_Half_F",
			"53rd_Ares_Nox_Ghillie_Arid_Half_F",
			"53rd_Ares_Nox_Ghillie_Winter_Full_F",
			"53rd_Ares_Nox_Ghillie_Urban_Full_F",
			"53rd_Ares_Nox_Ghillie_Jungle_Full_F",
			"53rd_Ares_Nox_Ghillie_Jungle2_Full_F",
			"53rd_Ares_Nox_Ghillie_Lush_Full_F",
			"53rd_Ares_Nox_Ghillie_Lush2_Full_F",
			"53rd_Ares_Nox_Ghillie_Arid_Full_F",
			"53rd_Ares_Nox_Ghillie_SemiArid_Full_F",
			"53rd_Nox_Urban_F",
			"53rd_Nox_Winter_F",
			"53rd_Nox_Woodland_F",
			"53rd_Nox_Woodland2_F",
			"53rd_Nox_Arid_F"
		}; 
        weapons[] = 
		{
			"53rd_Ares_Nox_Ghillie_Winter_Half",
			"53rd_Ares_Nox_Ghillie_Urban_Half",
			"53rd_Ares_Nox_Ghillie_Arid_Half",
			"53rd_Ares_Nox_Ghillie_Woodland_Half",
			"53rd_Ares_Nox_Ghillie_SemiArid_Half",
			"53rd_Ares_Nox_Ghillie_Winter_Full",
			"53rd_Ares_Nox_Ghillie_Urban_Full",
			"53rd_Ares_Nox_Ghillie_Arid_Full",
			"53rd_Ares_Nox_Ghillie_Jungle_Full",
			"53rd_Ares_Nox_Ghillie_Jungle2_Full",
			"53rd_Ares_Nox_Ghillie_Lush_Full",
			"53rd_Ares_Nox_Ghillie_Lush2_Full",
			"53rd_Ares_Nox_Ghillie_SemiArid_Full",
			"53rd_ODST_Uniform_Urban",
			"53rd_ODST_Uniform_Winter",
			"53rd_ODST_Uniform_Woodland",
			"53rd_ODST_Uniform_Woodland2",
			"53rd_ODST_Uniform_Arid"	
		}; 
        requiredVersion = 0.1; 
        requiredAddons[] = 
		{
			"OPTRE_Core"
		}; 
    }; 
};

class cfgVehicles
{
//////////////////////////// Ghillie ////////////////////////////
	class B_sniper_F;
	class B_ghillie_lsh_F;

	class 53rd_Ares_Nox_Ghillie_Winter_Half_F: B_sniper_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Winter_Half";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Winter.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_Winter.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Urban_Half_F: 53rd_Ares_Nox_Ghillie_Winter_Half_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Urban_Half";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Urban.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_Urban.paa"
		};
	};
	
	class 53rd_Ares_Nox_Ghillie_Woodland_Half_F: 53rd_Ares_Nox_Ghillie_Winter_Half_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Woodland_Half";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_Woodland.paa"
		};
	};
	
	class 53rd_Ares_Nox_Ghillie_SemiArid_Half_F: 53rd_Ares_Nox_Ghillie_Winter_Half_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_SemiArid_Half";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_SemiArid.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Arid_Half_F: 53rd_Ares_Nox_Ghillie_Winter_Half_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Arid_Half";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Desert.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_Desert.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Winter_Full_F: B_ghillie_lsh_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Winter_Full";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Winter.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Winter.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Urban_Full_F: 53rd_Ares_Nox_Ghillie_Winter_Full_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Urban_Full";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Urban.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Urban.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Jungle_Full_F: 53rd_Ares_Nox_Ghillie_Winter_Full_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Jungle_Full";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Jungle.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Jungle2_Full_F: 53rd_Ares_Nox_Ghillie_Winter_Full_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Jungle2_Full";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Jungle2.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Lush_Full_F: 53rd_Ares_Nox_Ghillie_Winter_Full_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Lush_Full";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Lush.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Lush2_Full_F: 53rd_Ares_Nox_Ghillie_Winter_Full_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Lush2_Full";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Lush2.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_Arid_Full_F: 53rd_Ares_Nox_Ghillie_Winter_Full_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_Arid_Full";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Arid.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Arid.paa"
		};
	};

	class 53rd_Ares_Nox_Ghillie_SemiArid_Full_F: 53rd_Ares_Nox_Ghillie_Winter_Full_F
	{
		author="53rd Aux Team";
		displayName="TEST";
		scope=1;
		uniformClass="53rd_Ares_Nox_Ghillie_SemiArid_Full";
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Arid.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_SemiArid.paa"
		};
	};

//////////////////////////// Uniform ////////////////////////////
	class MA_M56S_BDU_Base;
	class 53rd_Nox_Urban_F: MA_M56S_BDU_Base
	{
		scope=1;
		UniformClass="53rd_ODST_Uniform_Urban";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Undersuit_Urban.paa"
		};
	};

	class 53rd_Nox_Winter_F: MA_M56S_BDU_Base
	{
		scope=1;
		UniformClass="53rd_ODST_Uniform_Winter";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Undersuit_Winter.paa"
		};
	};

	class 53rd_Nox_Woodland_F: MA_M56S_BDU_Base
	{
		scope=1;
		UniformClass="53rd_ODST_Uniform_Woodland";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Undersuit_Woodland.paa"
		};
	};

	class 53rd_Nox_Woodland2_F: MA_M56S_BDU_Base
	{
		scope=1;
		UniformClass="53rd_ODST_Uniform_Woodland2";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Undersuit_Woodland.paa"
		};
	};

	class 53rd_Nox_Arid_F: MA_M56S_BDU_Base
	{
		scope=1;
		UniformClass="53rd_ODST_Uniform_Arid";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Undersuit_Arid.paa"
		};
	};

};

class cfgWeapons
{
    class UniformItem;		
	class Uniform_Base;
	class 53rd_Nox_Uniform_Urban;

	class 53rd_Ares_Nox_Ghillie_Winter_Half: 53rd_Nox_Uniform_Urban
	{
		author="53rd Aux Team";
		scope=2;
		displayName="[53rd] Nox Ghillie (Half / Winter)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Urban.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_Urban.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="53rd_Ares_Nox_Ghillie_Winter_Half_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Urban_Half: 53rd_Ares_Nox_Ghillie_Winter_Half
	{
		author="53rd Aux Team";
		scope=2;
		displayName="[53rd] Nox Ghillie (Half / Urban)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Urban.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_Urban.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="53rd_Ares_Nox_Ghillie_Urban_Half_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Arid_Half: 53rd_Ares_Nox_Ghillie_Winter_Half
	{
		author="53rd Aux Team";
		scope=2;
		displayName="[53rd] Nox Ghillie (Half / Arid)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Desert.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_Desert.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="53rd_Ares_Nox_Ghillie_Arid_Half_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Woodland_Half: 53rd_Ares_Nox_Ghillie_Winter_Half
	{
		author="53rd Aux Team";
		scope=2;
		displayName="[53rd] Nox Ghillie (Half / Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_Woodland.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="53rd_Ares_Nox_Ghillie_Woodland_Half_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_SemiArid_Half: 53rd_Ares_Nox_Ghillie_Winter_Half
	{
		author="53rd Aux Team";
		scope=2;
		displayName="[53rd] Nox Ghillie (Half / Arid Alt)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Half_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Half_SemiArid.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="53rd_Ares_Nox_Ghillie_SemiArid_Half_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Winter_Full: 53rd_Ares_Nox_Ghillie_Winter_Half
	{
		scope=2;
		displayName="[53rd] Nox Ghillie (Full / Winter)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Winter.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Winter.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "53rd_Ares_Nox_Ghillie_Winter_Full_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Urban_Full: 53rd_Ares_Nox_Ghillie_Urban_Half
	{
		scope=2;
		displayName="[53rd] Nox Ghillie (Full / Urban)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Urban.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Urban.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "53rd_Ares_Nox_Ghillie_Urban_Full_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Arid_Full: 53rd_Ares_Nox_Ghillie_Arid_Half
	{
		scope=2;
		displayName="[53rd] Nox Ghillie (Full / Arid)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Arid.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Arid.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "53rd_Ares_Nox_Ghillie_Arid_Full_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Jungle_Full: 53rd_Ares_Nox_Ghillie_Woodland_Half
	{
		scope=2;
		displayName="[53rd] Nox Ghillie (Full / Jungle)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Jungle.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "53rd_Ares_Nox_Ghillie_Jungle_Full_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Jungle2_Full: 53rd_Ares_Nox_Ghillie_Woodland_Half
	{
		scope=2;
		displayName="[53rd] Nox Ghillie (Full / Jungle Alt.)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Jungle2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "53rd_Ares_Nox_Ghillie_Jungle2_Full_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Lush_Full: 53rd_Ares_Nox_Ghillie_Woodland_Half
	{
		scope=2;
		displayName="[53rd] Nox Ghillie (Full / Lush)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Lush.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "53rd_Ares_Nox_Ghillie_Lush_Full_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_Lush2_Full: 53rd_Ares_Nox_Ghillie_Woodland_Half
	{
		scope=2;
		displayName="[53rd] Nox Ghillie (Full / Lush Alt.)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Woodland.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_Lush2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "53rd_Ares_Nox_Ghillie_Lush2_Full_F";
		};
	};

	class 53rd_Ares_Nox_Ghillie_SemiArid_Full: 53rd_Ares_Nox_Ghillie_Woodland_Half
	{
		scope=2;
		displayName="[53rd] Nox Ghillie (Full / Arid Alt.)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		hiddenSelectionsTextures[] = 
		{
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Uni_Full_Arid.paa",
			"\53rd_Aux\Ares\Nox\53rd_Ghillie_Full_SemiArid.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "53rd_Ares_Nox_Ghillie_SemiArid_Full_F";
		};
	};

};
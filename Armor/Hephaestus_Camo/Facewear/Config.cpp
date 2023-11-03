class CfgPatches
{
	class 53rd_Facewear
	{
		units[]=
		{};
		weapons[]=
		{};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};

class cfgGlasses
{
	class G_Balaclava_TI_blk_F;
	class 53rd_Balaclava_Woodland: G_Balaclava_TI_blk_F
	{
		author="Cherryy";
		displayName="[53rd] Balaclava (Woodland)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_aux\Armor\Hephaestus_Camo\Facewear\53rd_Balaclava_Woodland.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Halo_marine_02\Facewear\V_BGH.rvmat"
		};
	};
	class 53rd_Balaclava_Desert: 53rd_Balaclava_Woodland
	{
		displayName="[53rd] Balaclava (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_aux\Armor\Hephaestus_Camo\Facewear\53rd_Balaclava_Desert.paa"
		};
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
	class 53rd_Balaclava_Winter: 53rd_Balaclava_Woodland
	{
		displayName="[53rd] Balaclava (Winter)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_aux\Armor\Hephaestus_Camo\Facewear\53rd_Balaclava_Winter.paa"
		};
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
    	class 53rd_Balaclava_Urban: 53rd_Balaclava_Woodland
	{
		displayName="[53rd] Balaclava (Urban)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_aux\Armor\Hephaestus_Camo\Facewear\53rd_Balaclava_Urban.paa"
		};
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
};

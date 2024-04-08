
/*
class CfgPatches {
	class Hephaestus_Uniforms {
		units[] = 
        {
            "53rd_Hephaestus_BDU_V_Slim"
        };
		weapons[] = 
        {
            "53rd_Hephaestus_BDU_Slim"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VES_BDU_Evolved_Slim;
	class VES_BDU_R_Evolved_Slim;
	class VES_BDU_SS_Evolved_Slim;

// Urban Uniform
class 53rd_Hephaestus_BDU_Slim: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_V_Slim";
		};
	};
class 53rd_Hephaestus_BDU_R_Slim: VES_BDU_R_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Rolled";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_R_V_Slim";
		};
	};
class 53rd_Hephaestus_BDU_SS_Slim: VES_BDU_SS_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Short Sleeve";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_SS_V_Slim";
		};
	};
// Desert Uniform
class 53rd_Hephaestus_BDU_Slim_Desert: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform (Desert)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_V_Slim_Desert";
		};
	};
class 53rd_Hephaestus_BDU_R_Slim_Desert: VES_BDU_R_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Rolled (Desert)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_R_V_Slim_Desert";
		};
	};
class 53rd_Hephaestus_BDU_SS_Slim_Desert: VES_BDU_SS_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Short Sleeve (Desert)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_SS_V_Slim_Desert";
		};
	};
// Snow Uniform
class 53rd_Hephaestus_BDU_Slim_Snow: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform (Snow)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_V_Slim_Snow";
		};
	};
class 53rd_Hephaestus_BDU_R_Slim_Snow: VES_BDU_R_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Rolled (Snow)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_R_V_Slim_Snow";
		};
	};
class 53rd_Hephaestus_BDU_SS_Slim_Snow: VES_BDU_SS_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Short Sleeve (Snow)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_SS_V_Slim_Snow";
		};
	};
// Woodland Uniform
class 53rd_Hephaestus_BDU_Slim_Woodland: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform (Woodland)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_V_Slim_Woodland";
		};
	};
class 53rd_Hephaestus_BDU_R_Slim_Woodland: VES_BDU_R_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Rolled (Woodland)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_R_V_Slim_Woodland";
		};
	};
class 53rd_Hephaestus_BDU_SS_Slim_Woodland: VES_BDU_SS_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Short Sleeve (Woodland)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_SS_V_Slim_Woodland";
		};
	};
//Tanker Uniforms
class 53rd_Apollo_BDU_Slim_Woodland: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Body";
		displayName="[53rd] Combat Uniform (Apollo)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Apollo_BDU_V_Slim_Woodland";
		};
	};
class 53rd_Apollo_BDU_R_Slim_Woodland: VES_BDU_R_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Body";
		displayName="[53rd] Combat Uniform Rolled (Apollo)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Apollo_BDU_R_V_Slim_Woodland";
		};
	};
class 53rd_Apollo_BDU_SS_Slim_Woodland: VES_BDU_SS_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Body";
		displayName="[53rd] Combat Uniform Short Sleeve (Apollo)";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Apollo_BDU_SS_V_Slim_Woodland";
		};
	};
};



class CfgVehicles
{
class VES_BDU_V_Evolved_Slim;
class VES_BDU_R_V_Evolved_Slim;
class VES_BDU_SS_V_Evolved_Slim;

//Urban Uniform
class 53rd_Hephaestus_BDU_V_Slim: VES_BDU_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_Slim";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO",
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO"
		};
	};
class 53rd_Hephaestus_BDU_R_V_Slim: VES_BDU_R_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_R_Slim";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Uniforms\V_BDU_R_Evolved_CO",
            "V_FZ_Armor\Data\Uniforms\V_BDU_R_Evolved_CO"
        };
	};
class 53rd_Hephaestus_BDU_SS_V_Slim: VES_BDU_SS_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_SS_Slim";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Uniforms\V_BDU_R_Evolved_CO",
            "V_FZ_Armor\Data\Uniforms\V_BDU_R_Evolved_CO"
        };
	};
//Desert Uniform
class 53rd_Hephaestus_BDU_V_Slim_Desert: VES_BDU_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_Slim_Desert";
		hiddenSelectionsTextures[]=
		{
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-DES2.paa",
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-DES2.paa"
		};
	};
class 53rd_Hephaestus_BDU_R_V_Slim_Desert: VES_BDU_R_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_R_Slim_Desert";
		hiddenSelectionsTextures[] = 
        {
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-DES2.paa",
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-DES2.paa"
        };
	};
class 53rd_Hephaestus_BDU_SS_V_Slim_Desert: VES_BDU_SS_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_SS_Slim_Desert";
		hiddenSelectionsTextures[] = 
        {
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-DES2.paa",
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-DES2.paa"
        };
	};
//Snow Uniform
class 53rd_Hephaestus_BDU_V_Slim_Snow: VES_BDU_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_Slim_Snow";
		hiddenSelectionsTextures[]=
		{
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-SNO.paa",
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-SNO.paa"
		};
	};
class 53rd_Hephaestus_BDU_R_V_Slim_Snow: VES_BDU_R_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_R_Slim_Snow";
		hiddenSelectionsTextures[] = 
        {
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-SNO.paa",
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-SNO.paa"
        };
	};
class 53rd_Hephaestus_BDU_SS_V_Slim_Snow: VES_BDU_SS_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_SS_Slim_Snow";
		hiddenSelectionsTextures[] = 
        {
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-SNO.paa",
			"TCF_EQUIPMENT\Uniforms\BDU\data\UNSC-A-SNO.paa"
        };
	};
//Woodland Uniform
class 53rd_Hephaestus_BDU_V_Slim_Woodland: VES_BDU_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_Slim_Woodland";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Uniforms\53rd_Hephaestus_Uniform_Woodland.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_Hephaestus_Uniform_Woodland.paa"
		};
	};
class 53rd_Hephaestus_BDU_R_V_Slim_Woodland: VES_BDU_R_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_R_Slim_Woodland";
		hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Uniforms\53rd_Hephaestus_Uniform_Woodland.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_Hephaestus_Uniform_Woodland.paa"
        };
	};
class 53rd_Hephaestus_BDU_SS_V_Slim_Woodland: VES_BDU_SS_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_SS_Slim_Woodland";
		hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Uniforms\53rd_Hephaestus_Uniform_Woodland.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_Hephaestus_Uniform_Woodland.paa"
        };
	};
	
//Apollo
	class 53rd_Apollo_BDU_V_Slim_Woodland: VES_BDU_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Apollo_BDU_Slim_Woodland";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Uniforms\53rd_Apollo.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_Apollo.paa"
		};
	};
class 53rd_Apollo_BDU_R_V_Slim_Woodland: VES_BDU_R_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Apollo_BDU_R_Slim_Woodland";
		hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Uniforms\53rd_Apollo.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_Apollo.paa"
        };
	};
class 53rd_Apollo_BDU_SS_V_Slim_Woodland: VES_BDU_SS_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Apollo_BDU_SS_Slim_Woodland";
		hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Uniforms\53rd_Apollo.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_Apollo.paa"
        };
	};
};
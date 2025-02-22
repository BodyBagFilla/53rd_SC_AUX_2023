#include "BIS_AddonInfo.hpp"
class CfgPatches 
{
	class 53rd_Atlas_Camo_Customs
	{
			units[] = 
			{
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
    class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class Hands;
	class Pelvis;
	class ItemCore;
	class haloinfodst_U_uniform;
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	class TCF_Reach_Scout_Helmet;
	class MA_Helmet_Base;
	class MA_M56SH_Helmet: MA_Helmet_Base
	{
		class ItemInfo;
	};
	//Custom Armor
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class haloinfmar_U_WDL_uniform: Uniform_Base
	{
		class ItemInfo;
	};
	class 53rd_Atlas_Hellfire_Armor: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Hellfire / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Armor_Urban.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Armor_Urban.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Hellfire_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Hellfire_Armor_SN: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Hellfire / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Armor_Winter.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Armor_Winter.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Hellfire_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Hellfire_Armor_WD: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Hellfire / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Armor_Woodland.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Armor_Woodland.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Hellfire_WD_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Hellfire_Armor_DS: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Hellfire / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Armor_Desert.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Armor_Desert.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Hellfire_DS_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_LoneWulf_Armor: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (LoneWulf / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Armor_Urban.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Armor_Urban.paa" 
			};
		uniformModel="-";
		uniformType = "Neopren";
		uniformClass="53rd_LoneWulf_V";
		containerClass="Supply150";
		mass=80;
		};
	};
	class 53rd_Atlas_LoneWulf_Armor_SN: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (LoneWulf / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Armor_Winter.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Armor_Winter.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_LoneWulf_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	
	};
	class 53rd_Atlas_LoneWulf_Armor_DS: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (LoneWulf / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Armor_Desert.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Armor_Desert.paa"  
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_LoneWulf_DS_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_LoneWulf_Armor_WD: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (LoneWulf / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Armor_Woodland.paa"  
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Armor_Woodland.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_LoneWulf_WD_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Serpent_Armor: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Serpent / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Urban\Serpent_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Urban\Serpent_Custom_Armor_Urban.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Serpent\Urban\Serpent_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Urban\Serpent_Custom_Armor_Urban.paa" 
			};
		uniformModel="-";
		uniformType = "Neopren";
		uniformClass="53rd_Serpent_V";
		containerClass="Supply150";
		mass=80;
		};
	};
	class 53rd_Atlas_Serpent_Armor_SN: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Serpent / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Snow\Serpent_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Snow\Serpent_Custom_Armor_Winter.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Serpent\Snow\Serpent_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Snow\Serpent_Custom_Armor_Winter.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Serpent_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Serpent_Armor_DS: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Serpent / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Desert\Serpent_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Desert\Serpent_Custom_Armor_Desert.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Serpent\Desert\Serpent_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Desert\Serpent_Custom_Armor_Desert.paa"  
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Serpent_DS_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Serpent_Armor_WD: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Serpent / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Armor_Woodland.paa"  
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Armor_Woodland.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Serpent_WD_V";
			containerClass="Supply150";
			mass=80;
		};
	};
		
/*class 53rd_Atlas_Tsuki_Armor: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Tsuki / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Top.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Armor.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Top.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Armor.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Tsuki_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_Tsuki_Armor_SN: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Tsuki / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa"   
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Tsuki_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_Tsuki_Armor_DS: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Tsuki / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Top_DS.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Armor_DS.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Top_DS.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Armor_DS.paa"  
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Tsuki_DS_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_Tsuki_Armor_WD: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Tsuki / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Top_WD.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Armor_WD.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Top_WD.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Armor_WD.paa"  
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Tsuki_WD_V";
			containerClass="Supply150";
			mass=80;
		};
	};*/
	
	class 53rd_Atlas_Texas_Armor: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Texas / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Urban\A_Armor_Texas_Custom_Urban.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Urban\A_Armor_Texas_Custom_Urban.paa" 
			};
		uniformModel="-";
		uniformType = "Neopren";
		uniformClass="53rd_Texas_V";
		containerClass="Supply150";
		mass=80;
		};
	};
	class 53rd_Atlas_Texas_Armor_Winter: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Texas / Winter)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Snow\A_Armor_Texas_Custom_Winter.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Snow\A_Armor_Texas_Custom_Winter.paa" 
			};
		uniformModel="-";
		uniformType = "Neopren";
		uniformClass="53rd_Texas_SN_V";
		containerClass="Supply150";
		mass=80;
		};
	};
	class 53rd_Atlas_Texas_Armor_Desert: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Texas / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Desert\A_Armor_Texas_Custom_Desert.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Desert\A_Armor_Texas_Custom_Desert.paa" 
			};
		uniformModel="-";
		uniformType = "Neopren";
		uniformClass="53rd_Texas_DS_V";
		containerClass="Supply150";
		mass=80;
		};
		
	};
	class 53rd_Atlas_Texas_Armor_Woodland: haloinfmar_U_WDL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Texas / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Woodland\A_Armor_Texas_Custom_Woodland.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Woodland\A_Armor_Texas_Custom_Woodland.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Texas_WD_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	//Axe
		class 53rd_Atlas_Axe_Armor: haloinfmar_U_WDL_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Axe / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Urban.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Urban.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Axe_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Axe_Armor_SN: haloinfmar_U_WDL_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Axe / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Winter.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Winter.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Axe_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Axe_Armor_WD: haloinfmar_U_WDL_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Axe / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Woodland.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Woodland.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Axe_WD_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Axe_Armor_DS: haloinfmar_U_WDL_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Axe / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Desert.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Desert.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Axe_DS_V";
			containerClass="Supply150";
			mass=80;
		};
	};

	//Theta
		class 53rd_Atlas_Theta_Armor: haloinfmar_U_WDL_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Theta / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Urban.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Urban.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Theta_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Theta_Armor_SN: haloinfmar_U_WDL_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Theta / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Winter.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Winter.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Theta_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Theta_Armor_WD: haloinfmar_U_WDL_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Theta / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Woodland.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Woodland.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Theta_WD_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Theta_Armor_DS: haloinfmar_U_WDL_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom (Theta / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Desert.paa" 
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Desert.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Theta_DS_V";
			containerClass="Supply150";
			mass=80;
		};
	};




	//Custom Helmets
	class 53rd_Atlas_Hellfire_Custom_Helmet: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Hellfire / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Helmet.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Hellfire / Urban) (Dp)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Helmet.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Hellfire / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Helmet_SN.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_SN_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Hellfire / Snow) (Dp)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Helmet_SN.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_WD: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Hellfire / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Helmet_WD.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_WD_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Hellfire / Woodland) (Dp)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Helmet_WD.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_DS: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Hellfire / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Helmet_DS.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_DS_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Hellfire / Desert) (Dp)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Helmet_DS.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet: MA_M56SH_Helmet
	{
		dlc="53rd";
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		displayName="[53rd] Atlas Custom (LoneWulf / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Urban\53rd_Lonewulf_Custom_Helmet_Urban.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\53rd_Lonewulf_Custom_Visor.paa"
		};
		class ItemInfo;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=50;
				explosionShielding = 3;
				passThrough=0.3;
			};
			class Face
			{
				hitpointName="HitFace";
				armor=50;
				explosionShielding = 3;
				passThrough=0.3;
			};
			class Neck
			{
				armor=50;
				hitpointName="HitNeck";
				explosionShielding = 3;
				passThrough=0.1;
			};
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_SN: 53rd_Atlas_LoneWulf_Custom_Helmet
	{
		dlc="53rd";
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom (LoneWulf / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Snow\53rd_Lonewulf_Custom_Helmet_Winter.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\53rd_Lonewulf_Custom_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_DS: 53rd_Atlas_LoneWulf_Custom_Helmet
	{
		dlc="53rd";
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom (LoneWulf / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Desert\53rd_Lonewulf_Custom_Helmet_Desert.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\53rd_Lonewulf_Custom_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_WD: 53rd_Atlas_LoneWulf_Custom_Helmet
	{
		dlc="53rd";
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom (LoneWulf / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Woodland\53rd_Lonewulf_Custom_Helmet_Woodland.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\53rd_Lonewulf_Custom_Visor.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Custom (Serpent / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Urban\Serpent_Custom_Helmet_Urban.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Custom (Serpent / Urban) dp";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Urban\Serpent_Custom_Helmet_Urban.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_SN: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Custom (Serpent / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Snow\Serpent_Custom_Helmet_Winter.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_SN_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Custom (Serpent / Snow) dp";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Snow\Serpent_Custom_Helmet_Winter.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_DS: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Custom (Serpent / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Desert\Serpent_Custom_Helmet_Desert.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_DS_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Custom (Serpent / Desert) dp";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Desert\Serpent_Custom_Helmet_Desert.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_WD: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Custom (Serpent / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Helmet_Woodland.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_WD_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Custom (Serpent / Woodland) dp";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Helmet_Woodland.paa"
		};
	};
	class 53rd_Atlas_Texas_Custom_Helmet: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki"; 
		displayName="[53rd] Atlas Custom (Texas / Urban)"; 
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_Atlas\Atlas_Customs\Texas\Urban\A_Texas_Scout_Custom_Urban.paa", 
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_dp: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=1; 
		scopeArsenal=1; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Atlas Custom (Texas / Urban) (Dp)"; 
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_Atlas\Atlas_Customs\Texas\Desert\A_Texas_Scout_Custom_Urban.paa", 
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_SN: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=2; 
		scopeArsenal=2; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Atlas Custom (Texas / Snow)"; 
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_Atlas\Atlas_Customs\Texas\Snow\A_Texas_Scout_Custom_Winter.paa", 
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_SN_dp: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=1; 
		scopeArsenal=1; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Atlas Custom (Texas / Snow) (Dp)"; 
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_Atlas\Atlas_Customs\Texas\Snow\A_Texas_Scout_Custom_Winter.paa", 
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		}; 
	};
	class 53rd_Atlas_Texas_Custom_Helmet_Desert: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=2; 
		scopeArsenal=2; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Atlas Custom (Texas / Desert)"; 
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_Atlas\Atlas_Customs\Texas\Desert\A_Texas_Scout_Custom_Desert.paa", 
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_Desert_dp: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=1;  
		scopeArsenal=1; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Atlas Custom (Texas / Desert) (Dp)"; 
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_Atlas\Atlas_Customs\Texas\Desert\A_Texas_Scout_Custom_Desert.paa", 
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_WD: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=2; 
		scopeArsenal=2; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Atlas Custom (Texas / Woodland)"; 
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_Atlas\Atlas_Customs\Texas\Woodland\A_Texas_Scout_Custom_Woodland.paa", 
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_WD_dp: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=1;  
		scopeArsenal=1; 
		side=1;  
		author="Tsuki"; 
		displayName="[53rd] Atlas Custom (Texas / Woodland) (Dp)"; 
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_Atlas\Atlas_Customs\Texas\Woodland\A_Texas_Scout_Custom_Woodland.paa", 
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Axe_Helmet_Urban: HaloInf_Marine_WDL_headgear
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Axe / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Helmet.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Axe_Helmet_Winter: HaloInf_Marine_WDL_headgear
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Axe / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Helmet_Winter.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Axe_Helmet_Woodland: HaloInf_Marine_WDL_headgear
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Axe / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Helmet_Woodland.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Axe_Helmet_Desert: HaloInf_Marine_WDL_headgear
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Custom (Axe / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Helmet_Desert.paa",
			"53rd_Atlas\Atlas_Customs\Visor_CO.paa"
		};
	};





};
//Rifleman 2
class cfgvehicles
{
	class B_Soldier_base_F;
	class haloinf_Marine_Soldier_base_F: B_Soldier_base_F{};
	class HaloInf_Marine_WDL_F: haloinf_Marine_Soldier_base_F
	{
	class UniformItem;
	};
	class 53rd_base_F: HaloInf_Marine_WDL_F
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="[53rd] Base Uniform";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Unit_Base";
			containerClass="Supply100";
			mass=80;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	class 53rd_Hellfire_V: 53rd_base_F
	{
			scope=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Hellfire_Urban_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Armor_Urban.paa"
			};
			uniformClass="53rd_Atlas_Hellfire_Armor";
	};
	class 53rd_Hellfire_SN_V: 53rd_Hellfire_V
	{
			displayName="[53rd] Hellfire_Snow_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Hellfire_Armor_SN";
	};
	class 53rd_Hellfire_WD_V: 53rd_Hellfire_V
	{
			displayName="[53rd] Hellfire_Woodland_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Armor_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_Hellfire_Armor_WD";
	};
	class 53rd_Hellfire_DS_V: 53rd_Hellfire_V
	{
			displayName="[53rd] Hellfire_Desert_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Armor_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Hellfire_Armor_DS";
	};
	class 53rd_LoneWulf_V: 53rd_base_F
	{
			scope=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Lone Urban V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Armor_Urban.paa" 
			};
			uniformClass="53rd_Atlas_LoneWulf_Armor";
	};
	class 53rd_LoneWulf_SN_V: 53rd_LoneWulf_V
	{
			displayName="[53rd] Wulf Winter V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_LoneWulf_Armor_SN";
	};
	class 53rd_LoneWulf_DS_V: 53rd_LoneWulf_V
	{
			displayName="[53rd] Wulf Desert V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Armor_Desert.paa"  
			};
			uniformClass="53rd_Atlas_LoneWulf_Armor_DS";
	};
	class 53rd_LoneWulf_WD_V: 53rd_LoneWulf_V
	{
			displayName="[53rd] Wulf Woodland V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Armor_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_LoneWulf_Armor_WD";
	};
	class 53rd_Serpent_V: 53rd_base_F
	{
			scope=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Serpent Urban V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Serpent\Urban\Serpent_Custom_Top_Urban.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Urban\Serpent_Custom_Armor_Urban.paa" 
			};
			uniformClass="53rd_Atlas_Serpent_Armor";
	};
	class 53rd_Serpent_SN_V: 53rd_Serpent_V
	{
			displayName="[53rd] Serpent Winter V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Serpent\Snow\Serpent_Custom_Top_Winter.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Snow\Serpent_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Serpent_Armor_SN";
	};
	class 53rd_Serpent_DS_V: 53rd_Serpent_V
	{
			displayName="[53rd] Serpent Desert V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Serpent\Desert\Serpent_Custom_Top_Desert.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Desert\Serpent_Custom_Armor_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Serpent_Armor_DS";
	};
	class 53rd_Serpent_WD_V: 53rd_Serpent_V
	{
			displayName="[53rd] Serpent Woodland V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Top_Woodland.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Armor_Woodland.paa"  
			};
			uniformClass="53rd_Atlas_Serpent_Armor_WD";
	};
	/*class 53rd_Tsuki_V: haloinf_Marine_Soldier_base_F
	{
			displayName="[53rd] Hellfire_Woodland_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Hellfire\Snow\Hellfire_Custom_Top_SN.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Hellfire\Snow\Hellfire_Custom_Armor_SN.paa"  
			};
	};
	class 53rd_Tsuki_SN_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
			uniformType = "Neopren";
			linkedItems[]=
			{
				"HaloInf_Marine_WDL_UNSC_headgear",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
	};
	class 53rd_Tsuki_DS_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Top_DS.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Armor_DS.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
			uniformType = "Neopren";
			linkedItems[]=
			{
				"HaloInf_Marine_WDL_UNSC_headgear",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
	};
	class 53rd_Tsuki_WD_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Top_WD.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_Atlas\Atlas_Camo\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Armor_WD.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
			uniformType = "Neopren";
			linkedItems[]=
			{
				"HaloInf_Marine_WDL_UNSC_headgear",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
	};*/
	class 53rd_Texas_V: 53rd_base_F
	{
			scope=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Texas Urban V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Urban\A_Armor_Texas_Custom_Urban.paa" 
			};
			uniformClass="53rd_Atlas_Texas_Armor";
	};
	class 53rd_Texas_SN_V: 53rd_Texas_V
	{
			displayName="[53rd] Texas Winter V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Snow\A_Armor_Texas_Custom_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Texas_Armor_Winter";
	};
	class 53rd_Texas_DS_V: 53rd_Texas_V
	{
			displayName="[53rd] Texas Desert V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Desert\A_Armor_Texas_Custom_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Texas_Armor_Desert";
	};
	class 53rd_Texas_WD_V: 53rd_Texas_V
	{
			displayName="[53rd] Texas Woodland";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Texas\Woodland\A_Armor_Texas_Custom_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_Texas_Armor_Woodland";
	};
	//Axe
	class 53rd_Axe_V: 53rd_base_F
	{
			scope=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Axe";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Urban.paa"
			};
			uniformClass="53rd_Atlas_Axe_Armor";
	};
	class 53rd_Axe_SN_V: 53rd_Axe_V
	{
			displayName="[53rd] Axe_Snow_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Axe_Armor_SN";
	};
	class 53rd_Axe_WD_V: 53rd_Axe_V
	{
			displayName="[53rd] Axe_Woodland_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_Axe_Armor_WD";
	};
	class 53rd_Axe_DS_V: 53rd_Axe_V
	{
			displayName="[53rd] Axe_Desert_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Axe\Axe_Custom_Armor_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Axe_Armor_DS";
	};

	//Theta
	class 53rd_Theta_V: 53rd_base_F
	{
			scope=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Theta";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Urban.paa"
			};
			uniformClass="53rd_Atlas_Theta_Armor";
	};
	class 53rd_Theta_SN_V: 53rd_Theta_V
	{
			displayName="[53rd] Theta_Snow_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Theta_Armor_SN";
	};
	class 53rd_Theta_WD_V: 53rd_Theta_V
	{
			displayName="[53rd] Theta_Woodland_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_Theta_Armor_WD";
	};
	class 53rd_Theta_DS_V: 53rd_Theta_V
	{
			displayName="[53rd] Theta_Desert_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Customs\Theta\Theta_Custom_Armor_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Theta_Armor_DS";
	};



};
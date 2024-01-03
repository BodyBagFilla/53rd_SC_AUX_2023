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
		displayName="[53rd] Custom Armors (Hellfire / Urban)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Armor_Urban.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Armor_Urban.paa" 
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
		displayName="[53rd] Custom Armors (Hellfire / Snow)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Armor_Winter.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Armor_Winter.paa" 
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
		displayName="[53rd] Custom Armors (Hellfire / Woodland)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Armor_Woodland.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Armor_Woodland.paa" 
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
		displayName="[53rd] Custom Armors (Hellfire / Desert)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Armor_Desert.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Armor_Desert.paa" 
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
		displayName="[53rd] LoneWulf Custom Armor (Urban)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Armor_Urban.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Armor_Urban.paa" 
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
		displayName="[53rd] Custom Armors (LoneWulf / Snow)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Armor_Winter.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Armor_Winter.paa" 
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
		displayName="[53rd] Custom Armors (LoneWulf / Desert)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Armor_Desert.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Armor_Desert.paa"  
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
		displayName="[53rd] Custom Armors (LoneWulf / Woodland)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Armor_Woodland.paa"  
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
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Armor_Woodland.paa" 
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
		displayName="[53rd] Custom Armors (Serpent / Urban)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Urban\Serpent_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Urban\Serpent_Custom_Armor_Urban.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Urban\Serpent_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Urban\Serpent_Custom_Armor_Urban.paa" 
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
		displayName="[53rd] Custom Armors (Serpent / Snow)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Snow\Serpent_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Snow\Serpent_Custom_Armor_Winter.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Snow\Serpent_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Snow\Serpent_Custom_Armor_Winter.paa" 
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
		displayName="[53rd] Custom Armors (Serpent / Desert)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Desert\Serpent_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Desert\Serpent_Custom_Armor_Desert.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Desert\Serpent_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Desert\Serpent_Custom_Armor_Desert.paa"  
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
		displayName="[53rd] Custom Armors (Serpent / Woodland)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Armor_Woodland.paa"  
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
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Armor_Woodland.paa" 
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
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Top.paa",
			"53rd_SC_aux\Armor\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Armor.paa" 
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Top.paa",
			"53rd_SC_aux\Armor\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Armor.paa" 
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
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa" 
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa"   
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
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Top_DS.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Armor_DS.paa" 
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Top_DS.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Armor_DS.paa"  
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
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Top_WD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Armor_WD.paa" 
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Top_WD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Armor_WD.paa"  
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
		displayName="[53rd] Custom Armors (Texas / Urban)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Urban\A_Armor_Texas_Custom_Urban.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Urban\A_Armor_Texas_Custom_Urban.paa" 
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
		displayName="[53rd] Custom Armors (Texas / Winter)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Snow\A_Armor_Texas_Custom_Winter.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Snow\A_Armor_Texas_Custom_Winter.paa" 
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
		displayName="[53rd] Custom Armors (Texas / Desert)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Desert\A_Armor_Texas_Custom_Desert.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Desert\A_Armor_Texas_Custom_Desert.paa" 
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
		displayName="[53rd] Custom Armors (Texas / Woodland)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Woodland\A_Armor_Texas_Custom_Woodland.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Woodland\A_Armor_Texas_Custom_Woodland.paa" 
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
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Axe / Urban)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Urban.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Urban.paa" 
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
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Axe / Snow)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Winter.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Winter.paa" 
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
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Axe / Woodland)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Woodland.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Woodland.paa" 
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
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Axe / Desert)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Desert.paa" 
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
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Desert.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Axe_DS_V";
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
		displayName="[53rd] Custom Helmet (Hellfire / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Helmet.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Hellfire / Urban) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Helmet.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Hellfire / Snow)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Helmet_SN.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
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
		displayName="[53rd] Custom Helmet (Hellfire / Snow) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Helmet_SN.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_WD: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Hellfire / Woodland)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Helmet_WD.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
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
		displayName="[53rd] Custom Helmet (Hellfire / Woodland) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Helmet_WD.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Hellfire_Custom_Helmet_DS: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Hellfire / Desert)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Helmet_DS.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
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
		displayName="[53rd] Custom Helmet (Hellfire / Desert) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Helmet_DS.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Urban\A_Lonewulf_Scout_Custom_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Urban) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Urban\A_Lonewulf_Scout_Custom_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Snow)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Snow\A_Lonewulf_Scout_Custom_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_SN_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Snow) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Snow\A_Lonewulf_Scout_Custom_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_DS: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Desert)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Desert\A_Lonewulf_Scout_Custom_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_DS_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Desert) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Desert\A_Lonewulf_Scout_Custom_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_WD: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Woodland)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Woodland\A_Lonewulf_Scout_Custom_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_WD_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Woodland) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Woodland\A_Lonewulf_Scout_Custom_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Urban)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Urban\Serpent_Custom_Helmet_Urban.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Urban) dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Urban\Serpent_Custom_Helmet_Urban.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_SN: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Snow)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Snow\Serpent_Custom_Helmet_Winter.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_SN_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Snow) dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Snow\Serpent_Custom_Helmet_Winter.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_DS: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Desert)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Desert\Serpent_Custom_Helmet_Desert.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_DS_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Desert) dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Desert\Serpent_Custom_Helmet_Desert.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_WD: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Woodland)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Helmet_Woodland.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_WD_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Woodland) dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Helmet_Woodland.paa"
		};
	};
	class 53rd_Atlas_Texas_Custom_Helmet: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki"; 
		displayName="[53rd] Custom Helmet (Texas / Urban)"; 
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Urban\A_Texas_Scout_Custom_Urban.paa", 
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_dp: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=1; 
		scopeArsenal=1; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Custom Helmet (Texas / Urban) (Dp)"; 
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Desert\A_Texas_Scout_Custom_Urban.paa", 
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_SN: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=2; 
		scopeArsenal=2; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Custom Helmet (Texas / Snow)"; 
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Snow\A_Texas_Scout_Custom_Winter.paa", 
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_SN_dp: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=1; 
		scopeArsenal=1; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Custom Helmet (Texas / Snow) (Dp)"; 
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Snow\A_Texas_Scout_Custom_Winter.paa", 
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		}; 
	};
	class 53rd_Atlas_Texas_Custom_Helmet_Desert: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=2; 
		scopeArsenal=2; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Custom Helmet (Texas / Desert)"; 
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Desert\A_Texas_Scout_Custom_Desert.paa", 
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_Desert_dp: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=1;  
		scopeArsenal=1; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Custom Helmet (Texas / Desert) (Dp)"; 
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Desert\A_Texas_Scout_Custom_Desert.paa", 
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_WD: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=2; 
		scopeArsenal=2; 
		side=1; 
		author="Tsuki"; 
		displayName="[53rd] Custom Helmet (Texas / Woodland)"; 
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Woodland\A_Texas_Scout_Custom_Woodland.paa", 
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Texas_Custom_Helmet_WD_dp: TCF_Reach_Scout_Helmet 
	{ 
		dlc="53rd"; 
		scope=1;  
		scopeArsenal=1; 
		side=1;  
		author="Tsuki"; 
		displayName="[53rd] Custom Helmet (Texas / Woodland) (Dp)"; 
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d"; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Woodland\A_Texas_Scout_Custom_Woodland.paa", 
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		}; 
	}; 
	class 53rd_Atlas_Axe_Custom_Helmet_UB: HaloInf_Marine_WDL_headgear
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Axe / Urban)";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Helmet.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Axe_Custom_Helmet_SN: HaloInf_Marine_WDL_headgear
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Axe / Snow)";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Helmet_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Axe_Custom_Helmet_WD: HaloInf_Marine_WDL_headgear
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Axe / Woodland)";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Helmet_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Axe_Custom_Helmet_DS: HaloInf_Marine_WDL_headgear
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Axe / Desert)";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Helmet_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Visor_CO.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	class 53rd_Hellfire_V: 53rd_base_F
	{
			scope=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hellfire_Urban_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Urban\Hellfire_Custom_Armor_Urban.paa"
			};
			uniformClass="53rd_Atlas_Hellfire_Armor";
	};
	class 53rd_Hellfire_SN_V: 53rd_Hellfire_V
	{
			displayName="[53rd] Hellfire_Snow_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Snow\Hellfire_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Hellfire_Armor_SN";
	};
	class 53rd_Hellfire_WD_V: 53rd_Hellfire_V
	{
			displayName="[53rd] Hellfire_Woodland_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Woodland\Hellfire_Custom_Armor_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_Hellfire_Armor_WD";
	};
	class 53rd_Hellfire_DS_V: 53rd_Hellfire_V
	{
			displayName="[53rd] Hellfire_Desert_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Hellfire\Desert\Hellfire_Custom_Armor_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Hellfire_Armor_DS";
	};
	class 53rd_LoneWulf_V: 53rd_base_F
	{
			scope=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Lone Urban V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Urban\LoneWulf_Custom_Armor_Urban.paa" 
			};
			uniformClass="53rd_Atlas_LoneWulf_Armor";
	};
	class 53rd_LoneWulf_SN_V: 53rd_LoneWulf_V
	{
			displayName="[53rd] Wulf Winter V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Snow\LoneWulf_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_LoneWulf_Armor_SN";
	};
	class 53rd_LoneWulf_DS_V: 53rd_LoneWulf_V
	{
			displayName="[53rd] Wulf Desert V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Desert\LoneWulf_Custom_Armor_Desert.paa"  
			};
			uniformClass="53rd_Atlas_LoneWulf_Armor_DS";
	};
	class 53rd_LoneWulf_WD_V: 53rd_LoneWulf_V
	{
			displayName="[53rd] Wulf Woodland V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Lonewulf\Woodland\LoneWulf_Custom_Armor_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_LoneWulf_Armor_WD";
	};
	class 53rd_Serpent_V: 53rd_base_F
	{
			scope=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Serpent Urban V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Urban\Serpent_Custom_Top_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Urban\Serpent_Custom_Armor_Urban.paa" 
			};
			uniformClass="53rd_Atlas_Serpent_Armor";
	};
	class 53rd_Serpent_SN_V: 53rd_Serpent_V
	{
			displayName="[53rd] Serpent Winter V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Snow\Serpent_Custom_Top_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Snow\Serpent_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Serpent_Armor_SN";
	};
	class 53rd_Serpent_DS_V: 53rd_Serpent_V
	{
			displayName="[53rd] Serpent Desert V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Desert\Serpent_Custom_Top_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Desert\Serpent_Custom_Armor_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Serpent_Armor_DS";
	};
	class 53rd_Serpent_WD_V: 53rd_Serpent_V
	{
			displayName="[53rd] Serpent Woodland V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Serpent\Woodland\Serpent_Custom_Armor_Woodland.paa"  
			};
			uniformClass="53rd_Atlas_Serpent_Armor_WD";
	};
	/*class 53rd_Tsuki_V: haloinf_Marine_Soldier_base_F
	{
			displayName="[53rd] Hellfire_Woodland_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Hellfire\Snow\Hellfire_Custom_Top_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Hellfire\Snow\Hellfire_Custom_Armor_SN.paa"  
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa" 
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Top_DS.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Desert\Tsuki_Custom_Armor_DS.paa" 
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Top_WD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Customs\Tsuki\Woodland\Tsuki_Custom_Armor_WD.paa" 
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
			scope=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Texas Urban V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Urban\A_Armor_Texas_Custom_Urban.paa" 
			};
			uniformClass="53rd_Atlas_Texas_Armor";
	};
	class 53rd_Texas_SN_V: 53rd_Texas_V
	{
			displayName="[53rd] Texas Winter V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Snow\A_Armor_Texas_Custom_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Texas_Armor_Winter";
	};
	class 53rd_Texas_DS_V: 53rd_Texas_V
	{
			displayName="[53rd] Texas Desert V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Desert\A_Armor_Texas_Custom_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Texas_Armor_Desert";
	};
	class 53rd_Texas_WD_V: 53rd_Texas_V
	{
			displayName="[53rd] Texas Woodland";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Texas\Woodland\A_Armor_Texas_Custom_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_Texas_Armor_Woodland";
	};
	//Axe
	class 53rd_Axe_V: 53rd_base_F
	{
			scope=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Axe";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Urban.paa"
			};
			uniformClass="53rd_Atlas_Axe_Armor";
	};
	class 53rd_Axe_SN_V: 53rd_Axe_V
	{
			displayName="[53rd] Axe_Snow_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Winter.paa" 
			};
			uniformClass="53rd_Atlas_Axe_Armor_SN";
	};
	class 53rd_Axe_WD_V: 53rd_Axe_V
	{
			displayName="[53rd] Axe_Woodland_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Woodland.paa" 
			};
			uniformClass="53rd_Atlas_Axe_Armor_WD";
	};
	class 53rd_Axe_DS_V: 53rd_Axe_V
	{
			displayName="[53rd] Axe_Desert_V";
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Customs\Axe\Axe_Custom_Armor_Desert.paa" 
			};
			uniformClass="53rd_Atlas_Axe_Armor_DS";
	};
};
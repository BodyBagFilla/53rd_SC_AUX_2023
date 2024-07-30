class CfgPatches
{
	class 53rd_Sprays
	{
		author="Twitch";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"53rd_SprayCan",
			"53rd_Meme_Can"
		};
	};
};
class cfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class 53rd_ItemCore: CBA_MiscItem
	{
	};
	class 53rd_SprayCan: 53rd_ItemCore
	{
		author="Twitch";
		scope=2;
		displayname="Spray Paint (53rd)";
		descriptionShort="Leave your mark on the world or vandalize.";
		picture="\53rd_Sprays\UI\Helldiver_Squat.paa";
		model="\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
	class 53rd_Meme_Can: 53rd_SprayCan
	{
		displayName="Spray Paint (Time to Meme)";
		descriptionShort="Random images Twitch has collected from the server, will add more, cannot be stopped.";
		picture="\53rd_Sprays\sprays\Meme\Spray_Soyjak_Pointing_Old.paa";
	};
	class 53rd_Platoon_Can: 53rd_SprayCan
	{
		displayName="Spray Paint (Company Logo)";
		descriptionShort="Let the Innies know it's our terf...turf?.....yo.";
		picture="\53rd_Sprays\sprays\Platoon_Logos\Spray_Company_New_High_Res.paa";
	};
	class 53rd_Requested_Can: 53rd_SprayCan
	{
		displayName="Spray Paint (Unwanted Wanted Images)";
		descriptionShort="An item that lets you tag walls with images that represent the hearts and minds of the 53rd.";
		picture="\53rd_Sprays\sprays\Requested\Spray_Spins_Continously.paa";
	};
	class 53rd_Serious_Can : 53rd_SprayCan
	{
		displayName = "Spray Paint (Useful Images)";
		descriptionShort = "An item that lets you tag walls with images that are useful to operations.";
		picture = "\53rd_Sprays\UI\Spray_Ares_New_High_Res.paa";
	};
	
};
class ACE_Tags
{
	class 53rd_Logo_Random
	{
		displayName="SPIN_THE_WHEEL";
		requiredItem="53rd_Meme_Can";
		materials[]={};
		textures[]=
		{
			"\53rd_Sprays\sprays\Meme\Spray_Helldiver_Squat.paa",
			"\53rd_Sprays\sprays\Meme\Spray_SFC_LONE_WULF_THONK.paa",
			"\53rd_Sprays\sprays\Meme\Spray_Soyjak_Pointing_Old.paa",
			"\53rd_Sprays\sprays\Meme\Spray_Ullr_Rebel.paa",
			"\53rd_Sprays\sprays\Meme\Spray_KEEP_IT_CLEAN.paa",
		};
		icon="";
	};
	class 53rd_Meme: 53rd_Logo_Random
	{
		displayName="Helldiver_Squat";
		textures[]=
		{
			"\53rd_Sprays\sprays\Meme\Spray_Helldiver_Squat.paa"
		};
		icon="\53rd_Sprays\sprays\Meme\Spray_Helldiver_Squat.paa";
	};
	class 53rd_Wulf: 53rd_Meme
	{
		displayName="Thonk";
		textures[]=
		{
			"\53rd_Sprays\sprays\Meme\Spray_SFC_LONE_WULF_THONK.paa"
		};
		icon="\53rd_Sprays\sprays\Meme\Spray_SFC_LONE_WULF_THONK.paa";
	};
	class 53rd_Soyjack: 53rd_Meme
	{
		displayName="LOOK!";
		textures[]=
		{
			"\53rd_Sprays\sprays\Meme\Spray_Soyjak_Pointing_Old.paa"
		};
		icon="\53rd_Sprays\sprays\Meme\Spray_Soyjak_Pointing_Old.paa";
	};
	class 53rd_Rebel_Disguise: 53rd_Meme
	{
		displayName="Rebel Among Us";
		textures[]=
		{
			"\53rd_Sprays\sprays\Meme\Spray_Ullr_Rebel.paa"
		};
		icon="\53rd_Sprays\sprays\Meme\Spray_Ullr_Rebel.paa";
	};
	class 53rd_Keep_it_Clean : 53rd_Meme
	{
		displayName = "AI_Confusion";
		textures[] =
		{
			"\53rd_Sprays\sprays\Meme\Spray_KEEP_IT_CLEAN.paa"
		};
		icon = "\53rd_Sprays\sprays\Meme\Spray_KEEP_IT_CLEAN.paa";
	};
	class 53rd_Platoon_Logos_Random: 53rd_Logo_Random
	{
		displayName="Random";
		requiredItem="53rd_Platoon_Can";
		textures[]=
		{
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Apollo_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Ares_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Atlas_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Company_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Heph_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Nox_Logo.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Volare_New_High_Res.paa"
		};
	};
	class 53rd_Apollo: 53rd_Platoon_Logos_Random
	{
		displayName="Apollo";
		textures[]=
		{
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Apollo_New_High_Res.paa"
		};
		icon="\53rd_Sprays\sprays\Platoon_Logos\Spray_Apollo_New_High_Res.paa";
	};
	class 53rd_Ares: 53rd_Platoon_Logos_Random
	{
		displayName="Ares";
		textures[]=
		{
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Ares_New_High_Res.paa"
		};
		icon="\53rd_Sprays\sprays\Platoon_Logos\Spray_Ares_New_High_Res.paa";
	};
	class 53rd_Atlas: 53rd_Platoon_Logos_Random
	{
		displayName="Atlas";
		textures[]=
		{
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Atlas_New_High_Res.paa"
		};
		icon="\53rd_Sprays\sprays\Platoon_Logos\Spray_Atlas_New_High_Res.paa";
	};
	class 53rd_Strike_Company: 53rd_Platoon_Logos_Random
	{
		displayName="Strike Company";
		textures[]=
		{
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Company_New_High_Res.paa"
		};
		icon="\53rd_Sprays\sprays\Platoon_Logos\Spray_Company_New_High_Res.paa";
	};
	class 53rd_Heph: 53rd_Platoon_Logos_Random
	{
		displayName="Hephy";
		textures[]=
		{
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Heph_New_High_Res.paa"
		};
		icon="\53rd_Sprays\sprays\Platoon_Logos\Spray_Heph_New_High_Res.paa";
	};
	class 53rd_Nox: 53rd_Platoon_Logos_Random
	{
		displayName="Nox";
		textures[]=
		{
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Nox_Logo.paa"
		};
		icon="\53rd_Sprays\sprays\Platoon_Logos\Spray_Nox_Logo.paa";
	};
	class 53rd_Volare: 53rd_Platoon_Logos_Random
	{
		displayName = "Birb";
		textures[] =
		{
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Volare_New_High_Res.paa"
		};
		icon = "\53rd_Sprays\sprays\Platoon_Logos\Spray_Volare_New_High_Res.paa";
	};
	class 53rd_Requested_Random: 53rd_Logo_Random
	{
		displayName="Any Choice";
		requiredItem="53rd_Requested_Can";
		textures[]=
		{
			"\53rd_Sprays\sprays\Requested\Spray_3-2_Damocles.paa",
			"\53rd_Sprays\sprays\Requested\Spray_Gannon_Pain.paa",
			"\53rd_Sprays\sprays\Requested\Spray_PEPE_CANT_STOP_LOOKING.paa",
			"\53rd_Sprays\sprays\Requested\Spray_Spins_Continously.paa",
			"\53rd_Sprays\sprays\Requested\Spray_Royal_Ferret.paa",
		};
	};
	class 53rd_32_Damocles: 53rd_Requested_Random
	{
		displayName="Damocles";
		textures[]=
		{
			"\53rd_Sprays\sprays\Requested\Spray_3-2_Damocles.paa"
		};
		icon="\53rd_Sprays\sprays\Requested\Spray_3-2_Damocles.paa";
	};
	class 53rd_Royal_Ferret : 53rd_Requested_Random
	{
		displayName = "Ferret";
		textures[] =
		{
			"\53rd_Sprays\sprays\Requested\Spray_Royal_Ferret.paa"
		};
		icon = "\53rd_Sprays\sprays\Requested\Spray_Royal_Ferret.paa";
	};
	class 53rd_Gannon: 53rd_Requested_Random
	{
		displayName="FEAR";
		textures[]=
		{
			"\53rd_Sprays\sprays\Requested\Spray_Gannon_Pain.paa"
		};
		icon="\53rd_Sprays\sprays\Requested\Spray_Gannon_Pain.paa";
	};
	class 53rd_Pepe: 53rd_Requested_Random
	{
		displayName="PEPE";
		textures[]=
		{
			"\53rd_Sprays\sprays\Requested\Spray_PEPE_CANT_STOP_LOOKING.paa"
		};
		icon="\53rd_Sprays\sprays\Requested\Spray_PEPE_CANT_STOP_LOOKING.paa";
	};
	class 53rd_Spins: 53rd_Requested_Random
	{
		displayName="Lifeworker Friend";
		textures[]=
		{
			"\53rd_Sprays\sprays\Requested\Spray_Spins_Continously.paa"
		};
		icon="\53rd_Sprays\sprays\Requested\Spray_Spins_Continously.paa";
	};
	


	class 53rd_Clear_Can
	{
		displayName = "Clear";
	    requiredItem = "53rd_Serious_Can";
		textures[] =
		{
			"\53rd_Sprays\sprays\Serious\Spray_Clear.paa"
		};
		icon = "\53rd_Sprays\sprays\Serious\Spray_Clear.paa";
	};
	class 53rd_Caution_Can: 53rd_Clear_Can
	{
		displayName = "Caution";
		textures[] =
		{
			"\53rd_Sprays\sprays\Serious\Spray_Caution.paa"
		};
		icon = "\53rd_Sprays\sprays\Serious\Spray_Caution.paa";
	};
	class 53rd_Spray_Mines: 53rd_Clear_Can
	{
		displayName = "Mines";
		textures[] =
		{
			"\53rd_Sprays\sprays\Serious\Spray_Mines.paa"
		};
		icon = "\53rd_Sprays\sprays\Serious\Spray_Mines.paa";
	};
	class 53rd_Red_Cross: 53rd_Clear_Can
	{
		displayName = "Red Cross";
		textures[] =
		{
			"\53rd_Sprays\sprays\Serious\Spray_Red_Cross.paa"
		};
		icon = "\53rd_Sprays\sprays\Serious\Spray_Red_Cross.paa";
	};
	class 53rd_Green_Circle: 53rd_Clear_Can
	{
		displayName = "Green Circle";
		textures[] =
		{
			"\53rd_Sprays\sprays\Serious\Spray_Green_Circle.paa"
		};
		icon = "\53rd_Sprays\sprays\Serious\Spray_Green_Circle.paa";
	};
	class 53rd_White_Box: 53rd_Clear_Can
	{
		displayName = "White Box";
		textures[] =
		{
			"\53rd_Sprays\sprays\Serious\Spray_White_Square_Filled.paa"
		};
		icon = "\53rd_Sprays\sprays\Serious\Spray_White_Square_Filled.paa";
	};

	class 53rd_Random: 53rd_Logo_Random
	{
		displayName="SPINS SUPREME";
		requiredItem="53rd_RandomCan";
		textures[]=
		{
			"\53rd_Sprays\sprays\Meme\Spray_Helldiver_Squat.paa",
			"\53rd_Sprays\sprays\Meme\Spray_SFC_LONE_WULF_THONK.paa",
			"\53rd_Sprays\sprays\Meme\Spray_Soyjak_Pointing_Old.paa",
			"\53rd_Sprays\sprays\Meme\Spray_Ullr_Rebel.paa",
			"\53rd_Sprays\sprays\Meme\Spray_KEEP_IT_CLEAN.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Apollo_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Ares_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Atlas_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Company_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Heph_New_High_Res.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Nox_Logo.paa",
			"\53rd_Sprays\sprays\Platoon_Logos\Spray_Volare_New_High_Res.paa",
			"\53rd_Sprays\sprays\Requested\Spray_3-2_Damocles.paa",
			"\53rd_Sprays\sprays\Requested\Spray_Royal_Ferret.paa",
			"\53rd_Sprays\sprays\Requested\Spray_Gannon_Pain.paa",
			"\53rd_Sprays\sprays\Requested\Spray_PEPE_CANT_STOP_LOOKING.paa",
			"\53rd_Sprays\sprays\Requested\Spray_Spins_Continously.paa",
		};
	};
};
class cfgMods
{
	author="Twitch";
	timepacked="3000";
};

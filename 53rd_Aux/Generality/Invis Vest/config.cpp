class CfgPatches 
{
	
	class 53rd_Invisible_Armor
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"53rd_InvisVest"
		};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class cfgWeapons 
{

    class ItemInfo;
	class VestItem;
	class 19th_invisible_Vest;

	class 53rd_InvisVest: 19th_invisible_Vest
	{
		author="19th Fleet";
		scope=2;
		displayName="[53rd] Invisible Vest";
		model="\halo_marine\null.p3d";
		picture="\53rd_Aux\Functions\Arsenal\53rd.paa";
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\halo_marine\null.p3d";
			containerClass="Supply200";
			mass=80;
				class HitpointsProtectionInfo
				{
					class Neck
					{
						hitpointName="HitNeck";
						armor=20;
						passThrough=0.5;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=50;
						passThrough=0.5;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=50;
						passThrough=0.1;
					};
					class Hands
					{
						hitpointName="HitHands";
						armor=50;
						passThrough=0.1;
					};
					class Chest
					{
						hitpointName="HitChest";
						armor=50;
						passThrough=0.1;
					};
					class Diaphragm
					{
						hitpointName="HitDiaphragm";
						armor=50;
						passThrough=0.1;
					};
					class Abdomen
					{
						hitpointName="HitAbdomen";
						armor=50;
						passThrough=0.1;
					};
					class Pelvis
					{
						hitpointName="HitPelvis";
						armor=50;
						passThrough=0.1;
					};
					class Body
					{
						hitpointName="HitBody";
						passThrough=0.1;
					};
				};
			
		
		};

	};


};


































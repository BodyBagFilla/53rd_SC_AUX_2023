

	class 53rd_Ares_Riku_Helmet: 53rd_Ares_Helmet_Rifleman
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Helmet (Riku)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Customs\Riku\53rd_Riku_Helmet_Urban.paa",
				"\53rd_Aux\Ares\Customs\Riku\53rd_Riku_Visor.paa"
		};
	};
	
	
	




	class 53rd_Riku_Vest_Rifleman: 53rd_Ares_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Custom Armor (Riku)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
			{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			//"Reach_Forearm_Left",
			//"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			//"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			//"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			//"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			"H3_Armor_Upper",
			//"H3_Armor_Lower",
			//"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
			};
		hiddenSelectionsTextures[]=
			{
			"",
			"\53rd_Aux\Ares\Rifleman\53rd_Ares_Armor_Lower_Rifleman.paa",
			"\53rd_Aux\Ares\Pieces\53rd_Ares_Armor_Thigh_Pouch.paa",
			"\53rd_Aux\Ares\Customs\Riku\53rd_Riku_Armor_Upper_Urban.paa",
			"",
			"\53rd_Aux\Ares\Pieces\53rd_Ares_Armor_Canisters.paa",
			"\53rd_Aux\Ares\Pieces\53rd_Ares_Armor_Forearm_Vents.paa",
			"\53rd_Aux\Ares\Rifleman\53rd_Ares_Armor_Shoulder_Sniper_Rifleman.paa",
			"\53rd_Aux\Ares\Customs\Riku\53rd_ Riku_shoulderCQB.paa",
			"\53rd_Aux\Ares\Customs\Riku\53rd_Riku_ShoulderRadio_Urban.paa"
			};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			//"Reach_Forearm_Left",
			//"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			//"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			//"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			//"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			"H3_Armor_Upper",
			//"H3_Armor_Lower",
			//"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
			};
		hiddenSelectionsTextures[]=
			{
			"",
			"\53rd_Aux\Ares\Rifleman\53rd_Ares_Armor_Lower_Rifleman.paa",
			"\53rd_Aux\Ares\Pieces\53rd_Ares_Armor_Thigh_Pouch.paa",
			"\53rd_Aux\Ares\Customs\Riku\53rd_Riku_Armor_Upper_Urban.paa",
			"",
			"\53rd_Aux\Ares\Pieces\53rd_Ares_Armor_Canisters.paa",
			"\53rd_Aux\Ares\Pieces\53rd_Ares_Armor_Forearm_Vents.paa",
			"\53rd_Aux\Ares\Rifleman\53rd_Ares_Armor_Shoulder_Sniper_Rifleman.paa",
			"\53rd_Aux\Ares\Customs\Riku\53rd_ Riku_shoulderCQB.paa",
			"\53rd_Aux\Ares\Customs\Riku\53rd_Riku_ShoulderRadio_Urban.paa"
			};
		};
		containerClass="Supply200";
		mass=20;
		vestType = "Rebreather";
		passThrough=0.1;
		modelSides[]={6};
	};


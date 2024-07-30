////////////////////////////////////////////////////////////////////////////////
////////////////////////// Hellfire ////////////////////////////////////////////
//////////////////////////  Armor /////////////////////////////////////////////

	class 53rd_Atlas_Uni_Hellfire_Urban: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Sisyphus";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom Hellfire (Urban)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Top_Urban.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Armor_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Top_Urban.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Hellfire_Urban_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Hellfire_Woodland: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Sisyphus";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom Hellfire (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Top_Woodland.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Armor_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Top_Woodland.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Hellfire_Woodland_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Hellfire_Desert: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Sisyphus";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom Hellfire (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Top_Desert.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Armor_Desert.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Top_Desert.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Armor_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Hellfire_Desert_F";
			containerClass="Supply100";
			mass=20;
		};
	};

	class 53rd_Atlas_Uni_Hellfire_Winter: 53rd_Atlas_Uni_Rifleman_Base
	{
		author="Sisyphus";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Custom Hellfire (Winter)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Top_Winter.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Armor_Winter.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Top_Winter.paa",
				"\53rd_Aux\Atlas\Uniform\Pants\53rd_Atlas_Pants_Urban.paa",
				"\53rd_Aux\Atlas\Customs\Hellfire\53rd_Hellfire_Armor_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Atlas_Uni_Hellfire_Winter_F";
			containerClass="Supply100";
			mass=20;
		};
	};




////////////////////////// Ranger ////////////////////////////////////////////
	class 53rd_Ranger_AAHelmet_Urban: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom Air-Assault Helmet (Urban)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Customs\Ranger\53rd_Ranger_AAHelmet_Urban.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};


	class 53rd_Ranger_AAHelmet_Woodland: 53rd_Ranger_AAHelmet_Urban
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom Air-Assault Helmet (Ranger / Woodland)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Customs\Ranger\53rd_Ranger_AAHelmet_Woodland.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};


	class 53rd_Ranger_AAHelmet_Desert: 53rd_Ranger_AAHelmet_Urban
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom Air-Assault Helmet (Ranger / Desert)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Customs\Ranger\53rd_Ranger_AAHelmet_Desert.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};


	class 53rd_Ranger_AAHelmet_Winter: 53rd_Ranger_AAHelmet_Urban
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom Air-Assault Helmet (Ranger / Winter)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Customs\Ranger\53rd_Ranger_AAHelmet_Winter.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};



////////////////////////// Toxic ////////////////////////////////////////////
	class 53rd_Toxic_AAHelmet_Urban: 53rd_Atlas_AAHelmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom Air-Assault Helmet (Urban)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Customs\Toxic\53rd_Toxic_AAHelmet_Urban.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};


	class 53rd_Toxic_AAHelmet_Woodland: 53rd_Toxic_AAHelmet_Urban
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom Air-Assault Helmet (Toxic / Woodland)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Customs\Toxic\53rd_Toxic_AAHelmet_Woodland.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};


	class 53rd_Toxic_AAHelmet_Desert: 53rd_Toxic_AAHelmet_Urban
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom Air-Assault Helmet (Toxic / Desert)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Customs\Toxic\53rd_Toxic_AAHelmet_Desert.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};


	class 53rd_Toxic_AAHelmet_Winter: 53rd_Toxic_AAHelmet_Urban
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Custom Air-Assault Helmet (Toxic / Winter)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
		"\53rd_Aux\Atlas\Customs\Toxic\53rd_Toxic_AAHelmet_Winter.paa",
		"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa"
		};
	};



















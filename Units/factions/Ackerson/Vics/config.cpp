class CfgPatches
{
	class 53rd_Ackerson_Vics
	{
		addonRootClass="";
		requiredAddons[]=
		{};
		requiredVersion=0.1;
		units[]=
		{
         "53rd_MWRAP_A",
		 "53rd_MWRAP_AG",
		 "53rd_MWRAP_AM"
		};
		weapons[]={};
	};
};
class CfgVehicles
	{
	class O_T_MRAP_02_ghex_F;
	class O_MRAP_02_hmg_F;
	class O_T_MRAP_02_hmg_ghex_F;
	class O_T_MRAP_02_gmg_ghex_F;
	class 53rd_MWRAP_A: O_T_MRAP_02_ghex_F
		{
			scope=2;
			scopeCurator=2;
			displayName="[53rd] Ifrit";
			side=0;
			faction="53rd_Ackersons_RebellionOF";
			crew="O_T_Soldier_F";
			typicalCargo[]=
			{
				"O_T_Soldier_F",
				"O_T_Soldier_F"
			};
			textureList[]=
			{
				"Green",
				1
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Units\factions\Ackerson\Vics\53rd_Akerson_green_body_CO.paa",
				"53rd_SC_aux\Units\factions\Ackerson\Vics\53rd_Akerson_green_CO.paa",
				"53rd_SC_aux\Units\factions\Ackerson\Vics\Turret_CO.paa"
			};
		};
		class 53rd_MWRAP_AM: O_T_MRAP_02_hmg_ghex_F
		{
			scope=2;
			scopeCurator=2;
			displayName="[53rd] Ifrit MG";
			side=0;
			faction="53rd_Ackersons_RebellionOF";
			crew="O_T_Soldier_F";
			typicalCargo[]=
			{
				"O_T_Soldier_F",
				"O_T_Soldier_F"
			};
			textureList[]=
			{
				"Green",
				1
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Units\factions\Ackerson\Vics\53rd_Akerson_green_body_CO.paa",
				"53rd_SC_aux\Units\factions\Ackerson\Vics\53rd_Akerson_green_CO.paa",
				"53rd_SC_aux\Units\factions\Ackerson\Vics\Turret_CO.paa"
			};
		};
		class 53rd_MWRAP_AG: O_T_MRAP_02_gmg_ghex_F
		{
			scope=2;
			scopeCurator=2;
			displayName="[53rd] Ifrit GMG";
			side=0;
			faction="53rd_Ackersons_RebellionOF";
			crew="O_T_Soldier_F";
				typicalCargo[]=
				{
					"O_T_Soldier_F",
					"O_T_Soldier_F"
				};
				textureList[]=
				{
					"Green",
					1
				};
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\Units\factions\Ackerson\Vics\53rd_Akerson_green_body_CO.paa",
					"53rd_SC_aux\Units\factions\Ackerson\Vics\53rd_Akerson_green_CO.paa",
					"53rd_SC_aux\Units\factions\Ackerson\Vics\Turret_CO.paa"
				};
		};
	};
};

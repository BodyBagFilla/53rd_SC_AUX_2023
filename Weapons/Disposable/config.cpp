class CfgPatches
{
	class 53rd_Launchers_NLAW
	{
		units[]={};
		weapons[]=
		{
			"53rd_M57_Pilum_b"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
		author="53rd AUX Team";
	};
};
class CfgWeapons
{
	class TCF_M57_Pilum;
	class 53rd_M57_Pilum_b: TCF_M57_Pilum
	{
			dlc="";
			author="Fireteam Zulu & Shadow";
			displayName="[53rd] M57 Pilum - Disposable";
			baseWeapon="53rd_M57_Pilum_b";
			model="\TCF_WEAPONRY\Weapons\Launchers\M48\M48B_Cricket";
			picture="\TCF_WEAPONRY\Weapons\Launchers\M48\data\M48B_Cricket";
			hiddenSelections[]=
			{
				"tube_tex",
				"lower_tex",
				"grip_tex",
				"details_tex"
			};
			hiddenSelectionsTextures[]=
			{
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\tube_CO.paa",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\lower_CO.paa",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\grips_CO.paa",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\details_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\tube.rvmat",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\lower.rvmat",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\grips.rvmat",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\details.rvmat"
			};
			magazines[]=
		{
			"53rd_M41_Rocket_Twin_MEME",
		};
	};
};

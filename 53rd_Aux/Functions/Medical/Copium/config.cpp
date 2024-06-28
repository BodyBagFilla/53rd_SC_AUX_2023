
class CfgPatches
{
	class 53rd_CopiumPLACEHOLDER
	{
		units[] =
		{
			"53rd_CopiumItem"
		};
		weapons[] =
		{
			"53rd_Copium"
		};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class ace_medical_treatment
{

	class Medication
	{
		class Copium
		{
			hrIncreaseLow[] = { 0,5 };
			hrIncreaseNormal[] = { 5,10 };
			hrIncreaseHigh[] = { 5,15 };
			painReduce = 0.80000001;
			timeInSystem = 180;
			timeTillMaxEffect = 0.1;
			maxDose = 10;
		};
		class Ibuprofen : Copium
		{
			painReduce = 0.4;
			hrIncreaseLow[] = { 0 };
			hrIncreaseNormal[] = { 0 };
			hrIncreaseHigh[] = { 0 };
			timeInSystem = 3000;
			timeTillMaxEffect = 120;
			maxDose = 12;
			incompatibleMedication[] = {};
			viscosityChange = -1;
		};
	};
};



class ace_medical_treatment_actions
{
	class Morphine;
	class Ibuprofen : Morphine
	{
		displayName = "Take Ibuprofen";
		displayNameProgress = "Have some water and change your socks...";
		allowedSelections[] =
		{
			"Head"
		};
		items[] =
		{
			"Ibuprofen"
		};
		treatmentTime = 1;
	};
	class Copium : Morphine
	{
		displayName = "Copium";
		ACE_isMedicalItem = 1;
		displayNameProgress = "Drink some water, and touch some grass...";
		condition = "ace_medical_treatment_advancedMedication";
		allowedSelections[] =
		{
			"All"
		};
		items[] =
		{
			"53rd_Copium"
		};

	};

};


class cfgWeapons
{

	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;

	//medical
	class OPTRE_Medigel;
	class OPTRE_Biofoam;
	class ACE_plasmaIV;

	class 53rd_Copium : ACE_ItemCore
	{
		scope = 2;
		author = "53rd Aux";
		displayName = "[53rd] Copium";
		picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		hiddenSelections[] = {"camo"};
		ACE_isMedicalItem = 1;
		hiddenSelectionsTextures[] = {"\53rd_Aux\Functions\Medical\Copium\Copium_CO.paa"};
		descriptionShort = "Desc_Short";
		descriptionUse = "Desc_Use";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};

class CfgVehicles
{
	//medical
	class Item_Base_F;
	class ACE_MedicalLitterBase;
	class 53rd_CopiumItem : Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[53rd] Copium";
		author = "53rd Aux";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_53rd_Copium
			{
				name = "53rd_Copium";
				count = 1;
			};
		};
	};








};
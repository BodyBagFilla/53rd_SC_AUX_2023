class CfgPatches
{
	class 53rd_ace_map_markers
	{
		author="Specworks Mod Team";
		addonRootClass="specworks_patch_functions";
		requiredAddons[]=
		{

		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class Extended_PreInit_EventHandlers
{
	class specworks_ace_map_markers
	{
		init="call compile preprocessFileLineNumbers '53rd_Ares\Functions\map_markers\xeh_preinit.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class DotMarkerCreate
			{
				displayName="Mark Position";
				condition="true";
				statement="call QUI_fnc_MarkPosition";
				class DZMarkerSelf
				{
					displayName="<t color='#FFFF00'>Mark DZ</t>";
					condition="true";
					statement="['DZ', 'hd_end'] call QUI_fnc_MarkLZ";
					icon="\A3\ui_f\data\map\markers\handdrawn\end_CA.paa";
					class DotMarkerSelfDeleteDZ
					{
						displayName="<t color='#FF0000'>Delete nearest DZ</t>";
						condition="true";
						statement="['hd_end'] call QUI_fnc_DeleteMarker";
					};
				};
				class LZMarkerSelf
				{
					displayName="<t color='#FFFF00'>Mark LZ</t>";
					condition="true";
					statement="['LZ', 'hd_pickup'] call QUI_fnc_MarkLZ";
					icon="\A3\ui_f\data\map\markers\handdrawn\pickup_CA.paa";
					class DotMarkerSelfDeleteLZ
					{
						displayName="<t color='#FF0000'>Delete nearest LZ</t>";
						condition="true";
						statement="['hd_pickup'] call QUI_fnc_DeleteMarker";
					};
				};
				class RPMarkerSelf
				{
					displayName="<t color='#2980B9'>Mark RP</t>";
					condition="true";
					statement="['RP', 'hd_flag'] call QUI_fnc_MarkLZ";
					icon="\A3\ui_f\data\map\markers\handdrawn\flag_CA.paa";
					class DotMarkerSelfDeleteRP
					{
						displayName="<t color='#FF0000'>Delete nearest RP</t>";
						condition="true";
						statement="['hd_flag'] call QUI_fnc_DeleteMarker";
					};
				};
				class CCPMarkerSelf
				{
					displayName="<t color='#8a0303'>Mark CCP</t>";
					condition="true";
					statement="['CCP', 'RedCrystal'] call QUI_fnc_MarkCCP";
					icon="\A3\ui_f_orange\data\cfgmarkers\redcrystal_ca.paa";
					class DotMarkerSelfDeleteCCP
					{
						displayName="<t color='#FF0000'>Delete nearest CCP</t>";
						condition="true";
						statement="['RedCrystal'] call QUI_fnc_DeleteMarker";
					};
				};
				class DotMarkerSelfDelete
				{
					displayName="<t color='#FF0000'>Delete nearest dot</t>";
					condition="true";
					statement="['hd_dot'] call QUI_fnc_DeleteMarker";
				};
			};
		};
	};
};

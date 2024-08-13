class CfgPatches
{
	class MapMarkers
	{
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		requiredVersion=0.100000;
		units[]={};
		weapons[]={};
	};
};
class CfgMarkerClasses
{
    class Halo_map_markers_Facs_SA
	{
		displayName="Halo Factions";
    }

    class Halo_map_markers_Ships_SA
	{
		displayName="Halo Ships";
    }
};
class CfgMarkers
{
	class UNSC_SA
	{
		name="[Halo] UNSC";
		icon="MapMarkers\icons\markers\UNSC_SA.paa";
		color[]={0,0,0,1};
		size=48;
		scope=2;
		scopeCurator=2;
		shadow=0;
		markerClass="Halo_map_markers_Facs_SA";
	};
    class UNSC_Army_SA: UNSC_SA
	{
		name="[Halo] UNSC Army";
		icon="MapMarkers\icons\markers\UNSC_Army_SA.paa";
		texture="MapMarkers\icons\markers\UNSC_Army_SA.paa";
	};
    class UNSC_Marine_SA: UNSC_SA
	{
		name="[Halo] UNSC Marine";
		icon="MapMarkers\icons\markers\UNSC_Marines_SA.paa";
		texture="MapMarkers\icons\markers\UNSC_Marines_SA.paa";
	};
    class UNSC_Navy_SA: UNSC_SA
	{
		name="[Halo] UNSC Navy";
		icon="MapMarkers\icons\markers\UNSC_Navy_SA.paa";
		texture="MapMarkers\icons\markers\UNSC_Navy_SA.paa";
	};
    class ODST_SA: UNSC_SA
	{
		name="[Halo] UNSC ODST";
		icon="MapMarkers\icons\markers\ODST_SA.paa";
		texture="MapMarkers\icons\markers\ODST_SA.paa";
	};
    class ONI_SA: UNSC_SA
	{
		name="[Halo] ONI";
		icon="MapMarkers\icons\markers\ONI_SA.paa";
		texture="MapMarkers\icons\markers\ONI_SA.paa";
	};
    class fLEET39TH_SA: UNSC_SA
	{
		name="[Halo] 39TH fLEET";
		icon="MapMarkers\icons\markers\39th_Fleet_Shield_blacked.paa";
		texture="MapMarkers\icons\markers\39th_Fleet_Shield_blacked.paa";
	};
    class POA_SA: UNSC_SA
	{
		name="[Halo] UNSC Pillar Of Autumn";
		icon="MapMarkers\icons\markers\c709.paa";
		texture="MapMarkers\icons\markers\c709.paa";
	};
    class F27_SA: UNSC_SA
	{
		name="[Halo] 427th STB";
		icon="MapMarkers\icons\markers\427th.paa";
		texture="MapMarkers\icons\markers\427th.paa";
	};
	class F3rd_SA: UNSC_SA
	{
		name="[Halo] 53rd V1";
		icon="MapMarkers\icons\markers\53rd.paa";
		texture="MapMarkers\icons\markers\53rd.paa";
	};
	class F3rdv2_SA: UNSC_SA
	{
		name="[Halo] 53rd V2";
		icon="MapMarkers\icons\markers\53rdv2.paa";
		texture="MapMarkers\icons\markers\53rdv2.paa";
	};
	class Volare_SA: UNSC_SA
	{
		name="[Halo] Volare";
		icon="MapMarkers\icons\markers\image-3.paa";
		texture="MapMarkers\icons\markers\image-3.paa";
	};
	class Ares_SA: UNSC_SA
	{
		name="[Halo] Ares";
		icon="MapMarkers\icons\markers\orange.paa";
		texture="MapMarkers\icons\markers\orange.paa";
	};
	class Apollo_SA: UNSC_SA
	{
		name="[Halo] Apollo";
		icon="MapMarkers\icons\markers\Apollo_with_Lyre.paa";
		texture="MapMarkers\icons\markers\Apollo_with_Lyre.paa";
	};
	class Hephaestus_SA: UNSC_SA
	{
		name="[Halo] Hephaestus";
		icon="MapMarkers\icons\markers\image-4.paa";
		texture="MapMarkers\icons\markers\image-4.paa";
	};
	class Hephaestus1_SA: UNSC_SA
	{
		name="[Halo] Hephaestus 1-1";
		icon="MapMarkers\icons\markers\criptid.paa";
		texture="MapMarkers\icons\markers\criptid.paa";
	};
	class Hephaestus2_SA: UNSC_SA
	{
		name="[Halo] Hephaestus 1-2";
		icon="MapMarkers\icons\markers\kerberos.paa";
		texture="MapMarkers\icons\markers\kerberos.paa";
	};
	class Hephaestus3_SA: UNSC_SA
	{
		name="[Halo] Hephaestus 1-3";
		icon="MapMarkers\icons\markers\hydra.paa";
		texture="MapMarkers\icons\markers\hydra.paa";
	};
    class Spartan_SA: UNSC_SA
	{
		name="[Halo] Spartan Operations";
		icon="MapMarkers\icons\markers\Spartan_SA.paa";
		texture="MapMarkers\icons\markers\Spartan_SA.paa";
	};
    class Flood_SA: UNSC_SA
	{
		name="[Halo] Flood";
		icon="MapMarkers\icons\markers\Flood_SA.paa";
		texture="MapMarkers\icons\markers\Flood_SA.paa";
	};
    class Forerunner_SA: UNSC_SA
	{
		name="[Halo] Forerunner";
		icon="MapMarkers\icons\markers\Forerunner_SA.paa";
		texture="MapMarkers\icons\markers\Forerunner_SA.paa";
	};
    class Banished_SA: UNSC_SA
	{
		name="[Halo] Banished";
		icon="MapMarkers\icons\markers\Banished_SA.paa";
		texture="MapMarkers\icons\markers\Banished_SA.paa";
	};
    class Covenant_CE_SA: UNSC_SA
	{
		name="[Halo] Covenant";
		icon="MapMarkers\icons\markers\Covenant_CE_SA.paa";
		texture="MapMarkers\icons\markers\Covenant_CE_SA.paa";
	};
    class Insurrectionist_SA: UNSC_SA
	{
		name="[Halo] Insurrectionist";
		icon="MapMarkers\icons\markers\Insurrectionist_SA.paa";
		texture="MapMarkers\icons\markers\Insurrectionist_SA.paa";
	};
    class SoS_SA: UNSC_SA
	{
		name="[Halo] Swords of Sanghelios";
		icon="MapMarkers\icons\markers\SoS_SA.paa";
		texture="MapMarkers\icons\markers\SoS_SA.paa";
	};
    class CAS_SA
	{
		name="[Halo] Assault Carrier (CAS)";
		icon="MapMarkers\icons\markers\CAS_SA.paa";
		color[]={0,0,0,1};
		size=48;
		scope=2;
		scopeCurator=2;
		shadow=0;
		markerClass="Halo_map_markers_Ships_SA";
    };
    class SDV_SA: CAS_SA
	{
		name="[Halo] Heavy Corvette (SDV)";
		icon="MapMarkers\icons\markers\SDV_SA.paa";
		texture="MapMarkers\icons\markers\SDV_SA.paa";
	};
    class Frigate_SA: CAS_SA
	{
		name="[Halo] Frigate";
		icon="MapMarkers\icons\markers\Frigate_SA.paa";
		texture="MapMarkers\icons\markers\Frigate_SA.paa";
	};
    class Drake_SA: CAS_SA
	{
		name="[Halo] Drake-class";
		icon="MapMarkers\icons\markers\Drakeclass_SA.paa";
		texture="MapMarkers\icons\markers\Drakeclass_SA.paa";
	};
    class Halberd_SA: CAS_SA
	{
		name="[Halo] Halberd-class";
		icon="MapMarkers\icons\markers\Halberd_SA.paa";
		texture="MapMarkers\icons\markers\Halberd_SA.paa";
	};
    class Phoenix_SA: CAS_SA
	{
		name="[Halo] Phoenix Class";
		icon="MapMarkers\icons\markers\Phoenix_SA.paa";
		texture="MapMarkers\icons\markers\Phoenix_SA.paa";
	};
    class Pillar_SA: CAS_SA
	{
		name="[Halo] Halcyon-class";
		icon="MapMarkers\icons\markers\Pillar_SA.paa";
		texture="MapMarkers\icons\markers\Pillar_SA.paa";
	};
    class Longsword_SA: CAS_SA
	{
		name="[Halo] Longsword";
		icon="MapMarkers\icons\markers\Longsword_SA.paa";
		texture="MapMarkers\icons\markers\Longsword_SA.paa";
	};
    class Pelican_SA: CAS_SA
	{
		name="[Halo] Pelican";
		icon="MapMarkers\icons\markers\Pelican_SA.paa";
		texture="MapMarkers\icons\markers\Pelican_SA.paa";
	};
};
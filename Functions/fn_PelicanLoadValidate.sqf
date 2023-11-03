_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;
	
switch true do {

	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2" or _veh isKindOf "53rd_Scorpion" or _veh isKindOf "53rd_Scorpion_125" or _veh isKindOf "53rd_Grizzly" or _veh isKindOf "53rd_M875_SPH"): 
	{
		_veh attachTo [_pelican,[0,-9, -4]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "TG_Wolverine_GDI_01") : 
	{
		_veh attachTo [_pelican,[0,-9, -1.5]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "53rd_IFV76_A"):
	{
		_veh attachTo [_pelican,[0,-6,-4]]; 
		_loaded = true;  
	};
	case (_veh isKindOf "TG_APC_GDI_01"):
	{
		_veh attachTo [_pelican,[0,-9, -6]];
		_loaded = true;  
	};	
	case (_veh isKindOf "TG_Juggernaut_GDI_01") : 
	{
		_veh attachTo [_pelican,[0,-9, -9]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "TG_Hover_MLRS_GDI_01") : 
	{
		_veh attachTo [_pelican,[0,-9, -6]];
		_veh setDir 180;
		_loaded = true;
	};
    case (_veh isKindOf "53rd_UNSC_hornet") : 
	{
		_veh attachTo [_pelican,[0,-10, -4]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "53rd_MGS_01D" or _veh isKindOf "53rd_MGS_01E") : 
	{
		_veh attachTo [_pelican,[0,-9, -1.5]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "53rd_M1022") : 
	{
		_veh attachTo [_pelican,[0,-9, 0.8]];
		_veh setDir 180;
		_loaded = true;
	};
	case ( _veh isKindOf "53rd_Crocodile_APC" or _veh isKindOf "53rd_Crocodile_IFV" or _veh isKindOf "53rd_Crocodile_MGS" or _veh isKindOf "53rd_Crocodile_AA"or _veh isKindOf "53rd_Coyote_RV"):
    {  
		_veh attachTo [_pelican,[0,-10,-1.5]];
		_veh setDir 180;
		_loaded = true;
    };
	case (_veh isKindOf "53rd_M12_FAV" or _veh isKindOf "53rd_M914_RV"):
	{
		_veh attachTo [_pelican,[0,-7.5,0.8]];  
		_loaded = true;  
	};
	case (_veh isKindOf "53rd_M12_FAV_APC" or _veh isKindOf "53rd_M813_TT" or _veh isKindOf "53rd_M12A1_LRV" or _veh isKindOf "53rd_M12_LRV" or _veh isKindOf "53rd_M12G1_LRV" or _veh isKindOf "53rd_M12R_AA"):
	{
		_veh attachTo [_pelican,[0,-7.5,-1.3]];  
		_loaded = true;  
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M12_FAV_APC" or _veh isKindOf "OPTRE_M12_FAV"):
	{
		_veh attachTo [_pelican,[0.15,-7.5,1.3]]; 
		_loaded = true;  		
	};
    
	case (_veh isKindOf "OPTRE_M813_TT"):
	{
		_veh attachTo [_pelican,[0,-7.5,.25]];  
		_loaded = true;  
	};
	case (_veh isKindOf "OPTRE_M413_base"):
	{
		_veh attachTo [_pelican,[0,-6,0.30]];  
		_loaded = true;  
	};
	case (_veh isKindOf "OPTRE_EscapePod"):
	{
		_veh attachTo [_pelican,[0,-6,-.80]]; 
		_loaded = true; 
	};
	case (_veh isKindOf "VES_IFV76_A"):
	{
		_veh attachTo [_pelican,[0,-6,.30]]; 
		_loaded = true;
		_veh setDir 180;		
	};
	case (_veh isKindOf "Truck_03_base_F"):
	{
		_veh attachTo [_pelican,[0,-7,-.4]]; 
		_loaded = true;  
	};
	case (_veh isKindOf "B_Boat_Armed_01_minigun_F"):
	{
		_veh attachTo [_pelican,[0,-7, -0.37105]];
		_veh setDir 180; 
		_loaded = true; 
	};
	case (_veh isKindOf "B_Boat_Transport_01_F"):
	{
		_veh attachTo [_pelican,[0,-7,.40]];
		_loaded = true; 
	};
	case (_veh isKindOf "optre_hornet_base"):
	{
		_veh attachTo [_pelican,[0,-8,-0.8]];  
		_loaded = true;  
	};
	case (_veh isKindOf "OPTRE_M494"):
    {
		_veh attachTo [_pelican,[0,-10,-3]];
		_veh setDir 180;
		_loaded = true;
    };
	case (_veh isKindOf "DMNS_Bulldog_FAV"):
    {
		_veh attachTo [_pelican,[0,-8,-1]];  
		_loaded = true;  
    };
	case (_veh isKindOf "OPTRE_M1015_mule_repair_ins"):
    {
		_veh attachTo [_pelican,[0,-8,-0.4]];  
		_loaded = true;  
    };
	case (_veh isKindOf "DMNS_Bulldog_LRV_AGL"):
    {
		_veh attachTo [_pelican,[0,-8,-0.9]];  
		_loaded = true;  
    };
};
	
if (_loaded) then 
{
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK SUCCESSFUL!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
	_pelican addEventHandler ["Killed",
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			if !(_x isKindof "OPTRE_Static_M247H_Shielded_Tripod") then {detach _x;};
		} forEach attachedObjects _unit;
	}];
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CARGO UNSUPPORTED!</t><br/>-------------------------------------------<br/>Your vehicle has not been design to be mag lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been designed to be lifted via maglock. Operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};
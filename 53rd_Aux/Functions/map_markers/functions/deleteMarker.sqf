params ["_markerType"];

private _markers = allMapMarkers select { getMarkerType _x == _markerType };

if (count _markers == 0) exitWith {};

private _nearestMarker = [_markers, ace_player] call BIS_fnc_nearestPosition;

if (ace_player distance2D (markerPos _nearestMarker) < 20) then
{
    deleteMarker _nearestMarker;
};
_unit = _this select 0;
_groupThis = group _unit;

if (isServer) then
{
   private ["_group", "_leader", "_data"];
   _group  = group _unit;
   _leader = leader _group;
   _data   = [nil, "Golf", false]; // [<Insignia>, <Group Name>, <Private>]

   ["RegisterGroup", [_group, _leader, _data]] call BIS_fnc_dynamicGroups;
   // {[[ _x, "GRAD_delta"], "BIS_fnc_setUnitInsignia", nil, true, true] call BIS_fnc_MP;sleep 0.1;} forEach units _group;
   // {[ _x] execVM "dynamicGroups\createInsignias.sqf"; sleep 0.1;} forEach units _group;
};

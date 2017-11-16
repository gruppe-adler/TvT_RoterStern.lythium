["Initialize", [true]] call BIS_fnc_dynamicGroups;

REPLAY_FINISHED = false;
publicVariable "REPLAY_FINISHED";

[2] remoteExec ["GRAD_replay_fnc_init", 0, true];
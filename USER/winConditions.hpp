class bluforeliminated {
        preset = "ELIMINATION";
        presetParams[] = {"WEST"};

        condition = "";
        checkInterval = 0;

        winners[] = {"EAST","INDEPENDENT"};
        winText = "Mujahideen eliminated after %1 minutes.<br/>Soviets win!";
        winTextParams[] = {"round (CBA_missionTime/60)"};
};

class opforeliminated {
        preset = "ELIMINATION";
        presetParams[] = {"EAST"};

        condition = "";
        checkInterval = 0;

        winners[] = {"WEST","INDEPENDENT"};
        winText = "Soviets eliminated after %1 minutes.<br/>Mujahideen win!";
        winTextParams[] = {"round (CBA_missionTime/60)"};
};

class bluforwinpoints {
    preset = "TIMEOUT";
    presetParams[] = {120,"[east] call grad_points_fnc_getPoints < [west] call grad_points_fnc_getPoints",{600,300,60}};

    condition = "";
    checkInterval = 0;

    winners[] = {"WEST"};
    winText = "Mujahideen win with %1 points!<br/>Soviets only had %2 points.";
    winTextParams[] = {"[WEST] call grad_points_fnc_getPoints", "[EAST] call grad_points_fnc_getPoints"}; 
};

class opforwinpoints {
    preset = "TIMEOUT";
    presetParams[] = {120,"[west] call grad_points_fnc_getPoints < [east] call grad_points_fnc_getPoints",{600,300,60}};

    condition = "";
    checkInterval = 0;

    winners[] = {"EAST"};
    winText = "Soviets win with %1 points!<br/>Mujahideen only had %2 points.";
    winTextParams[] = {"[EAST] call grad_points_fnc_getPoints", "[WEST] call grad_points_fnc_getPoints"};
};

class matchdraw {
    preset = "TIMEOUT";
    presetParams[] = {120,"[west] call grad_points_fnc_getPoints == [east] call grad_points_fnc_getPoints",{600,300,60}};

    condition = "";
    checkInterval = 0;

    winners[] = {};
    winText = "No one wins as both sides had %1 points!<br/>Game was %2 min";
    winTextParams[] = {"[EAST] call grad_points_fnc_getPoints", "round (CBA_missionTime/60)"};
};
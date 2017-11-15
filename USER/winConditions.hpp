/*  Hier werden Siegbedingungen festgelegt
*   Beispiel:
    class bluforeliminated {
        preset = "ELIMINATION";
        presetParams[] = {"WEST"};

        condition = "";
        checkInterval = 0;

        winners[] = {"EAST","INDEPENDENT"};
        winText = "BLUFOR eliminated after %1 minutes.<br/>OPFOR wins!";
        winTextParams[] = {"round (CBA_missionTime/60)"};
    };
    class opforeliminated {
        preset = "ELIMINATION";
        presetParams[] = {"EAST"};

        condition = "";
        checkInterval = 0;

        winners[] = {"WEST","INDEPENDENT"};
        winText = "OPFOR eliminated after %1 minutes.<br/>BLUFOR wins!";
        winTextParams[] = {"round (CBA_missionTime/60)"};
    };
*/
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

class bluforWinPoints {
    preset = "POINTS";
    presetParams[] = {"WEST",9999,60}; // 2700 = 45min

    condition = "";
    checkInterval = 0;

    winners[] = {"WEST"};
    winText = "Mujahideen win with %1 points!<br/>Soviets only had %2 points.";
    winTextParams[] = {"[WEST] call grad_common_fnc_getPoints", "[EAST] call grad_common_fnc_getPoints"}; 
};

class opforWinPoints {
    preset = "POINTS";
    presetParams[] = {"EAST",9999,60}; // 2700 = 45min

    condition = "";
    checkInterval = 0;

    winners[] = {"EAST"};
    winText = "Soviets win with %1 points!<br/>Mujahideen only had %2 points.";
    winTextParams[] = {"[EAST] call grad_common_fnc_getPoints", "[WEST] call grad_common_fnc_getPoints"};
};
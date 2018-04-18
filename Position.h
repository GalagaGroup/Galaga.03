
/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Enemy : Implementation File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial variables and functions.
                   4/14/2018 : (Mark) debugging
*/

#ifndef GALAGACLASSES_POSITION_H
#define GALAGACLASSES_POSITION_H

#include "game.h"

struct Position {
    int x;
    int y;

    Position(){
        x = 100;
        y = 100;
    }
    Position(int a, int b){
        x = a;
        y = b;
    }
};


#endif //GALAGACLASSES_POSITION_H

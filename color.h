/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Color : Struct Implementation
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial Functions and variables
					4/8/2018 : (Mark)Added getcolor functions
					4/10/2018 : (Mark) fix of syntax errors and general incorrectness
					4/17/2018  : (Mark)Debugging
					4/17/2018  : (Diego) set colors from 'int color = 128;' to 'int color;'
*/
#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

#include "game.h"

struct Color{
    int r;
    int g;
    int b;

    Color(){
    r = 0;
    g = 0;
    b = 0;
    }

    Color(int red, int green , int blue){
        r = red;
        g = green;
        b = blue;
    }

};


#endif //COLOR_H_INCLUDED


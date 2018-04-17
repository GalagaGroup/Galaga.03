/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Color : Struct Implementation
Date Created:       4/8/2018
Date Last Modified: 4/8/2018 : (Mark)Initial Functions and variables
					4/8/2018 : (Mark)Added moveShip, shoot functions
					4/14/2018 : (Mark) Implemented some changes from
					                other classes
*/

#ifndef GALAGACLASSES_STARFIGHTER_H
#define GALAGACLASSES_STARFIGHTER_H

#include "SDL_Plotter.h"
#include "Position.h"
#include "Standard.h"
//#include "color.h"





class Starfighter {
public:
        int health = 1;
        Position p;
        const char graphic[17][17] = {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'W', 'B', 'B', 'B', 'B', 'B', 'B', 'B',//1
                                      'B', 'B', 'B', 'B', 'B', 'B', 'B', 'W', 'B', 'B', 'B', 'B', 'B', 'B', 'B',//2
                                      'B', 'B', 'B', 'B', 'B', 'B', 'W', 'W', 'W', 'B', 'B', 'B', 'B', 'B', 'B',//3
                                      'B', 'B', 'B', 'B', 'B', 'B', 'W', 'W', 'W', 'B', 'B', 'B', 'B', 'B', 'B',//4
                                      'B', 'B', 'B', 'B', 'B', 'B', 'W', 'W', 'W', 'B', 'B', 'B', 'B', 'B', 'B',//5
                                      'B', 'B', 'B', 'B', 'R', 'B', 'W', 'W', 'W', 'B', 'R', 'B', 'B', 'B', 'B',//6
                                      'B', 'B', 'B', 'B', 'R', 'B', 'W', 'W', 'W', 'B', 'R', 'B', 'B', 'B', 'B',//7
                                      'B', 'B', 'B', 'B', 'W', 'W', 'W', 'W', 'W', 'B', 'W', 'B', 'B', 'B', 'B',//8
                                      'R', 'B', 'B', 'B', 'Q', 'B', 'W', 'R', 'B', 'B', 'Q', 'B', 'B', 'B', 'R',//8
                                      'R', 'B', 'B', 'Q', 'W', 'B', 'R', 'R', 'R', 'W', 'W', 'Q', 'B', 'B', 'R',//7
                                      'W', 'B', 'B', 'W', 'W', 'B', 'R', 'W', 'R', 'W', 'W', 'W', 'B', 'B', 'W',//6
                                      'W', 'B', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'B', 'W',//5
                                      'W', 'W', 'W', 'W', 'W', 'R', 'W', 'W', 'W', 'R', 'W', 'W', 'W', 'W', 'W',//4
                                      'W', 'W', 'W', 'B', 'R', 'R', 'W', 'W', 'W', 'R', 'R', 'B', 'W', 'W', 'W',//3
                                      'W', 'W', 'B', 'B', 'R', 'R', 'B', 'W', 'B', 'R', 'R', 'B', 'B', 'W', 'W',//2
                                      'W', 'B', 'B', 'B', 'B', 'B', 'B', 'W', 'B', 'B', 'B', 'B', 'B', 'B', 'W',};
        Starfighter(int b, int x, int y);
        void hit();
        void shoot();
        void moveShip(int a, SDL_Plotter &g);
        void draw(g);

};


#endif //GALAGACLASSES_STARFIGHTER_H

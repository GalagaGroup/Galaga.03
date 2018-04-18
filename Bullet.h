/*
Author:             Mark Fuller
                    Diego Maya	//test 3
Assignment:         Galaga : Bullet : Header File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial Header variables and functions.
					4/8/2018 : (Mark)Added moveShip function


*/

#ifndef BULLET_H_INCLUDED
#define BULLET_H_INCLUDED

#include "game.h"
#include "Position.h"

class Bullet{

public:
    int health;
    //Position p1;
    const char bullet[8][3] = {	     'B', 'Q', 'B',
                                     'B', 'Q', 'B',
                                     'Q', 'Q', 'Q',
                                     'Q', 'W', 'Q',
                                     'B', 'R', 'B',
                                     'B', 'R', 'B',
                                     'B', 'R', 'B',
                                     'B', 'R', 'B',};


    //Bullet(Position);
    void moveShip(int x, int y);// moves ship x pixels in the x direction and y pixels in the y diirction
    //void draw(pass in array for char pixels);

};

#endif // BULLET_H

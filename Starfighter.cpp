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

#include "Starfighter.h"
#include "Type.h"

void Starfighter::hit() {
}

void Starfighter::draw(SDL_Plotter g){
	Standard::draw(graphic, p, 17, 17, g);
}

void Starfighter::moveShip(int a, SDL_Plotter &g) {
	p.x = p.x + a;
	Color col;


    //draw();
    //hit();
}

void Starfighter::shoot() {
    /*
    Bullet b1;

    for(int i = getY; i < 0; i--){
        b1.move(0 ,-1);	//moves the bullett 0 in the x direction and -1 in the y
    }
    */
}

Starfighter::Starfighter(int b, int x, int y){
    Type ship_Type(b);
    p.x = x;
    p.y = y;
}


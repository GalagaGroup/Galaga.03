
/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Enemy : Implementation File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial variables and functions.
*/

#include "Enemy.h"

Enemy::Enemy() {
    shipType = 2;
    health = 1;
    pos.x = 700;
    pos.y = 400;
}


Enemy::Enemy(int type, int posx, int posy) {

    shipType = type;
    health = 1;
    pos.x = posx;    //these will have to change eventually
    pos.y = posy;
}


void Enemy::hit() {
    health--;
    if (health < 1) {
        destroy();
    }
}

void Enemy::moveShip(int a, int b) {
    pos.x += a;
    pos.y += b;

    //draw();
    //hit();

}

void Enemy::draw(SDL_Plotter g, int type){
    if(type == 2){
            //char graphic[][25], Position a, int height, int width, SDL_Plotter g
        Standard::draw(moth, pos, 10, 13, g);
    }
    else if(type == 3){
            //char graphic[][25], Position a, int height, int width, SDL_Plotter g
        Standard::draw(galaga, pos, 10, 13, g);
    }

}

void Enemy::destroy() {
    //cycle through the blow up frames, destroy object through destructor;
}







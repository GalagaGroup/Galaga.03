
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
/*
void Enemy::draw(SDL_Plotter g, int type){
    if(type == 2){
        // also ask your smart friend about this, we need to call the Standard.h draw function from game.cpp but we need to access values in enemy.h, i tried this btu it didnt work obviousely.
        //Standard::draw(moth, pos, 10, 13, g);
    }
    else if(type == 3){

        //Standard::draw(galaga, pos, 10, 13, g);
    }
}
*/








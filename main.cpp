/*
Author:                 Mark Fuller, Diego Maya
Assignment Title:       Galaga: The Game!
Assignment description: This program will faithfully recreate galaga,
                        the beloved game from the 1980's
Due Date:               4/25/2018
Date Created:           4/4/2018
Date Last Modified:     4/25/2018

*/

#include "game.h"

int main(int argc, char** argv){
    srand(time(NULL));
    Game game;
    game.play();

    return 0;

}

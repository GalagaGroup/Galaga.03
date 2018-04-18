#include "game.h"
#include "Enemy.h"

Game::Game(){
    enemies_killed = 0;

}
/*
void Game::initSounds(SDL_Plotter& g){
    Initializes sound waves upon the start of the program
    g.initSound("01 Stage Intro.wav");
    g.initSound("02 Fighter Captured.wav");
    g.initSound("03 Fighter Rescued.wav");
    g.initSound("04 Captured Fighter Destroyed.wav");
    g.initSound("05 Challenging Stage Perfect.wav");
    g.initSound("07 Challenging Stage Perfect.wav");
    g.initSound("08 1-Up.wav");
    g.initSound("09 Die-Start Up Sound.wav");
    g.initSound("10 Coin.wav");
    g.initSound("11 Name Entry.wav");
    g.initSound("12 Unknown.wav");
    g.initSound("13 Sound Effects.wav");

}
*/

void Game::initGame(SDL_Plotter& g){


    //paints background black
    for(int x = 0; x < MAX_COLUMNS; x++){
        for(int y = 0; y < MAX_ROWS; y++){
            g.plotPixel(x,y,0,0,0);
        }
    }

    //draw starfighter object on the screen
    //star.draw(g);

    //lost of enemies 15 spaces apart on x = 300
    for(int i = 0; i < 8; i++){
        //enemies[i] = Enemy e1(2, 30 * i, 300);
        //enemies[i].draw(g, 2);
    }
}

void Game::play(){
    int won = 0;
    SDL_Plotter g(MAX_ROWS, MAX_COLUMNS);
    initSounds(g);
    initGame(g);

    while (!g.getQuit() && won == 0)
    {
        //updates and draws the maps, erases the ghosts and pacman
        //asigns states to the ghosts
        first(g);

        //checks for keyboard strokes
        keyboard(g);

        //checks for game collisions
        //collisions(g);

        //updates the score counter
        updateScore(g);

        //updates the lives counter
        updateLives(g);

        //moves and draws pacman and ghosts, updates
        last(g);

        //check if game has ended
        if(checkEnd() == 1 || checkEnd() == 2){
            won = checkEnd();
        }
    }
/*
    switch(won){
        //if Starfighter won the game by achieving the highest score
        case 1: win(g);
                break;
        //if Starfighter loses all of his lives
        case 2: lose(g);
                break;
    }
    */
}

void Game::first(SDL_Plotter& g){
    //erases pacman and ghosts

}

void Game::keyboard(SDL_Plotter& g){
    //tests keyboard strokes


}




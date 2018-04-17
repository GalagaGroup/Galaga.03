#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "Starfighter.h"
#include "Enemy.h"

using namespace std;

class Game{
    private:
        Starfighrer star;
        int score;
        int enemies_killed;
        Enemy enemies[8];

    public:
        //sets up the default values of the game
        Game();

        //loads all the sounds in the game
        void initSounds(SDL_Plotter& g);
        //loads the title screen
        void titleScreen(SDL_Plotter& g);
        //initializes the game
        void initGame(SDL_Plotter& g);
        //main game loop, plays game
        void play();
        //checks if player has ended the game
        int checkEnd();
        //what happens when the player wins
        void win(SDL_Plotter& g);
        //what happens when the player loses
        void lose(SDL_Plotter& g);

        //first functions of the game loop
        void first(SDL_Plotter& g);
        //checks if keyboard keys are pressed
        void keyboard(SDL_Plotter& g);
        //tests game collisions
        void collisions(SDL_Plotter& g);
        //last functions of the game loop
        void last(SDL_Plotter& g);
        //updates the score
        void updateScore(SDL_Plotter& g);
        //update the lives
        void updateLives(SDL_Plotter& g);
        //tests pacmans movement
        void pacMoveTest(SDL_Plotter& g, int d);
        //test pacmans collisions with the walls
        void pacWall(SDL_Plotter& g);
        //test ghosts collisions with the walls
        void ghostWall(SDL_Plotter& g);
        //test pacmans collisions with the ghosts
        void pacGhost(SDL_Plotter& g);


};


#endif // GAME_H_INCLUDED

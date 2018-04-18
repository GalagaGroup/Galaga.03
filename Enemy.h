/*
Author:             Mark Fuller
                    Diego Maya  //test 4
Assignment:         Galaga : Enemy : Header File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Initial Header variables and functions.

*/

#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

//#include "game.h"
#include "SDL_Plotter.h"
#include "Position.h"

using namespace std;

class Enemy {
private:
    int health;
    int shipType;
    constexpr static char starfighter[17][17] = {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'W', 'B', 'B', 'B', 'B', 'B', 'B', 'B',//1
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

    constexpr static char moth[10][13] = {'B', 'Q', 'B', 'B', 'B', 'B', 'Y', 'B', 'B', 'B', 'B', 'Q', 'B',
                               'B', 'B', 'Q', 'B', 'B', 'R', 'Y', 'R', 'B', 'B', 'Q', 'B', 'B',
                               'B', 'B', 'B', 'Q', 'R', 'R', 'Y', 'R', 'R', 'Q', 'B', 'B', 'B',
                               'B', 'B', 'B', 'B', 'Y', 'Y', 'Y', 'Y', 'Y', 'B', 'B', 'B', 'B',
                               'B', 'B', 'B', 'Q', 'Q', 'Y', 'Y', 'Y', 'Q', 'Q', 'B', 'B', 'B',
                               'B', 'B', 'Q', 'Q', 'Q', 'R', 'R', 'R', 'Q', 'Q', 'Q', 'B', 'B',
                               'B', 'Q', 'Q', 'Q', 'B', 'R', 'R', 'R', 'B', 'Q', 'Q', 'Q', 'B',
                               'Q', 'Q', 'Q', 'Q', 'B', 'Y', 'Y', 'Y', 'B', 'Q', 'Q', 'Q', 'Q',
                               'Q', 'Q', 'Q', 'B', 'B', 'R', 'R', 'R', 'B', 'B', 'Q', 'Q', 'Q',
                               'Q', 'Q', 'Q', 'B', 'B', 'B', 'R', 'B', 'B', 'B', 'Q', 'Q', 'Q'};

    constexpr static char galaga[17][15] = {'B', 'B', 'B', 'B', 'B', 'B', 'G', 'B', 'G', 'B', 'B', 'B', 'B', 'B', 'B',
                                 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'B', 'G', 'B', 'B', 'B', 'B', 'B', 'B',
                                 'B', 'B', 'B', 'G', 'G', 'O', 'O', 'G', 'O', 'O', 'G', 'G', 'B', 'B', 'B',
                                 'B', 'B', 'B', 'B', 'G', 'O', 'O', 'G', 'O', 'O', 'G', 'B', 'B', 'B', 'B',
                                 'B', 'B', 'B', 'B', 'B', 'G', 'G', 'G', 'G', 'G', 'B', 'B', 'B', 'B', 'B',
                                 'B', 'B', 'B', 'B', 'B', 'G', 'B', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B',
                                 'B', 'B', 'B', 'B', 'G', 'Y', 'Y', 'G', 'Y', 'Y', 'G', 'B', 'B', 'B', 'B',
                                 'B', 'B', 'G', 'G', 'G', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'G', 'G', 'B', 'B',
                                 'G', 'G', 'G', 'B', 'B', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'G', 'G', 'G', 'G',
                                 'B', 'G', 'G', 'B', 'B', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'G', 'G', 'G', 'B',
                                 'B', 'G', 'O', 'G', 'G', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'G', 'O', 'G', 'B',
                                 'G', 'G', 'O', 'G', 'B', 'B', 'O', 'B', 'O', 'B', 'B', 'G', 'O', 'G', 'G',
                                 'G', 'O', 'G', 'G', 'B', 'B', 'O', 'B', 'O', 'B', 'B', 'G', 'G', 'O', 'G',
                                 'G', 'O', 'O', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'O', 'O', 'G',
                                 'G', 'O', 'O', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'O', 'O', 'G',
                                 'G', 'G', 'G', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'G', 'G', 'G',
                                 'B', 'G', 'G', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'G', 'B',};

 /* constexpr static char explosion1[13][15] = {'Y', 'B', 'R', 'Y', 'B', 'R', 'B', 'B', 'B', 'Y', 'R', 'B', 'B',
                                              'B', 'B', 'R', 'R', 'B', 'B', 'Y', 'R', 'B', 'B', 'B', 'B', 'Y',
                                              'B', 'Y', 'B', 'Y', 'B', 'B', 'B', 'R', 'B', 'B', 'B', 'Y', 'B',
                                              'B', 'R', 'B', 'B', 'B', 'B', 'R', 'B', 'Y', 'B', 'Y', 'B', 'B',
                                              'B', 'B', 'Y', 'Y', 'B', 'B', 'B', 'B', 'Y', 'B', 'B', 'B', 'R',
                                              'B', 'B', 'B', 'R', 'B', 'B', 'Y', 'Y', 'B', 'Y', 'Y', 'B', 'B',
                                              'Y', 'B', 'Y', 'Y', 'B', 'R', 'B', 'B', 'B', 'B', 'B', 'Y', 'B',
                                              'B', 'B', 'B', 'R', 'B', 'B', 'B', 'B', 'R', 'B', 'B', 'B', 'B',
                                              'B', 'B', 'Y', 'B', 'R', 'B', 'R', 'B', 'R', 'Y', 'B', 'Y', 'B',
                                              'Y', 'Y', 'B', 'B', 'B', 'B', 'B', 'Y', 'B', 'B', 'Y', 'B', 'Y',
                                              'R', 'B', 'R', 'B', 'Y', 'R', 'B', 'B', 'B', 'B', 'Y', 'B', 'R',
                                              'B', 'Y', 'B', 'R', 'B', 'B', 'Y', 'B', 'Y', 'B', 'B', 'B', 'B',
                                              'Y', 'B', 'Y', 'B', 'Y', 'Y', 'B', 'Y', 'B', 'R', 'B', 'Y', 'B',
                                              'B', '', 'Y', '', '', 'Y', '', '', '', 'B', 'B', 'B', 'Y',
                                              'Y', 'B', 'B', 'B', 'R', 'Y', 'B', 'Y', 'Y', 'B', 'B', 'B', 'B',};
*/


public:
    Position pos;
    /*
    Precondition:
        none
    PostCondition:
        An enemy object is created with default values
    Return:
        none
    Description:
        Enemy constructor, creates enemy object with deault values
    */
    Enemy();

    /*
    Precondition:
        Three int values exist
    PostCondition:
        An enemy object is created
        The int values are unchanged
    Return:
        none
    Description:
        Enemy constructor, assigns three int values to its type, and x-y coordinates.
    */
    Enemy(int, int, int);

    /*
    Precondition:
        Enemy object exists
    PostCondition:
        The health of the enemy is reduced by 1
    Return:
        void
    Description:
        when hit is called health is reduced by 1, if health falls below 1,
            the destructor is called.
    */
    void hit();

    /*
    Precondition:
        Enemy object exists
    PostCondition:
        The position of the object is changed by the amount of the int values
    Return:
        void
    Description:
        the x and y values of the position of the object are added to the values passed in;
    */
    void moveShip(int, int);

    /*
    Precondition:
        Enemy object exists
    PostCondition:
        The object no longer exists
    Return:
        void
    Description:
        the destructor is called and the explosion animation is played;
    */
    void destroy();


};


#endif //ENEMY_H_INCLUDED

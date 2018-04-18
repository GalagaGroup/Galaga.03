/*
Author:             Mark Fuller
                    Diego Maya
Assignment:         Galaga : Enemy : Header File
Date Created:       4/3/2018
Date Last Modified: 4/3/2018 : (Mark)Create file
                    4/14/2018 : (Mark)Create functions

*/

#ifndef STANDARD_H_INCLUDED
#define STANDARD_H_INCLUDED

#include "game.h"
/*
 * Precondition:
 *      A graphic for the entity in the form of a char 2D array exists,
 *      a position structure for the entity exists
 * Postcondition:
 *      The 2D array and the Position struct are unchanged,
 *      the SDL_Plotter object is changed,
 * Return:
 *      void
 * Description:
 *      This function takes the array and prints the top left corner at
 *      Position, using the SDL_Plotter object
 */

void draw(char graphic[][25], Position a, int height, int width, SDL_Plotter g);

/*
 * Precondition:
 *      Two Position structs exist, as well as two int values
 * Postcondition:
 *      The structs are unchanged as well as the int values
 * Return:
 *      void
 * Description:
 *      using the types of the entities passed in, the int values, the state
 *      of whether the object have collided is tested.
 */
bool hit(Position one, int a, Position two, int b);

#endif //STANDARD_H_INCLUDED

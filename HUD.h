
/*
Author:             Mark Fuller Diego Maya
Assignment:         Galaga : Enemy : Header File
Date Created:       4/3/2018
Date Last Modified: 4/17/2018 : (Mark) created all variables


*/

#ifndef GALAGACLASSES_HUD_H
#define GALAGACLASSES_HUD_H

#include "Standard.h"

class HUD {
public:
    int score = 0;
    HUD();
    HUD(int a);
    const char letter_H[7][7]{
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'R', 'R', 'R', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
    };
    const char letter_I[7][7]{
            'B', 'R', 'R', 'R', 'R', 'R', 'R',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'R', 'R', 'R', 'R', 'R', 'R',
    };
    const char letter_G[7][7]{
            'B', 'B', 'R', 'R', 'R', 'R', 'R',
            'B', 'R', 'R', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'R', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'B', 'R', 'R', 'R', 'R', 'R',
    };
    const char letter_space[7][7]{
            'B', 'B', 'B', 'B', 'B', 'B', 'B',
            'B', 'B', 'B', 'B', 'B', 'B', 'B',
            'B', 'B', 'B', 'B', 'B', 'B', 'B',
            'B', 'B', 'B', 'B', 'B', 'B', 'B',
            'B', 'B', 'B', 'B', 'B', 'B', 'B',
            'B', 'B', 'B', 'B', 'B', 'B', 'B',
            'B', 'B', 'B', 'B', 'B', 'B', 'B',
    };
    const char letter_S[10][9]{
            'B', 'R', 'R', 'R', 'R', 'B', 'B',
            'R', 'R', 'B', 'B', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
            'B', 'B', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
    };
    const char letter_C[7][7]{
            'B', 'B', 'R', 'R', 'R', 'R', 'B',
            'B', 'R', 'R', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'B', 'R', 'R', 'B', 'B', 'R', 'R',
            'B', 'B', 'R', 'R', 'R', 'R', 'B',
    };
    const char letter_O[7][7]{
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
    };
    const char letter_R[7][7]{
            'R', 'R', 'R', 'R', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'R', 'R', 'R',
            'R', 'R', 'R', 'R', 'R', 'B', 'B',
            'R', 'R', 'B', 'R', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'R', 'R', 'R',
    };
    const char letter_E[7][7]{
            'R', 'R', 'R', 'R', 'R', 'R', 'R',
            'R', 'B', 'B', 'B', 'B', 'B', 'B',
            'R', 'B', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'R', 'R', 'R', 'R', 'B',
            'R', 'B', 'B', 'B', 'B', 'B', 'B',
            'R', 'B', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'R', 'R', 'R', 'R', 'R',
    };
    const char letter_U[7][7]{
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'B', 'R', 'R', 'R', 'B', 'B', 'B',
    };
    const char letter_zero[7][7]{
            'B', 'B', 'R', 'R', 'R', 'B', 'B',
            'B', 'R', 'B', 'B', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'R', 'B', 'B', 'R', 'B',
            'B', 'B', 'R', 'R', 'R', 'B', 'B',
    };
    const char letter_one[7][7]{
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'R', 'R', 'R', 'B', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'R', 'R', 'R', 'R', 'R', 'R',
    };
    const char letter_two[7][7]{
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'B', 'B', 'B', 'R', 'R', 'R',
            'B', 'B', 'R', 'R', 'R', 'R', 'B',
            'B', 'R', 'R', 'R', 'R', 'B', 'B',
            'R', 'R', 'R', 'B', 'B', 'B', 'B',
            'R', 'R', 'R', 'R', 'R', 'R', 'R',
    };
    const char letter_three[7][7]{
            'R', 'R', 'R', 'R', 'R', 'R', 'R',
            'B', 'B', 'B', 'B', 'R', 'R', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'R', 'R', 'R', 'R', 'B',
            'B', 'B', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
    };
    const char letter_four[7][7]{
            'B', 'B', 'B', 'R', 'R', 'R', 'B',
            'B', 'B', 'R', 'R', 'R', 'R', 'B',
            'B', 'R', 'R', 'B', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'R', 'R', 'B',
            'R', 'R', 'R', 'R', 'R', 'R', 'R',
            'B', 'B', 'B', 'B', 'R', 'R', 'B',
            'B', 'B', 'B', 'B', 'R', 'R', 'B',
    };
    const char letter_five[7][7]{
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'R', 'R', 'R', 'R', 'B',
            'B', 'B', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
    };
    const char letter_six[7][7]{
            'B', 'B', 'R', 'R', 'R', 'R', 'B',
            'B', 'R', 'R', 'B', 'B', 'B', 'B',
            'R', 'R', 'B', 'B', 'B', 'B', 'B',
            'R', 'R', 'R', 'R', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
    };

    const char letter_seven[7][7]{
            'R', 'R', 'R', 'R', 'R', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'B', 'B', 'B', 'R', 'R', 'B',
            'B', 'B', 'B', 'R', 'R', 'B', 'B',
            'B', 'B', 'R', 'R', 'B', 'B', 'B',
            'B', 'B', 'R', 'R', 'B', 'B', 'B',
            'B', 'B', 'R', 'R', 'B', 'B', 'B',
    };
    const char letter_eight[7][7]{
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'R', 'B',
            'R', 'R', 'R', 'B', 'B', 'R', 'B',
            'B', 'R', 'R', 'R', 'R', 'B', 'B',
            'R', 'B', 'B', 'R', 'R', 'R', 'R',
            'R', 'B', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
    };
    const char letter_nine[7][7]{
            'B', 'R', 'R', 'R', 'R', 'R', 'B',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'R', 'R', 'B', 'B', 'B', 'R', 'R',
            'B', 'R', 'R', 'R', 'R', 'R', 'R',
            'B', 'B', 'B', 'B', 'B', 'R', 'R',
            'B', 'B', 'B', 'B', 'R', 'R', 'B',
            'B', 'R', 'R', 'R', 'R', 'B', 'B',
    };


};

#endif //GALAGACLASSES_HUD_H

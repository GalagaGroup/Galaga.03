/*
Author:             Mark Fuller
Diego Maya
Assignment:         Galaga : Enemy : Header File
Date Created:       4/3/2018
Date Last Modified: 4/14/2018 : (Mark)Initial Header variables and functions.
                    4/14/2018 : (mark)Collision adn draw functions finalised

*/
#include "Standard.h"

void draw(char graphic[][25], Position a, int height, int width, SDL_Plotter g) {
    Color col;
     for (int y = 0; y <= height; y++) {
        for (int x = 0; x <= width; x++) {
            if (graphic[x][y] == 'B'){
                col.r = 0;
                col.g = 0;
                col.b = 0;    		//black pixel
            }
            else if (graphic[x][y] == 'W'){
				col.r = 255;
                col.g = 255;
                col.b = 255;    	//white pixel
            }
            else if (graphic[x][y] == 'R'){
                col.r = 255;
                col.g = 0;
                col.b = 0;    		//red pixe
            }
            else if (graphic[x][y] == 'Q'){
                col.r = 0;
                col.g = 0;
                col.b = 255;    	//blue pixe
            }else if (graphic[x][y] == 'G'){
                col.r = 0;
                col.g = 226;
                col.b = 37;    	//green pixe
            }else if (graphic[x][y] == 'Y'){
                col.r = 248;
                col.g = 255;
                col.b = 48;    	//yellow pixe
            }else if (graphic[x][y] == 'O'){
                col.r = 0;
                col.g = 0;
                col.b = 255;    	//orange pixe
            }else {
                col.r = 255;
                col.g = 143;
                col.b = 0;    	//blue pixe
            }
            g.plotPixel(a.x, a.y, col.r ,col.g, col.b);
            //

        }
    }


}

bool hit(Position one,char a[][25], Position two,char b[][25]) {
    bool hit = false;
    int rows = sizeof a / sizeof a[0];
    int cols = sizeof a.graphic[0] / sizeof(int);

    //if(top left corner is within the bounds of the shape ||
    // the top right corner is within the bounds of the shape ||
    // bottom left corner is within the bounds of the shape ||
    // bottom right is within the bounds of the shape){
    //      then it has collided
    if ((two.x > one.x && two.x < one.x + cols && two.y > one.y && two.y < one.y + rows) ||
        (two.x + cols > one.x && two.x + cols < one.x + cols && two.y > one.y && two.y < one.y + rows) ||
        (two.x > one.x && two.x < one.x + cols && two.y + rows > one.y && two.y + rows < one.y + rows) ||
        (two.x + cols > one.x && two.x + cols < one.x + cols && two.y + rows > one.y && two.y + rows < one.y + rows)){
        hit = true;
    }
    return hit;
}

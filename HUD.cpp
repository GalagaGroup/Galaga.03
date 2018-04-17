#include "HUD.h"
#include "SDL_Plotter.h"

HUD::HUD(){
	int letter size = 7;
	Position top_Left;
	top_Left.x = 20;
	top_Left.y = 20;

	for(int i = 0; i < 7 * SIZE_MULTIPLIER; i = i + SIZE_MULTIPLIER){
		for(int j = 0; j < 7 * SIZE_MULTIPLIER; j = j + SIZE_MULTIPLIER){
			for(int k = 0; i < SIZE_MULTIPLIER; k++){
				if (letter_S[i][j] == "R"){
					g.plotpixel(top_left.x + i + k, top_Left.y +  = k, 255, 0, 0);
				}else{
				//pixel is black and so is the background
				}
			}

		}
	}
	for(int i = 0; i < 7 * SIZE_MULTIPLIER; i = i + SIZE_MULTIPLIER){
		for(int j = 0; j < 7 * SIZE_MULTIPLIER; j = j + SIZE_MULTIPLIER){
			for(int k = 0; i < SIZE_MULTIPLIER; k++){
				if (letter_S[i][j] == "R"){
					g.plotpixel(top_left.x + i + k, top_Left.y +  = k, 255, 0, 0);
				}else{
				//pixel is black and so is the background
				}
			}

		}
	}

}

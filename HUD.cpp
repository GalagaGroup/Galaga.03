#include "HUD.h"
#include "SDL_Plotter.h"
#include <fstream>


HUD::HUD(){
	string top_Bar = "SCORE";
	Position top_Left;
	top_Left.x = 300;
	top_Left.y = 30;
	char letters[26][25][25];
	char rand_letter;
	int holder;


	ifstream inletters;
	letters.open("Letters.txt");

	for(int i = 0; i < 26; i++){
			inletters >> rand_letter
		for(int j = 0; j < 25; j++){
			for(int k = 0; k < 25; i++){
					inletters >> letters[i][j][k];
			}
		}
	}

	for(int i = 0; i < top_Bar.length(); i++){
			holder = int(char(top_Bar.substr(i, 1)));
			holder = holder - 65;
		for(int j = 0; j < 25; j++){
			for(int k = 0; k < 25; i++){
					inletters >> letters[holder][j][];
			}
		}
	}



}

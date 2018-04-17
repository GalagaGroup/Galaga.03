#include "game.h"

Game::Game(){
    enemies_killed = 0;
}

void Game::initSounds(SDL_Plotter& g){
    //Initializes sound waves upon the start of the program
    g.initSound("01 Stage Intro.wav");
    g.initSound("02 Fighter Captured.wav");
    g.initSound("03 Fighter Rescued.wav");
    g.initSound("04 Captured Fighter Destroyed.wav");
    g.initSound("05 Challenging Stage Perfect.wav");
    g.initSound("07 Challenging Stage Perfect.wav");
    g.initSound("08 1-Up.wav");
    g.initSound("09 Die-Start Up Sound.wav");
    g.initSound("10 Coin.wav);
    g.initSound("11 Name Entry.wav");
    g.initSound("12 Unknown.wav");
    g.initSound("13 Sound Effects.wav");
}

void Game::initGame(SDL_Plotter& g){

    //paints background black
    for(int x = 0; x < MAX_COLUMNS; x++){
        for(int y = 0; y < MAX_ROWS; y++){
            g.plotPixel(x,y,0,0,0);
        }
    }

    //draw starfighter object on the screen
    star.draw(g);

    //lost of enemies 15 spaces apart on x = 300
    for(int i = 0; i < 8; i++){
        enemies[i] = Enemy e1(2, 30 * i, 300);
        enemies[i].draw(g, 2);
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
        collisions(g);

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

    switch(won){
        //if Starfighter won the game by achieving the highest score
        case 1: win(g);
                break;
        //if Starfighter loses all of his lives
        case 2: lose(g);
                break;
    }


}

void Game::first(SDL_Plotter& g){
    //erases pacman and ghosts
    ghosts.eraseGhosts(g);
    pac.erasePacman(g);

    //draws the map
    maze.update(g);
    maze.draw(g);

    //sets the state of the ghosts
    if(!maze.getPowered()){
        ghosts.setState(1);
    }
    if(maze.getPower()){
        g.playSound("sonic.wav");
        ghosts.setState(2);
        maze.setPower(false);
    }

}

void Game::keyboard(SDL_Plotter& g){
    //tests keyboard strokes
    if (g.kbhit())
    {
        key = g.getKey();
        switch (key)
        {
            case RIGHT_ARROW: pacMoveTest(g,RIGHT);
                              break;

            case LEFT_ARROW:  pacMoveTest(g,LEFT);
                              break;

            case UP_ARROW:    pacMoveTest(g,UP);
                              break;

            case DOWN_ARROW:  pacMoveTest(g,DOWN);
                              break;
        }
    }
}

void Game::pacMoveTest(SDL_Plotter& g, int d){
    //checks to see if pacman can move in his new direction
    //if not, then keep his original trajectory
    int iDir;
    switch(d){
        case RIGHT:   iDir = pac.getDirection();
                      pac.setDirection(RIGHT);
                      pac.movePacman();
                      if(maze.collision(pac.getBox())){
                        pac.setDirection(LEFT);
                        pac.movePacman();
                        pac.setDirection(iDir);
                      }
                      else{
                        pac.setDirection(LEFT);
                        pac.movePacman();
                        pac.setDirection(RIGHT);
                      }
                      break;

        case LEFT:    iDir = pac.getDirection();
                      pac.setDirection(LEFT);
                      pac.movePacman();
                      if(maze.collision(pac.getBox())){
                        pac.setDirection(RIGHT);
                        pac.movePacman();
                        pac.setDirection(iDir);
                      }
                      else{
                        pac.setDirection(RIGHT);
                        pac.movePacman();
                        pac.setDirection(LEFT);
                      }
                      break;

        case UP:      iDir = pac.getDirection();
                      pac.setDirection(UP);
                      pac.movePacman();
                      if(maze.collision(pac.getBox())){
                        pac.setDirection(DOWN);
                        pac.movePacman();
                        pac.setDirection(iDir);
                      }
                      else{
                        pac.setDirection(DOWN);
                        pac.movePacman();
                        pac.setDirection(UP);
                      }
                      break;

        case DOWN:    iDir = pac.getDirection();
                      pac.setDirection(DOWN);
                      pac.movePacman();
                      if(maze.collision(pac.getBox())){
                        pac.setDirection(UP);
                        pac.movePacman();
                        pac.setDirection(iDir);
                      }
                      else{
                        pac.setDirection(UP);
                        pac.movePacman();
                        pac.setDirection(DOWN);
                      }
                      break;

    }


}

void Game::pacWall(SDL_Plotter& g){
    //if pacman collides with a wall, bump him back
    if (maze.collision(pac.getBox()))
    {
        pac.erasePacman(g);

        if (pac.getDirection() == LEFT)
        {
            pac.bumpPacman(RIGHT);
        }
        if (pac.getDirection() == RIGHT)
        {
            pac.bumpPacman(LEFT);
        }
        if (pac.getDirection() == UP)
        {
            pac.bumpPacman(DOWN);
        }
        if (pac.getDirection() == DOWN)
        {
            pac.bumpPacman(UP);
        }
        pac.setDirection(STOP);

    }
}

void Game::ghostWall(SDL_Plotter& g){
    //if ghosts collide with a wall, bump them back
    for(int i = 0; i < GHOST_AMOUNT; i++){

        if (maze.collision(ghosts.ghosts[i].getCircle()))
        {
            ghosts.ghosts[i].eraseGhost(g);

            if (ghosts.ghosts[i].getDirection() == LEFT)
            {
                ghosts.ghosts[i].moveRectangle(RIGHT);
                ghosts.ghosts[i].moveCircle(RIGHT);
            }
            if (ghosts.ghosts[i].getDirection() == RIGHT)
            {
                ghosts.ghosts[i].moveRectangle(LEFT);
                ghosts.ghosts[i].moveCircle(LEFT);
            }
            if (ghosts.ghosts[i].getDirection() == UP)
            {
                ghosts.ghosts[i].moveRectangle(DOWN);
                ghosts.ghosts[i].moveCircle(DOWN);
            }
            if (ghosts.ghosts[i].getDirection() == DOWN)
            {
                ghosts.ghosts[i].moveRectangle(UP);
                ghosts.ghosts[i].moveCircle(UP);
            }
            ghosts.ghosts[i].setDirection(STOP);

        }

    }
}

void Game::pacGhost(SDL_Plotter& g){
    //tests collision of ghosts and pacman
    for(int i = 0; i < GHOST_AMOUNT; i++){
        if(pac.getCircle().collision(ghosts.ghosts[i].getCircle())){
            switch(ghosts.ghosts[i].getState()){
                //if ghosts are normal (kill pacman)
                case 1: g.playSound("pac_death.wav");
                        //kill pacman
                        lives--;
                        pac.die(g);
                        break;
                //if ghosts are blue (eatable)
                case 2: g.playSound("ghost_death.wav");
                        //kill ghosts
                        ghosts.ghosts[i].die();
                        //increase score
                        score+=5000;
                        break;
            }

        }
    }
}

void Game::collisions(SDL_Plotter& g){
    //tests pacmans collision with the walls
    pacWall(g);

    //tests the ghosts collisions with the walls
    ghostWall(g);

    //tests pacmans collisions with the dots
    maze.collision(pac, g, score, dotsEaten);

    //tests pacmans collisions with the ghosts
    pacGhost(g);

}

void Game::last(SDL_Plotter& g){
    //move and draw pacman and ghosts
    pac.movePacman();
    pac.drawPacman(g);
    ghosts.moveGhosts(maze, pac);
    ghosts.drawGhosts(g);
    //update the screen
    g.update();
}

void Game::updateScore(SDL_Plotter& g){
    //updates the score
    scoreVal = "SCORE:";
    stringstream p;
    string i;
    p << score;
    p >> i;

    scoreVal+=i;
    font.plotString(Point(15,18), 3, scoreVal, Color(255,255,255),g);
}

void Game::updateLives(SDL_Plotter& g){
    //updates the lives
    life_1.setColor(Color(200,200,20));
    life_2.setColor(Color(200,200,20));
    livesVal = "LIVES:";
    font.plotString(Point(15,960), 2, livesVal, Color(255,255,255),g);

    //only show Starfighters if lives are there
    if(lives >= 2){
        life_1.drawPacman(g);
        life_1.drawTriangle(g);
    }
    if(lives >= 3){
        life_2.drawPacman(g);
        life_2.drawTriangle(g);
    }


}

int Game::checkEnd(){
    //if the game ends, return the value of ending
    //0 = game continues
    //1 = wins
    //2 = loses
    int val = 0;
    if(lives == 0){
        val = 2;
    }
    else if(dotsEaten == 0){
        val = 1;
    }
    return val;
}

void Game::lose(SDL_Plotter& g){
    //the game over screen phrase
    string s = "GAME OVER!!!";

    //paint the screen black
    for(int x = 0; x < MAX_COLUMNS; x++){
        for(int y = 0; y < MAX_ROWS; y++){
            g.plotPixel(x,y,0,0,0);
        }
    }

    //prints "Game Over"
    font.plotString(Point(100,400),4,s,Color(255,255,255),g);
    g.playSound("reeeee.wav");
    g.update();

    g.Sleep(4000);

}

void Game::win(SDL_Plotter& g){
    //stops current sounds
    g.quitSound("sonic.wav");
    g.quitSound("shinderu.wav");

    //prints win title
    string s = "YOU WIN!!!";
    font.plotString(Point(70,450),5,s,Color(200,25,20),g);
    g.playSound("win.wav");
    g.update();

    g.Sleep(4000);
}

void Game::titleScreen(SDL_Plotter& g){
    //creates title cards
    string a = "PACMAN";
    string b = "PRESS G TO START";
    //plots pacman word
    font.plotString(Point(90,300),7,a,Color(255,255,0),g);
    //plots press g
    font.plotString(Point(150,700),2,b,Color(255,255,0),g);
    //pacman
    Circle introPac(Point(300,500),60,Color(255,255,0));
    //pacmans mouth
    Triangle tri(Point(300,500),Point(360,440),Point(360,560),Color(0,0,0));
    //dots he eats
    Circle dot1(Point(400,500),15,Color(255,255,255));
    Circle dot2(Point(450,500),15,Color(255,255,255));
    Circle dot3(Point(500,500),15,Color(255,255,255));
    //draw the title screen
    introPac.drawCircle(g);
    tri.drawTriangle(g);
    dot1.drawCircle(g);
    dot2.drawCircle(g);
    dot3.drawCircle(g);

    g.update();
    //loop until 'g' is pressed
    while(key != 'G'){
        if(g.kbhit()){
            key = g.getKey();
        }
    }
    //erase title
    introPac.eraseCircle(g);
    tri.eraseTriangle(g);
    dot1.eraseCircle(g);
    dot2.eraseCircle(g);
    dot3.eraseCircle(g);


    font.plotString(Point(150,700),2,b,Color(0,0,0),g);
    font.plotString(Point(90,300),7,a,Color(0,0,0),g);
}

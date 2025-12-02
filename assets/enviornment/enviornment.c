#include <curses.h>
#include <stdlib.h>
#include "../../main.h"
#include <time.h> 
//Written by ryan and michael, controls pretty much the entire game enviornment, adding removing and moving elements around the screen,
//it selects fixed modules to create a semi random experience.

int nextFloor = 0;
int floorOn = 1;

int marioTraveled = 0;
int moduleClock = 250;
int module;

typedef struct {
    int pipeOn;
    int x;
    int y;
}Pipe;
#define MAX_PIPES 100
Pipe pipes[MAX_PIPES];
int pipeCount = 0;
void addPipe(int x, int y) {
    if (pipeCount >= MAX_PIPES) return;
    pipes[pipeCount++] = (Pipe){1, x, y};
}

typedef struct {
    int brickOn;
    int x;
    int y;
}Brick;
#define MAX_BRICKS 100
Brick bricks[MAX_BRICKS];
int brickCount = 0;
void addBrick(int x, int y) {
    if (brickCount >= MAX_BRICKS) return;
    bricks[brickCount++] = (Brick){1, x, y};
}

typedef struct {
    int floorOn;
    int x;
    int y;
}Floor;
#define MAX_FLOORS 10000
Floor floors[MAX_FLOORS];
int floorCount = 0;
int minFloor = 0;
void addFloor(int x, int y) {
    if (floorCount >= MAX_FLOORS) return;
    floors[floorCount++] = (Floor){1, x, y};
}

typedef struct {
    int castleOn;
    int x;
    int y;
}Castle;
#define MAX_CASTLES 1
Castle castles[MAX_CASTLES];
int castleCount = 0;
void addCastle(int x, int y) {
    if (castleCount >= MAX_CASTLES) return;
    castles[castleCount++] = (Castle){1, x, y};
}

typedef struct {
    int starOn;
    int x;
    int y;
}Star;
#define MAX_STARS 5
Star stars[MAX_STARS];
int starCount = 0;
void addStar(int x, int y) {
    if (starCount >= MAX_STARS) return;
    stars[starCount++] = (Star){1, x, y};
}


int mw = 24, mh = 16, sw = 24, sh = 10;
int checkForStar(int x, int y) {
    int m_y_min = y;
    int m_y_max = m_y_min + mh;
    int m_x_min = x;
    int m_x_max = m_x_min + mw;
    if (starCount == 0) return 0;
    for (int i = 0; i < MAX_STARS; i++) {
        if (!stars[i].starOn) continue;
        int s_x_min = stars[i].x - 0;
        int s_x_max = s_x_min + sw;
        int s_y_min = height - stars[i].y;
        int s_y_max = s_y_min + sh;
        if (m_x_min < s_x_max && m_x_max > s_x_min &&
            m_y_min < s_y_max && m_y_max > s_y_min) {
            deleteStar(stars[i].x, height - stars[i].y);
            stars[i].starOn = 0;
            incrementScore(2);
            return 1;
        }
    }
    return 0;
}

typedef struct {
    int goombaOn;
    int x;
    int y;
    int canMoveFreely;
    int direction;
} Goomba;
#define MAX_GOOMBAS 50
Goomba goombas[MAX_GOOMBAS];

void moveGoombas() {
    for (int i = 0; i < MAX_GOOMBAS; i++) {
        if (!goombas[i].goombaOn || goombas[i].x > width + 12) continue;
        deleteGoomba(goombas[i].x, height - goombas[i].y);

        struct Coordinates newCoords = doMovement(goombas[i].x, goombas[i].y, &goombas[i].direction);
        
        goombas[i].x = newCoords.x;
        goombas[i].y = newCoords.y;
        printGoomba(goombas[i].x, height - goombas[i].y);

        if (goombas[i].x < -12) {
             goombas[i].goombaOn = 0;
        }
    }
}
int goombaCount = 0;
void addGoomba(int x, int y) {
    if (goombaCount >= MAX_GOOMBAS) return;
    goombas[goombaCount++] = (Goomba){1, x, y, 1, -1};
}

int gw = 8, gh = 9;
int checkForGoomba(int x, int y) {
    int m_y_min = y;
    int m_y_max = m_y_min + mh;
    int m_x_min = x;
    int m_x_max = m_x_min + mw;
    if (goombaCount == 0) return 0;
    for (int i = 0; i < MAX_GOOMBAS; i++) {
        if (!goombas[i].goombaOn) continue;
        int g_x_min = goombas[i].x - 0;
        int g_x_max = g_x_min + sw;
        int g_y_min = height - goombas[i].y;
        int g_y_max = g_y_min + sh;
        if (m_x_min < g_x_max && m_x_max > g_x_min &&
            m_y_min < g_y_max && m_y_max > g_y_min) {
            deleteGoomba(goombas[i].x, height - goombas[i].y);
            goombas[i].goombaOn = 0;
            incrementScore(1);
            return 1;
        }
    }
    return 0;
}

int floorCounter = 0;
void enviornment() {
    module = 0;
    moduleClock++;
    if (moduleClock>=250){
        moduleClock = 0;
        floorCounter = 0;
        module = +rand()%5;
        if (marioTraveled >= 2500) module = 5;
        if (marioTraveled == 0) module = 6;
        switch (module){
            case 0:
            addPipe(width, 14);
            addPipe(width+60, 24);
            addPipe(width+120, 34);
            addBrick(width+180, 40);
            addBrick(width+194, 40);
            addBrick(width+208, 40);
            if (rand()%5 == 1)addStar(width+200, 60);
            for (int i = 0; i < 180; i+=8){
                addFloor(width+i,4);
            }
            
            break;
         case 1:
            addPipe(width, 12);
            addPipe(width+100, 18);
            addPipe(width+200, 24);

            addGoomba(width + 45, 12);
            addGoomba(width + 145, 12);
            for (int i = 0; i < 517; i+=8){
                addFloor(width+i,4);
            }

            break;

        case 2:
            addPipe(width, 14);
            addPipe(width+60, 24);
            addPipe(width+150, 34);
            if (rand()%5 == 1)addStar(width+200, 60);

            for (int i = 0; i < 510; i+=8){
                addFloor(width+i,4);
            }
            break;

        case 3:
            floorOn = 0;
            addStar(width+20, 40); // temp delete later
            addBrick(width+0, 20);
            addBrick(width+14, 20);
            addBrick(width+28, 20);

            addBrick(width+80, 26);
            addBrick(width+94, 26);
            if (rand()%5 == 1)addStar(width+100, 50);
            addBrick(width+108, 26);
            addBrick(width+122, 26);
            addGoomba(width+110, 34);

            addBrick(width+180, 30);
            addBrick(width+194, 30);
            addBrick(width+208, 30);
            break;

        case 4:
            addBrick(width+0, 20);
            addBrick(width+14, 20);
            addBrick(width+28, 20);

            addBrick(width+100, 30);
            addBrick(width+114, 30);
            addBrick(width+128, 30);

            addBrick(width+180, 20);
            addBrick(width+194, 20);
            addBrick(width+208, 20);
            break;

        case 5:
            addCastle(width, 34);
            for (int i = 0; i < 510; i+=8){
                addFloor(width+i,5);
            }
            break;

        case 6:
            for (int i = 0; i < 200; i+=8){
                addFloor(i,4);
            }
            moduleClock+=200;
            break;
        }
    }

    marioTraveled++;


    for (int i = minFloor; i < minFloor+100; i++){
        if (!floors[i].floorOn)continue;
            deleteBrick(floors[i].x, height-floors[i].y);
            floors[i].x--;
            for (int j = 0; j < 4; j++){
                printBrick(floors[i].x, height-floors[i].y,0);
            }
        if (floors[i].x < -40) minFloor++;
    }
    
    if (castles[0].castleOn){
        deleteCastle(castles[0].x, height-castles[0].y);
            castles[0].x--;
            for (int j = 0; j < 4; j++){
                printCastle(castles[0].x, height-castles[0].y);
            }
    }

    for (int i = 0; i < MAX_STARS; i++){
        if (!stars[i].starOn)continue;
            deleteStar(stars[i].x, height-stars[i].y);
            stars[i].x--;
            for (int j = 0; j < 4; j++){
                printStar(stars[i].x, height-stars[i].y);
            }
        if (stars[i].x < -40) stars[i].starOn = 0;
    }

    for (int i = 0; i < MAX_BRICKS; i++){
        if (!bricks[i].brickOn)continue;
            deleteBlock(bricks[i].x, height-bricks[i].y);
            bricks[i].x--;
            for (int j = 0; j < 4; j++){
                printBlock(bricks[i].x, height-bricks[i].y);
            }
        if (bricks[i].x < -40) bricks[i].brickOn = 0;
    }

    for (int i = 0; i < MAX_PIPES; i++) {
        if (!pipes[i].pipeOn) continue;
        deletePipe(pipes[i].x, height-pipes[i].y, pipes[i].y);
        pipes[i].x--;
        for (int j = 0; j < 40; j++){
            int x = pipes[i].x + j;
            if (j < 2){
                printPipe(x, height-pipes[i].y, pipes[i].y, 0);
            } else if (j < 4){
                printPipe(x, height-pipes[i].y, pipes[i].y, 1);
            } else if (j < 36){
                printPipe(x, height-pipes[i].y, pipes[i].y, 2);
            } else if (j < 38){
                printPipe(x, height-pipes[i].y, pipes[i].y, 3);
            } else {
                printPipe(x, height-pipes[i].y, pipes[i].y, 4);
            }
        }
        if (pipes[i].x < -40) pipes[i].pipeOn = 0;
    }

    for (int i = 0; i < MAX_GOOMBAS; i++){
        if (!goombas[i].goombaOn) continue;
        deleteGoomba(goombas[i].x, height - goombas[i].y);
        goombas[i].x--;
    
        printGoomba(goombas[i].x, height - goombas[i].y);
        if (goombas[i].x < -12) goombas[i].goombaOn = 0; 
    }
}
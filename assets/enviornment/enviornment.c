#include <curses.h>
#include <stdlib.h>
#include "../../main.h"

int nextFloor = 0;
int floorOn = 1;

int marioTraveled = 0;
int moduleClock = 200;
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

typedef struct {
    int goombaOn;
    int x;
    int y;
} Goomba;
#define MAX_GOOMBAS 50
Goomba goombas[MAX_GOOMBAS];
int goombaCount = 0;
void addGoomba(int x, int y) {
    if (goombaCount >= MAX_GOOMBAS) return;
    goombas[goombaCount++] = (Goomba){1, x, y};
}
int floorCounter = 0;
void eviornment(){
    module = 0;
    if (moduleClock>=250){
        moduleClock = 0;
        floorCounter = 0;
        module = rand()%5;
        if (marioTraveled >= 100) module = 5;
        switch (module){
            case 0:
            floorOn = 1;
            addPipe(width, 14);
            addPipe(width+60, 24);
            addPipe(width+120, 34);
            addBrick(width+180, 40);
            addBrick(width+194, 40);
            addBrick(width+208, 40);
            addStar(width+200, 60);
            break;
         case 1:
            floorOn = 1;
            addPipe(width, 12);
            addPipe(width+100, 18);
            addPipe(width+200, 24);

            addGoomba(width + 45, 12);
            addGoomba(width + 145, 12);
            break;

        case 2:
            floorOn = 1;
            addPipe(width, 14);
            addPipe(width+60, 24);
            addPipe(width+120, 34);

            addStar(width+200, 60);
            break;

        case 3:
            floorOn = 0;
            addBrick(width+0, 20);
            addBrick(width+14, 20);
            addBrick(width+28, 20);

            addBrick(width+100, 30);
            addBrick(width+114, 30);
            addBrick(width+128, 30);
            addGoomba(width+110, 38);

            addBrick(width+180, 40);
            addBrick(width+194, 40);
            addBrick(width+208, 40);
            break;

        case 4:
            floorOn = 0;
            addBrick(width+0, 20);
            addBrick(width+14, 20);
            addBrick(width+28, 20);

            addBrick(width+100, 40);
            addBrick(width+114, 40);
            addBrick(width+128, 40);

            addBrick(width+180, 40);
            addBrick(width+194, 40);
            addBrick(width+208, 40);
            break;

        case 5:
            floorOn = 1;
            //End of game
            break;
            
        }
    }

    marioTraveled++;

    if (floorOn){
        initializeFloor(nextFloor);
        if (nextFloor<3){
            nextFloor++;
        }else{
            nextFloor = 0;
        }
    }else{
        for (int i = 0; i < width+8; i += 8) {
        deleteBrick(i+width-floorCounter, height-4);
        }
        floorCounter++;
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
    moduleClock++;
}
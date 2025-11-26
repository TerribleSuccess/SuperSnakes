#include <curses.h>
#include <stdlib.h>
#include "../main.h"

int nextFloor = 0;
int floorOn = 1;

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



void eviornment(){
    module = 0;
    if (moduleClock>=250){
        moduleClock = 0;
        module = rand()%2;
        switch (module){
            case 0:
            floorOn = 1;
            addPipe(width+20, 12);
            addPipe(width+60, 18);
            addPipe(width+100, 24);
            for (int i = 0; i < 10; i++){
                addBrick(width+160+i*8, height-40);
            }
            break;
         case 1:
            floorOn = 1;
            addPipe(width, 12);
            addPipe(width+100, 18);
            addPipe(width+200, 24);
            break;
        }
    }

    if (floorOn){
        initializeFloor(width, height, nextFloor);
        if (nextFloor<4){
            nextFloor++;
        }else{
            nextFloor = 0;
        }
    }

    for (int i = 0; i < MAX_BRICKS; i++){
        if (!bricks[i].brickOn)continue;{
            deleteBrick(bricks[i].x, bricks[i].y);
            bricks[i].x--;
            printBrickBlock(bricks[i].x, bricks[i].y);
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
    moduleClock++;
}
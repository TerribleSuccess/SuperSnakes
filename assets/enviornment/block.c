#include <curses.h>
#include "../../main.h"
#include <stdlib.h>

void printBlock(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    for (int i = 0; i < 16; i++){
        safePrint(y, x+i, " ", COLOR_PAIR_BLACK);
    }
    printBrick(x+2, y+1,0);
    printBrick(x+6, y+1,0);
    for (int i = 0; i < 4; i++){
        safePrint(y+1+i,   x, " ", COLOR_PAIR_BLACK);
        safePrint(y+1+i,   x+1, " ", COLOR_PAIR_BLACK);
        safePrint(y+1+i,   x+14, " ", COLOR_PAIR_BLACK);
        safePrint(y+1+i,   x+15, " ", COLOR_PAIR_BLACK);
    }

    for (int i = 0; i < 16; i++){
        safePrint(y+5, x+i, " ", COLOR_PAIR_BLACK);
    }
}

void deleteBlock(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    for (int i = 0; i < 16; i++){
        for (int j = 0; j < 6; j++){
            safePrint(y+j, x+i, " ", COLOR_PAIR_BABYBLUE);
        }
    }
}
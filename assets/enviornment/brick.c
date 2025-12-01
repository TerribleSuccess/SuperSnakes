#include <curses.h>
#include "../../main.h"

//By Michael prints a 4x8 brick one sliver at a time
int printBrickSect(int, int, int);

void deleteBrick(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    for (int i = 1; i <= 8; i++){
        for (int j = 0; j < 4; j++){
            safePrint(y+j, x+i, " ", COLOR_PAIR_BABYBLUE);
        }
    }
}


void printBrick(int xIn, int yIn, int sequence){
    int x = xIn;
    int y = yIn;
    int s = sequence;

    for (int i = 0; i < 8; i++){
        s = printBrickSect(x+i, y, s);
    }
}

int printBrickSect(int xIn, int yIn, int sequence){
    int x = xIn;
    int y = yIn;

    switch (sequence){
    case 0:
        safePrint(y,   x, "_", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "_", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "_", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "_", COLOR_PAIR_BROWN);
        return 1;
        break;

    case 1:
        safePrint(y,   x, "|", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "_", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "|", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "_", COLOR_PAIR_BROWN);
        return 2;
        break;

    case 2:
        safePrint(y,   x, "_", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "_", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "_", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "_", COLOR_PAIR_BROWN);
        return 3;
        break;

    case 3:
        safePrint(y,   x, "_", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "|", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "_", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "|", COLOR_PAIR_BROWN);
        return 0;
        break;
    }
    return 0;
}
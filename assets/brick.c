#include <curses.h>
#include "../main.h"


void printBrickBlock(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    safePrint(y,   x, "_|___|__", COLOR_PAIR_BROWN);
    safePrint(y+1, x, "___|___|", COLOR_PAIR_BROWN);
    safePrint(y+2, x, "_|___|__", COLOR_PAIR_BROWN);
    safePrint(y+3, x, "____|___", COLOR_PAIR_BROWN);
}

void deleteBrick(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    safePrint(y,   x, "        ", COLOR_PAIR_BABYBLUE);
    safePrint(y+1, x, "        ", COLOR_PAIR_BABYBLUE);
    safePrint(y+2, x, "        ", COLOR_PAIR_BABYBLUE);
    safePrint(y+3, x, "        ", COLOR_PAIR_BABYBLUE);
}


int printBrick(int xIn, int yIn, int sequence){
    int x = xIn;
    int y = yIn;

    switch (sequence){
    case 0:

        safePrint(y,   x, "__", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "|_", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "__", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "|_", COLOR_PAIR_BROWN);
        return 1;
        break;

    case 1:
        safePrint(y,   x, "__", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "__", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "__", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "__", COLOR_PAIR_BROWN);
        return 2;
        break;

    case 2:
        safePrint(y,   x, "|_", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "__", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "|_", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "__", COLOR_PAIR_BROWN);
        return 3;
        break;

    case 3:
        safePrint(y,   x, "__", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "_|", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "__", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "_|", COLOR_PAIR_BROWN);
        return 4;
        break;

    case 4:
        safePrint(y,   x, "_|", COLOR_PAIR_BROWN);
        safePrint(y+1, x, "__", COLOR_PAIR_BROWN);
        safePrint(y+2, x, "_|", COLOR_PAIR_BROWN);
        safePrint(y+3, x, "__", COLOR_PAIR_BROWN);
        return 0;
        break;
    }
}
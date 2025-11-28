#include <curses.h>
#include "../../main.h"

void deletePipe(int xIn, int yIn, int height){
    int x = xIn;
    int y = yIn;

    for (int j = 0; j < 7; j++){
        for (int i = 0; i < 40; i++){
        safePrint(y+j, x+i, "  ", COLOR_PAIR_BABYBLUE);
        }
    }
    for (int j = 0; j < height-4; j++){
        for (int i = 0; i <36; i++){
            safePrint(y+j, x+i+2, "  ", COLOR_PAIR_BABYBLUE);
        }
    }
}

int printPipe(int xIn, int yIn, int height, int sequence){
    int x = xIn;
    int y = yIn;

    switch (sequence){
    case 0:
        for (int i = 0; i < 7; i++){
           safePrint(y+i, x, " ", COLOR_PAIR_BLACK);
        }
        return 1;
        break;

    case 1:
        safePrint(y, x, " ", COLOR_PAIR_BLACK);
        for (int i = 1; i < 6; i++){
           safePrint(y+i, x, " ", COLOR_PAIR_GREEN);
        }
        for (int i = 6; i < height; i++){
           safePrint(y+i, x, " ", COLOR_PAIR_BLACK);
        }
        break;

    case 2:
        safePrint(y, x, " ", COLOR_PAIR_BLACK);
        for (int i = 1; i < height; i++){
           safePrint(y+i, x, " ", COLOR_PAIR_GREEN);
        }
        return 1;
        break;

    case 3:
        safePrint(y, x, " ", COLOR_PAIR_BLACK);
        for (int i = 1; i < 6; i++){
           safePrint(y+i, x, " ", COLOR_PAIR_GREEN);
        }
        for (int i = 6; i < height; i++){
           safePrint(y+i, x, " ", COLOR_PAIR_BLACK);
        }
        break;


    case 4:
        for (int i = 0; i < 7; i++){
           safePrint(y+i, x, " ", COLOR_PAIR_BLACK);
        }
        return 1;
        break;
    }
}
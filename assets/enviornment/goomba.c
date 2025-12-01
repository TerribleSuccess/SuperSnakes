#include <curses.h>
#include "../../main.h"

// Goomba written by Ryan
void deleteGoomba(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int j = 0; j < 8; j++){
        for (int i = 0; i < 12; i++){
            safePrint(y+j, x+i, "  ", COLOR_PAIR_BABYBLUE);
        }
    }
}

void printGoomba(int x, int y) {
    safePrint(y+0, x+4, "    ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+1, x+2, "        ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+2, x+0, "            ", COLOR_PAIR_BROWNDEATH);

    safePrint(y + 3, x + 0, "            ", COLOR_PAIR_BROWNDEATH); 
    safePrint(y + 4, x + 0, "            ", COLOR_PAIR_BROWNDEATH); 

    safePrint(y+3, x+2, "  ", COLOR_PAIR_WHITE); 
    safePrint(y+3, x+6, "  ", COLOR_PAIR_WHITE); 
    safePrint(y+4, x+2, "  ", COLOR_PAIR_BLACK); 
    safePrint(y+4, x+6, "  ", COLOR_PAIR_BLACK); 

    safePrint(y+5, x+0, "            ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+6, x+0, "    ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+6, x+4, "    ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+6, x+8, "    ", COLOR_PAIR_BROWNDEATH);

    safePrint(y+7, x+2, "    ", COLOR_PAIR_BLACK);
    safePrint(y+7, x+6, "    ", COLOR_PAIR_BLACK);
}

int checkLeftGoomba(int x, int y) {
    int color_pair_down_left = PAIR_NUMBER(mvinch(y + 8, x - 1));
    if (color_pair_down_left == COLOR_PAIR_BABYBLUE) return 0;
    int color_pair_left = PAIR_NUMBER(mvinch(y+3, x - 1));
    if (color_pair_left != COLOR_PAIR_BABYBLUE) {
        if (color_pair_left == COLOR_PAIR_SKIN){
            gameOn = 0;
        }
        return 0;}
    return 1;
}

int checkRightGoomba(int x, int y) {
    if (x + 12 >= width) return 0;
    int color_pair_down_right = PAIR_NUMBER(mvinch(y + 8, x + 12));
    if (color_pair_down_right == COLOR_PAIR_BABYBLUE) return 0;
    int color_pair_right = PAIR_NUMBER(mvinch(y+3, x + 12));
    if (color_pair_right != COLOR_PAIR_BABYBLUE) {
        if (color_pair_right == COLOR_PAIR_SKIN){
            gameOn = 0;
        }
        return 0;}
    return 1; 
}


struct Coordinates doMovement(int x, int y, int *direction) {
    struct Coordinates newCoords;
    newCoords.x = x;
    newCoords.y = y;
    if (*direction == -1) {
        if (checkLeftGoomba(newCoords.x, height - newCoords.y)) {
            newCoords.x -= 1;
        } else {
            *direction = 1; 
        }
    } else {
        if (checkRightGoomba(newCoords.x, height - newCoords.y)) {
            newCoords.x += 1;
        } else {
           *direction = -1; 
        }
    }
    return newCoords;
}
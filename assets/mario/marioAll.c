#include <curses.h>
#include "../../main.h"

//Mostly by Michael, checks marios hitbox for walls, stars and goombas, also deletes mario
int checkTop(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int i = 0; i < 24; i+=2){
        if (PAIR_NUMBER(mvinch(y-1, x+i)) != COLOR_PAIR_BABYBLUE){
            if (checkForStar(x + i, y - 1)) {
                return 3;
            }
             if(PAIR_NUMBER(mvinch(y+i, x-1)) == COLOR_PAIR_BROWNDEATH) {
                if (hasStar()) {
                    if (checkForGoomba(x + 1, y + i)) {
                        return 1;
                    }
                } else {
                    gameOn = 0;
                }
            }
            return 0;
        }
    }
    return 1;
}

int checkBottom(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    if (y>height-17){
        gameOn = 0;
    }
    for (int i = 0; i < 24; i+=2){
        if (PAIR_NUMBER(mvinch(y+16, x+i)) != COLOR_PAIR_BABYBLUE){
            if (checkForStar(x + i , y + 16)) {
                return 3;
            }
            if(PAIR_NUMBER(mvinch(y+16, x+i)) == COLOR_PAIR_BROWNDEATH && checkForGoomba(x + i, y + 16)) {
               return 2;
            }
            return 0;
        }
    }
    return 1;
}

int checkRight(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int i = 0; i < 16; i+=2){
        if (PAIR_NUMBER(mvinch(y+i, x+24)) != COLOR_PAIR_BABYBLUE) {
            if ((PAIR_NUMBER(mvinch(y+i, x+24)) == COLOR_PAIR_GREYFINISH)){
                gameOn = 2;
                return 0;
            }
            
            if (checkForStar(x+24, y + i)) {
                return 3;
            }
             if(PAIR_NUMBER(mvinch(y+i, x+24)) == COLOR_PAIR_BROWNDEATH) {
                if (hasStar()) {
                    if (checkForGoomba(x + 24, y + i)) {
                        return 1;
                    }
                } else {
                    gameOn = 0;
                }
            } 
            return 0;
        }
    }
    return 1;
}

int checkLeft(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int i = 0; i < 16; i+=2){
        if (PAIR_NUMBER(mvinch(y+i, x-1)) != COLOR_PAIR_BABYBLUE){
            if (checkForStar(x - 1, y + i)) {
                return 3;
            }
            if(PAIR_NUMBER(mvinch(y+i, x-1)) == COLOR_PAIR_BROWNDEATH) {
                if (hasStar()) {
                    if (checkForGoomba(x - 1, y + i)) {
                        return 1;
                    }
                } else {
                    gameOn = 0;
                }
            }
            return 0;
        }
    }
    return 1;
}

void deleteMario(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int i = 0; i < 16; i++){
        safePrint(y+i, x, "                        ", COLOR_PAIR_BABYBLUE);
    }
}

int starColor(int color) {
    if (!hasStar()) return color;

    switch (getStarFlashIndex()) {
        case 0: // YELLOW
        case 1:
            if (color == COLOR_PAIR_SKIN ||
                color == COLOR_PAIR_RED ||
                color == COLOR_PAIR_BROWN)
                return COLOR_PAIR_YELLOW;
            return color;

        case 2:
        case 3: // CYAN
            if (color == COLOR_PAIR_SKIN ||
                color == COLOR_PAIR_RED ||
                color == COLOR_PAIR_BROWN)
                return COLOR_PAIR_BABYBLUE;
            return color;

        case 4:
        case 5: // WHITE FLASH
            if (color != COLOR_PAIR_BLACK)
                return COLOR_PAIR_WHITE;
            return color;
    }
    return color;
}
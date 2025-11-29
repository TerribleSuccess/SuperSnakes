#include <curses.h>
#include "../../main.h"

int checkTop(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int i = 0; i < 24; i+=2){
        if (PAIR_NUMBER(mvinch(y-1, x+i)) != COLOR_PAIR_BABYBLUE){
            if(PAIR_NUMBER(mvinch(y+i, x-1)) == COLOR_PAIR_BROWNDEATH) gameOn = 0;
            return 0;
        }
    }
    return 1;
}

int checkBottom(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int i = 0; i < 24; i+=2){
        if (PAIR_NUMBER(mvinch(y+16, x+i)) != COLOR_PAIR_BABYBLUE)return 0;
    }
    return 1;
}

int checkRight(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int i = 0; i < 16; i+=2){
        if (PAIR_NUMBER(mvinch(y+i, x+24)) != COLOR_PAIR_BABYBLUE) {
            if(PAIR_NUMBER(mvinch(y+i, x-1)) == COLOR_PAIR_BROWNDEATH) gameOn = 0;
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
            if(PAIR_NUMBER(mvinch(y+i, x-1)) == COLOR_PAIR_BROWNDEATH) gameOn = 0;
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
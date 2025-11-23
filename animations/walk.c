#include <curses.h>
#include <unistd.h>

#include "../main.h"

void walk(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    int iTwo = 0;
    for(int i = 0; i < 30; i++){
        if (PAIR_NUMBER(mvinch(y-i, x+16)) == COLOR_PAIR_BABYBLUE){
            printMarioSide(x + iTwo, y);
            marioBottomMask(x + iTwo, y);
            iTwo++;
        }
        refresh();
        usleep(1+(i*i*50));
    }
    for(int i = 0; i < 29; i++){
        if(PAIR_NUMBER(mvinch(y+17, x+16)) == COLOR_PAIR_BABYBLUE){
            printMarioSide(x + iTwo, y);
            marioTopMask(x + iTwo, y);
            iTwo--;
        }
        refresh();
        usleep(12500-(i*250));
    }
}
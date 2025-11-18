#include <curses.h>
#include <unistd.h>

#include "../main.h"

void jump(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    int iTwo = 0;
    for(int i = 0; i < 30; i++){
        if(PAIR_NUMBER(mvinch(y-i, x+16)) == COLOR_PAIR_BABYBLUE){
            printMarioSide(x, y-iTwo);
            marioBottomMask(x, y-iTwo);
            iTwo++;
        }
        refresh();
        usleep(1+(i*i*50));
    }
    for(int i = 0; i < 29; i++){
        if(PAIR_NUMBER(mvinch(y+17, x+16)) == COLOR_PAIR_BABYBLUE){
            printMarioSide(x, y-iTwo);
            marioTopMask(x, y-iTwo);
            iTwo--;
        }
        refresh();
        usleep(12500-(i*250));
    }
}
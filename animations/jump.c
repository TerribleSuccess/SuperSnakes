#include <curses.h>
#include <unistd.h>

#include "../main.h"

void jump(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for(int i = 0; i < 24; i++){
        printMarioSide(x, y-i);
        marioBottomMask(x, y-i);
        refresh();
        usleep(4000+(i*250));
    }
    for(int i = 25; i > 0; i--){
        printMarioSide(x, y-i);
        marioTopMask(x, y-i);
        refresh();
        usleep(12500-(i*250));
    }
}
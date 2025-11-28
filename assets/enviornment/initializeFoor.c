#include <curses.h>
#include "../../main.h"

void initializeFloor(int start){
    for (int i = 0; i < width+8; i+=8){
        printBrick(i, height-4, start);
    }
}
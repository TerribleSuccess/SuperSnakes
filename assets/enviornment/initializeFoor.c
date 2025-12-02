#include <curses.h>
#include "../../main.h"

//prints the entire floor from a starting seed, 1 of 4 positions that makes it look like it moves

//NOT USED ANYMORE...
void initializeFloor(int start){
    for (int i = 0; i < width+8; i+=8){
        printBrick(i, height-4, start);
    }
}
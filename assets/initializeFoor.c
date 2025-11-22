#include <curses.h>
#include "../main.h"

void initializeFloor(int xIn, int yIn, int sequenceIn){
    int x = xIn;
    int y = yIn;
    int sequence = sequenceIn;

    for (int i = 0; i < x; i++){
        sequence = printBrick(i, y-4, sequence);
    }
}
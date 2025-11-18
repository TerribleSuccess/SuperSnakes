#include <curses.h>
#include <unistd.h>

#include "../main.h"

void right(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    deleteMarioSide(x, y);
    printMarioSide(x+1, y);
}
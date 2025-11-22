#include <curses.h>
#include "../main.h"

void printBrick(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    attron(COLOR_PAIR(COLOR_PAIR_BROWN));
    mvprintw(y, x, "____|____|");
    mvprintw(y+1, x, "__|____|__");
    mvprintw(y+2, x, "____|____|");
    mvprintw(y+3, x, "__|____|__");
}
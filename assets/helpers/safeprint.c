#include <curses.h>
#include "../../main.h"

void safePrint(int y, int x, char *string, int color){
    if(y < 0 || y >= height) return;
    if(x < 0 || x >= width) return;

    attron(COLOR_PAIR(color));
    mvprintw(y, x, "%s", string);
}
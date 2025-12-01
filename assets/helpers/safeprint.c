#include <curses.h>
#include "../../main.h"
#include <string.h>

//Mostly By Michael, print function that does not allow printing offscreen
void safePrint(int y, int x, char *string, int color){
    if(y < 0 || y >= height) return;
    if(x < 0 || x >= width) return;

    int len = strlen(string);
    if (x + len > width) return;

    attron(COLOR_PAIR(color));
    mvprintw(y, x, "%s", string);
}
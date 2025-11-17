#include <curses.h>

void initializeColors(){
    start_color();
    init_color(COLOR_MAGENTA, 588, 294, 0);

    init_pair(1, COLOR_WHITE,   COLOR_WHITE);
    init_pair(2, COLOR_RED,     COLOR_RED);
    init_pair(3, COLOR_YELLOW,  COLOR_YELLOW);
    init_pair(4, COLOR_BLUE,    COLOR_BLUE);
    init_pair(5, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_BLACK,   COLOR_BLACK);
    init_pair(7, COLOR_YELLOW,  COLOR_YELLOW);
}
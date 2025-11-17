#include <curses.h>
#include "../main.h"

//Colors are from 0 to 999 not 0 to 255, you can convert them with maths

//Non-default colors and color pairs are defined in main.h but included here for reference
// #define COLOR_PAIR_WHITE 1
// #define COLOR_PAIR_RED 2
// #define COLOR_PAIR_ORANGE 3
// #define COLOR_PAIR_BLUE 4
// #define COLOR_PAIR_BROWN 5
// #define COLOR_PAIR_BLACK 6
// #define COLOR_PAIR_YELLOW 7

// #define COLOR_BROWN 8
// #define COLOR_ORANGE 9



void initializeColors(){
    start_color();

    init_color(COLOR_BROWN, 535, 296, 183);
    init_color(COLOR_ORANGE, 992, 816, 687);

    init_pair(COLOR_PAIR_WHITE, COLOR_WHITE,   COLOR_WHITE);
    init_pair(COLOR_PAIR_RED, COLOR_RED,     COLOR_RED);
    init_pair(COLOR_PAIR_ORANGE, COLOR_ORANGE,  COLOR_ORANGE);
    init_pair(COLOR_PAIR_BLUE, COLOR_BLUE,    COLOR_BLUE);
    init_pair(COLOR_PAIR_BROWN, COLOR_BROWN, COLOR_BROWN);
    init_pair(COLOR_PAIR_BLACK, COLOR_BLACK,   COLOR_BLACK);
    init_pair(COLOR_PAIR_YELLOW, COLOR_YELLOW,  COLOR_YELLOW);
}
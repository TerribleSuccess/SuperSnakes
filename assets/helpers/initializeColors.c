#include <curses.h>
#include "../../main.h"

//Colors are from 0 to 999 not 0 to 255, can convert
//Non-default colors and color pairs are defined in main.h but included here for reference

void initializeColors(){
    start_color();

    init_color(COLOR_BROWN, 535, 296, 183);
    init_color(COLOR_SKIN, 992, 816, 687);
    init_color(COLOR_RED, 929, 109, 144);
    init_color(COLOR_BLUE, 0, 394, 699);
    init_color(COLOR_YELLOW, 980, 945, 187);
    init_color(COLOR_BABYBLUE,156, 789,999);

    init_color(COLOR_BROWNDEATH, 600, 350, 183);

    init_pair(COLOR_PAIR_BROWNDEATH, COLOR_BROWNDEATH, COLOR_BROWNDEATH);
    init_pair(COLOR_PAIR_WHITE, COLOR_WHITE,   COLOR_WHITE);
    init_pair(COLOR_PAIR_RED, COLOR_RED,     COLOR_RED);
    init_pair(COLOR_PAIR_SKIN, COLOR_SKIN,  COLOR_SKIN);
    init_pair(COLOR_PAIR_BLUE, COLOR_BLUE,    COLOR_BLUE);
    init_pair(COLOR_PAIR_BROWN, COLOR_BLACK, COLOR_BROWN);
    init_pair(COLOR_PAIR_BLACK, COLOR_BLACK,   COLOR_BLACK);
    init_pair(COLOR_PAIR_YELLOW, COLOR_YELLOW,  COLOR_YELLOW);
    init_pair(COLOR_PAIR_BABYBLUE, COLOR_BABYBLUE, COLOR_BABYBLUE);
    init_pair(COLOR_PAIR_TITLETEXT, COLOR_BLACK, COLOR_WHITE);
    init_pair(COLOR_PAIR_GREEN, COLOR_GREEN, COLOR_GREEN);
    init_pair(COLOR_PAIR_STARBLACK, COLOR_BLACK, COLOR_BLACK);
}
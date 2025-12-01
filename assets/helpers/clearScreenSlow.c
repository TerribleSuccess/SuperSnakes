#include <curses.h>
#include "../../main.h"

//By Michael sets screen to all blue
void clearScreenSlow(){
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE));
    for(int y = 0; y <= height; y++){
        for(int x = 0; x <= width; x++){
            mvprintw(y, x, " ");
        }
    }
}
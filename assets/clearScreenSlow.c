#include <curses.h>
#include <sys/ioctl.h>
#include "../main.h"

void clearScreenSlow(){
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE));
    for(int y = 0; y < height; y++){
        for(int x = 0; x < width; x++){
            mvprintw(y, x, " ");
        }
    }
}
#include <curses.h>
#include <sys/ioctl.h>
#include "../main.h"

void clearScreenSlow(){
    int width;
    int height;
    struct winsize wbuf;

    if(ioctl(0, TIOCGWINSZ, &wbuf) != - 1){
        width = wbuf.ws_col;
        height = wbuf.ws_row;
    }

    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE));
    for(int y = 0; y < height; y++){
        for(int x = 0; x < width; x++){
            mvprintw(y, x, " ");
        }
    }
}
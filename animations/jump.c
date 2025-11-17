#include <curses.h>
#include <unistd.h>

#include "../main.h"

void jump(int x, int y){
    int marioX = x;
    int marioY = y;
    for(int i = 0; i < 30; i++){
        clear();
        wbkgd(stdscr, COLOR_PAIR(4));
        printMarioSide(marioX, marioY-i);
        printTitle();
        refresh();
        usleep(4000+(i*250));
    }
    for(int i = 30; i > 0; i--){
        clear();
        wbkgd(stdscr, COLOR_PAIR(4));
        printMarioSide(marioX, marioY-i);
        printTitle();
        refresh();
        usleep(12500-(i*250));
    }
}
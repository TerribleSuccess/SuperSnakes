#include <curses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "main.h"

int main(){
    int width;
    int height;
    struct winsize wbuf;
    if(ioctl(0, TIOCGWINSZ, &wbuf) != - 1){
        width = wbuf.ws_col;
        height = wbuf.ws_row;
    }

    // 1 time calls
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    initializeColors();

    clear();
    int marioX = width/8;
    int marioY = (height*3)/4;
    printMarioSide(marioX, marioY);
    refresh();
    printTitle();
    printMarioSide(marioX, marioY);

    int startMenuToggle = 1;
    while(startMenuToggle){
        int ch = getch();
        switch(ch){
            case 'w': jump(marioX, marioY); break;
            case 'a': ; break;
            case 's': ; break;
            case 'd': right(marioX, marioY); marioX+=1; break;
            case 'q':startMenuToggle = 0; break;
        }
    }

    //Game Code!

    
    //End Of Program
    endwin();
    return 1;
}
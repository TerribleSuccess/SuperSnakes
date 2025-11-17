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
    usleep(1000);

    clear();
    printMarioSide(width/8, (height*3)/4);
    refresh();
    printTitle();
    printMarioSide(width/8, (height*3)/4);

    int startMenuToggle = 1;
    while(startMenuToggle){
        int ch = getch();
        switch(ch){
            case 'w':jump(width/8, (height*3)/4); break;
            case 'a':jump(width/8, (height*3)/4); break;
            case 's':jump(width/8, (height*3)/4); break;
            case 'd':jump(width/8, (height*3)/4); break;
            case 'q':startMenuToggle = 0; break;
        }
    }

    //Game Code!

    //End Of Program
    endwin();
    return 1;
}
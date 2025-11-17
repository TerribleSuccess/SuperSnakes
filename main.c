#include <curses.h>
#include <sys/ioctl.h>

#include "main.h"

double marioY;
double marioX;

int main(){
    struct winsize wbuf;

    if(ioctl(0, TIOCGWINSZ, &wbuf) != - 1){
        marioX = wbuf.ws_col/2;
        marioY = wbuf.ws_row/2;
    }

    initscr(); //Initialize screen
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    int ch = getch();
    int on = 1;
    while (on){
        char c = getchar();
        // switch(c){
        //     case 'w': jump(); break;
        //     case 'a': jump(); break;
        //     case 's': jump(); break;
        //     case 'd': jump(); break;
        //     case 'q': on = 0; break;
        // }
    }
    endwin();
    return 1;
}
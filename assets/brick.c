#include <curses.h>
#include "../main.h"

// OG print brick

// void printBrick(int xIn, int yIn){
//     int x = xIn;
//     int y = yIn;

//     attron(COLOR_PAIR(COLOR_PAIR_BROWN));
//     mvprintw(y,   x, "____|____|");
//     mvprintw(y+1, x, "__|____|__");
//     mvprintw(y+2, x, "____|____|");
//     mvprintw(y+3, x, "__|____|__");
// }


int printBrick(int xIn, int yIn, int sequence){
    int x = xIn;
    int y = yIn;

    attron(COLOR_PAIR(COLOR_PAIR_BROWN));

    switch (sequence){
    case 0:
        mvprintw(y,   x, "__");
        mvprintw(y+1, x, "__");
        mvprintw(y+2, x, "__");
        mvprintw(y+3, x, "__");
        return 1;
        break;

    case 1:
        mvprintw(y,   x, "__");
        mvprintw(y+1, x, "|_");
        mvprintw(y+2, x, "__");
        mvprintw(y+3, x, "|_");
        return 2;
        break;

    case 2:
        mvprintw(y,   x, "|_");
        mvprintw(y+1, x, "__");
        mvprintw(y+2, x, "|_");
        mvprintw(y+3, x, "__");
        return 3;
        break;

    case 3:
        mvprintw(y,   x, "__");
        mvprintw(y+1, x, "_|");
        mvprintw(y+2, x, "__");
        mvprintw(y+3, x, "_|");
        return 4;
        break;

    case 4:
        mvprintw(y,   x, "_|");
        mvprintw(y+1, x, "__");
        mvprintw(y+2, x, "_|");
        mvprintw(y+3, x, "__");
        return 0;
        break;
    }
}
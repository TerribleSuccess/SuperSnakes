#include <curses.h>
#include "../main.h"


void printTitleText(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    attron(COLOR_PAIR(COLOR_PAIR_RED));
    for (int j = 0; j < 6; j++){
        for (int i = 0; i < 60; i++){
            mvprintw(y+j, x+i, " ");
        }
    }
    
    attron(COLOR_PAIR(COLOR_PAIR_TITLETEXT));
    for (int j = 0; j < 4; j++){
        for (int i = 0; i < 56; i++){
            mvprintw(y+j+1, x+i+2, " ");
        }
    }
    
    mvprintw(y+1, x+14,"Created By: Ryan P and Michael C");
    mvprintw(y+2, x+6,"To control mario utilize WASD or the arrow keys");
    mvprintw(y+3, x+13,"To exit the game press the esc key");
    mvprintw(y+4, x+18,"Press any key to start!");
}
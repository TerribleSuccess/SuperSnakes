#include <curses.h>

void printBackground(int width, int height){
    attron(COLOR_PAIR(4));
    for(int i = 0; i < height; i++){
        for(int i = 0; i < width; i++){
            printw(" ");
        }
    }
}
#include <curses.h>
void printBackground(int width, int height){
    start_color();
    init_pair(4, COLOR_BLUE, COLOR_BLUE);
    attron(COLOR_PAIR(4));
    for(int i = 0; i < height; i++){
        for(int i = 0; i < width; i++){
            printw(" ");
        }
    }
}
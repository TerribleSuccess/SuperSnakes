#include <curses.h>
#include "../../main.h"

void printCastle(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    for (int i = 0; i < 30; i++){
        safePrint(y + i, x + 10, "    ", COLOR_PAIR_GREYFINISH);
    }

    for (int i = 0; i < 40; i++)safePrint(y+19, x+i+38, " ", COLOR_PAIR_BLACK);
    
    for (int i = 0; i < 12; i++)safePrint(y+i+19, x+38, "  ", COLOR_PAIR_BLACK);

    for (int j = 0; j < 10; j += 4){
        for (int i = 0; i < 40; i += 8){
            printBrick(x + i + 40, y + j+20, 0); 
        }
    }
}


void deleteCastle(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
for (int j = 0; j < 30; j++){
    for (int i = 0; i < 60; i++){
        safePrint(y + j, x + i, " ", COLOR_PAIR_BABYBLUE);
    }
}

}
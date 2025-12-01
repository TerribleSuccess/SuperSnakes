#include <curses.h>
#include "../../main.h"

//Prints the castle used at the end of a level
void printCastle(int xIn, int yIn){
    int x = xIn;
    int y = height-yIn;
    for (int i = 0; i < 40; i++){
        safePrint(y+i, x, "    ", COLOR_PAIR_GREYFINISH);
    }
    

    for (int j = 0; j < 40; j+=4){
        for (int i = 0; i < 80; i+=8){
            printBrick(x+i+10, y+j, 0);
        }
    }
}

void deleteCastle(int xIn, int yIn){
    int x = xIn;
    int y = height-yIn;
    for (int j = 0; j < 40; j++){
        for (int i = 0; i < 80; i++){
            safePrint(y+j, x+i, " ", COLOR_PAIR_BABYBLUE);
        }
    }
}
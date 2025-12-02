#include <curses.h>
#include "../../main.h"

void printCastle(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    for (int i = 0; i < height-14; i++){
        safePrint(10 + i, x + 100, "    ", COLOR_PAIR_GREYFINISH);
    }
    safePrint(8, x + 99, "      ", COLOR_PAIR_YELLOW);
    safePrint(9, x + 99, "      ", COLOR_PAIR_YELLOW);

    for (int j = 0; j < 10; j += 4){
        for (int i = 0; i < 44; i += 8){
            printBrick(x + i + 130, y + j+20, 0); 
        }
    }

    for (int i = 0; i < 44; i+=10)safePrint(y+19, x+i+128, "        ", COLOR_PAIR_BLACK);
    for (int i = 6; i < 44; i+=10)safePrint(y+20, x+i+128, "      ", COLOR_PAIR_BLACK);

    for (int i = 0; i < 11; i++)safePrint(y+i+19, x+128, "  ", COLOR_PAIR_BLACK);
    for (int i = 0; i < 11; i++)safePrint(y+i+19, x+176, "  ", COLOR_PAIR_BLACK);

    safePrint(y+25, x+148, "        ", COLOR_PAIR_BLACK);
    safePrint(y+26, x+148, "  ", COLOR_PAIR_BLACK);
    safePrint(y+27, x+148, "  ", COLOR_PAIR_BLACK);
    safePrint(y+28, x+148, "  ", COLOR_PAIR_BLACK);
    safePrint(y+29, x+148, "  ", COLOR_PAIR_BLACK);
    safePrint(y+26, x+154, "  ", COLOR_PAIR_BLACK);
    safePrint(y+27, x+154, "  ", COLOR_PAIR_BLACK);
    safePrint(y+28, x+154, "  ", COLOR_PAIR_BLACK);
    safePrint(y+29, x+154, "  ", COLOR_PAIR_BLACK);
}


void deleteCastle(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
for (int j = 0; j < height-5; j++){
    for (int i = 0; i < 200; i++){
        safePrint(height - j -5, x + i, " ", COLOR_PAIR_BABYBLUE);
    }
}

}
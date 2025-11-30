#include <curses.h>
#include "../../main.h"

void deleteGoomba(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    for (int j = 0; j < 8; j++){
        for (int i = 0; i < 12; i++){
            safePrint(y+j, x+i, "  ", COLOR_PAIR_BABYBLUE);
        }
    }
}

void printGoomba(int x, int y) {
    safePrint(y+0, x+4, "    ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+1, x+2, "        ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+2, x+0, "            ", COLOR_PAIR_BROWNDEATH);

    safePrint(y + 3, x + 0, "            ", COLOR_PAIR_BROWNDEATH); 
    safePrint(y + 4, x + 0, "            ", COLOR_PAIR_BROWNDEATH); 

    safePrint(y+3, x+2, "  ", COLOR_PAIR_WHITE); 
    safePrint(y+3, x+6, "  ", COLOR_PAIR_WHITE); 
    safePrint(y+4, x+2, "  ", COLOR_PAIR_BLACK); 
    safePrint(y+4, x+6, "  ", COLOR_PAIR_BLACK); 

    safePrint(y+5, x+0, "            ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+6, x+0, "    ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+6, x+4, "    ", COLOR_PAIR_BROWNDEATH);
    safePrint(y+6, x+8, "    ", COLOR_PAIR_BROWNDEATH);

    safePrint(y+7, x+2, "    ", COLOR_PAIR_BLACK);
    safePrint(y+7, x+6, "    ", COLOR_PAIR_BLACK);
}

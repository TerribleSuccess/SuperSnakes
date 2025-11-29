#include <curses.h>
#include "../../main.h"

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

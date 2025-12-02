#include <curses.h>
#include "../../main.h"

//By Michael, Prints Mario Facing Left and Jumping
void printMarioLeftJump(int x, int y)
{
    safePrint(y,   x,    "     ", starColor(COLOR_PAIR_SKIN));
    safePrint(y,   x+8,  "          ", starColor(COLOR_PAIR_RED));
    
    safePrint(y+1, x,    "     ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+1, x+2,  "                  ", starColor(COLOR_PAIR_RED));

    safePrint(y+2, x,    "     ", starColor(COLOR_PAIR_RED));
    safePrint(y+2, x+6,  "  ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+2, x+8,  "  ", starColor(COLOR_PAIR_BLACK));
    safePrint(y+2, x+10, "    ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+2, x+14, "      ", starColor(COLOR_PAIR_BROWN));

    safePrint(y+3, x,    "  ", starColor(COLOR_PAIR_RED));
    safePrint(y+3, x+2,  "      ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+3, x+8,  "  ", starColor(COLOR_PAIR_BLACK));
    safePrint(y+3, x+10, "      ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+3, x+16, "  ", starColor(COLOR_PAIR_BROWN));
    safePrint(y+3, x+18, "  ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+3, x+20, "  ", starColor(COLOR_PAIR_BROWN));

    safePrint(y+4, x+0,  "      ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+4, x+6,  "  ", starColor(COLOR_PAIR_BLACK));
    safePrint(y+4, x+8,  "      ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+4, x+14, "    ", starColor(COLOR_PAIR_BROWN));
    safePrint(y+4, x+18, "  ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+4, x+20, "  ", starColor(COLOR_PAIR_BROWN));

    safePrint(y+5, x,    "  ", starColor(COLOR_PAIR_RED));
    safePrint(y+5, x+2,  "        ", starColor(COLOR_PAIR_BLACK));
    safePrint(y+5, x+10, "        ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+5, x+18, "    ", starColor(COLOR_PAIR_BROWN));

    safePrint(y+6, x,    "    ", starColor(COLOR_PAIR_RED));
    safePrint(y+6, x+4,  "              ", starColor(COLOR_PAIR_SKIN));

    safePrint(y+7, x+1,  "             ", starColor(COLOR_PAIR_RED));
    safePrint(y+7, x+14, "  ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+7, x+16, "    ", starColor(COLOR_PAIR_RED));

    safePrint(y+8, x+2,  "      ", starColor(COLOR_PAIR_RED));
    safePrint(y+8, x+8,  "  ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+8, x+10, "    ", starColor(COLOR_PAIR_RED));
    safePrint(y+8, x+14, "  ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+8, x+16, "      ", starColor(COLOR_PAIR_RED));

    safePrint(y+9, x+4,  "  ", starColor(COLOR_PAIR_RED));
    safePrint(y+9, x+6,  "          ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+9, x+16, "        ", starColor(COLOR_PAIR_RED));

    safePrint(y+10,x+6,  "  ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+10,x+8,  "  ", starColor(COLOR_PAIR_YELLOW));
    safePrint(y+10,x+10, "    ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+10,x+14, "  ", starColor(COLOR_PAIR_YELLOW));
    safePrint(y+10,x+16, "  ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+10,x+18, "  ", starColor(COLOR_PAIR_RED));
    safePrint(y+10,x+20, "    ", starColor(COLOR_PAIR_SKIN));

    safePrint(y+11,x+6,  "            ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+11,x+18, "      ", starColor(COLOR_PAIR_SKIN));

    safePrint(y+12,x+4,  "                ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+12,x+20, "    ", starColor(COLOR_PAIR_SKIN));

    safePrint(y+13,x+4,  "      ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+13,x+10, "    ", starColor(COLOR_PAIR_BABYBLUE));
    safePrint(y+13,x+14, "      ", starColor(COLOR_PAIR_BLUE));

    safePrint(y+14,x+2,  "        ", starColor(COLOR_PAIR_BROWN));
    safePrint(y+14,x+10, "    ", starColor(COLOR_PAIR_BABYBLUE));
    safePrint(y+14,x+14, "        ", starColor(COLOR_PAIR_BROWN));

    safePrint(y+15,x+2,  "        ", starColor(COLOR_PAIR_BROWN));
    safePrint(y+15,x+10, "    ", starColor(COLOR_PAIR_BABYBLUE));
    safePrint(y+15,x+14, "        ", starColor(COLOR_PAIR_BROWN));
}
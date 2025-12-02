#include <curses.h>
#include "../../main.h"

//By Michael, Prints Mario Facing Right and Jumping
void printMarioRightJump(int x, int y) {
    safePrint(y+0, x+6,  "          ", starColor(COLOR_PAIR_RED));
    safePrint(y+0, x+19, "     ",      starColor(COLOR_PAIR_SKIN));

    safePrint(y+1, x+4,  "                  ", starColor(COLOR_PAIR_RED));
    safePrint(y+1, x+22, "  ",              starColor(COLOR_PAIR_SKIN));

    safePrint(y+2, x+4,  "      ", starColor(COLOR_PAIR_BROWN));
    safePrint(y+2, x+10, "    ",  starColor(COLOR_PAIR_SKIN));
    safePrint(y+2, x+14, "  ",    starColor(COLOR_PAIR_BLACK));
    safePrint(y+2, x+16, "  ",    starColor(COLOR_PAIR_SKIN));
    safePrint(y+2, x+19, "     ", starColor(COLOR_PAIR_RED));

    safePrint(y+3, x+2,  "  ",    starColor(COLOR_PAIR_BROWN));
    safePrint(y+3, x+4,  "  ",    starColor(COLOR_PAIR_SKIN));
    safePrint(y+3, x+6,  "  ",    starColor(COLOR_PAIR_BROWN));
    safePrint(y+3, x+8,  "      ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+3, x+14, "  ",    starColor(COLOR_PAIR_BLACK));
    safePrint(y+3, x+16, "      ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+3, x+22, "  ",    starColor(COLOR_PAIR_RED));

    safePrint(y+4, x+2,  "  ",    starColor(COLOR_PAIR_BROWN));
    safePrint(y+4, x+4,  "  ",    starColor(COLOR_PAIR_SKIN));
    safePrint(y+4, x+6,  "    ",  starColor(COLOR_PAIR_BROWN));
    safePrint(y+4, x+10, "      ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+4, x+16, "  ",    starColor(COLOR_PAIR_BLACK));
    safePrint(y+4, x+18, "      ", starColor(COLOR_PAIR_SKIN));

    safePrint(y+5, x+2,  "    ",  starColor(COLOR_PAIR_BROWN));
    safePrint(y+5, x+6,  "        ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+5, x+14, "        ", starColor(COLOR_PAIR_BLACK));
    safePrint(y+5, x+22, "  ",    starColor(COLOR_PAIR_RED));

    safePrint(y+6, x+6,  "              ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+6, x+20, "    ",          starColor(COLOR_PAIR_RED));

    safePrint(y+7, x+4,  "    ", starColor(COLOR_PAIR_RED));
    safePrint(y+7, x+8,  "  ",  starColor(COLOR_PAIR_BLUE));
    safePrint(y+7, x+10, "             ", starColor(COLOR_PAIR_RED));

    safePrint(y+8, x+2,  "      ", starColor(COLOR_PAIR_RED));
    safePrint(y+8, x+8,  "  ",    starColor(COLOR_PAIR_BLUE));
    safePrint(y+8, x+10, "    ",  starColor(COLOR_PAIR_RED));
    safePrint(y+8, x+14, "  ",    starColor(COLOR_PAIR_BLUE));
    safePrint(y+8, x+16, "      ", starColor(COLOR_PAIR_RED));

    safePrint(y+9, x,    "        ", starColor(COLOR_PAIR_RED));
    safePrint(y+9, x+8,  "          ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+9, x+18, "  ",       starColor(COLOR_PAIR_RED));

    safePrint(y+10, x,    "    ",  starColor(COLOR_PAIR_SKIN));
    safePrint(y+10, x+4,  "  ",    starColor(COLOR_PAIR_RED));
    safePrint(y+10, x+6,  "  ",    starColor(COLOR_PAIR_BLUE));
    safePrint(y+10, x+8,  "  ",    starColor(COLOR_PAIR_YELLOW));
    safePrint(y+10, x+10, "    ",  starColor(COLOR_PAIR_BLUE));
    safePrint(y+10, x+14, "  ",    starColor(COLOR_PAIR_YELLOW));
    safePrint(y+10, x+16, "  ",    starColor(COLOR_PAIR_BLUE));

    safePrint(y+11, x,    "      ", starColor(COLOR_PAIR_SKIN));
    safePrint(y+11, x+6,  "            ", starColor(COLOR_PAIR_BLUE));

    safePrint(y+12, x,    "    ",  starColor(COLOR_PAIR_SKIN));
    safePrint(y+12, x+4,  "                ", starColor(COLOR_PAIR_BLUE));

    safePrint(y+13, x+4,  "      ", starColor(COLOR_PAIR_BLUE));
    safePrint(y+13, x+10, "    ",  starColor(COLOR_PAIR_BABYBLUE));
    safePrint(y+13, x+14, "      ", starColor(COLOR_PAIR_BLUE));

    safePrint(y+14, x+2,  "        ", starColor(COLOR_PAIR_BROWN));
    safePrint(y+14, x+10, "    ",  starColor(COLOR_PAIR_BABYBLUE));
    safePrint(y+14, x+14, "        ", starColor(COLOR_PAIR_BROWN));

    safePrint(y+15, x+2,  "        ", starColor(COLOR_PAIR_BROWN));
    safePrint(y+15, x+10, "    ",  starColor(COLOR_PAIR_BABYBLUE));
    safePrint(y+15, x+14, "        ", starColor(COLOR_PAIR_BROWN));
}
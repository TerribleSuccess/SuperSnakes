#include <curses.h>
#include "../../main.h"

//By Michael, Prints Mario Facing Right
void printMarioRight(int x, int y) {
    safePrint(y+0, x+6, "          ", COLOR_PAIR_RED);

    safePrint(y+1, x+4, "                  ", COLOR_PAIR_RED);

    safePrint(y+2, x+4, "      ", COLOR_PAIR_BROWN);
    safePrint(y+2, x+10, "    ", COLOR_PAIR_SKIN);
    safePrint(y+2, x+14, "  ", COLOR_PAIR_BLACK);
    safePrint(y+2, x+16, "  ", COLOR_PAIR_SKIN);

    safePrint(y+3, x+2,  "  ", COLOR_PAIR_BROWN);
    safePrint(y+3, x+4,  "  ", COLOR_PAIR_SKIN);
    safePrint(y+3, x+6,  "  ", COLOR_PAIR_BROWN);
    safePrint(y+3, x+8,  "      ", COLOR_PAIR_SKIN);
    safePrint(y+3, x+14, "  ", COLOR_PAIR_BLACK);
    safePrint(y+3, x+16, "      ", COLOR_PAIR_SKIN);

    safePrint(y+4, x+2,  "  ", COLOR_PAIR_BROWN);
    safePrint(y+4, x+4,  "  ", COLOR_PAIR_SKIN);
    safePrint(y+4, x+6,  "    ", COLOR_PAIR_BROWN);
    safePrint(y+4, x+10, "      ", COLOR_PAIR_SKIN);
    safePrint(y+4, x+16, "  ", COLOR_PAIR_BLACK);
    safePrint(y+4, x+18, "      ", COLOR_PAIR_SKIN);

    safePrint(y+5, x+2,  "    ", COLOR_PAIR_BROWN);
    safePrint(y+5, x+6,  "        ", COLOR_PAIR_SKIN);
    safePrint(y+5, x+14, "        ", COLOR_PAIR_BLACK);

    safePrint(y+6, x+6, "              ", COLOR_PAIR_SKIN);

    safePrint(y+7, x+4, "    ", COLOR_PAIR_RED);
    safePrint(y+7, x+8, "  ", COLOR_PAIR_BLUE);
    safePrint(y+7, x+10, "        ", COLOR_PAIR_RED);

    safePrint(y+8, x+2,  "      ", COLOR_PAIR_RED);
    safePrint(y+8, x+8,  "  ", COLOR_PAIR_BLUE);
    safePrint(y+8, x+10, "    ", COLOR_PAIR_RED);
    safePrint(y+8, x+14, "  ", COLOR_PAIR_BLUE);
    safePrint(y+8, x+16, "      ", COLOR_PAIR_RED);

    safePrint(y+9, x,   "        ", COLOR_PAIR_RED);
    safePrint(y+9, x+8, "          ", COLOR_PAIR_BLUE);
    safePrint(y+9, x+18,"      ", COLOR_PAIR_RED);

    safePrint(y+10,x,   "    ", COLOR_PAIR_SKIN);
    safePrint(y+10,x+4, "  ", COLOR_PAIR_RED);
    safePrint(y+10,x+6, "  ", COLOR_PAIR_BLUE);
    safePrint(y+10,x+8, "  ", COLOR_PAIR_YELLOW);
    safePrint(y+10,x+10,"    ", COLOR_PAIR_BLUE);
    safePrint(y+10,x+14,"  ", COLOR_PAIR_YELLOW);
    safePrint(y+10,x+16,"  ", COLOR_PAIR_BLUE);
    safePrint(y+10,x+18,"  ", COLOR_PAIR_RED);
    safePrint(y+10,x+20,"    ", COLOR_PAIR_SKIN);

    safePrint(y+11,x,   "      ", COLOR_PAIR_SKIN);
    safePrint(y+11,x+6,"            ", COLOR_PAIR_BLUE);
    safePrint(y+11,x+18,"      ", COLOR_PAIR_SKIN);

    safePrint(y+12,x,   "    ", COLOR_PAIR_SKIN);
    safePrint(y+12,x+4,"                ", COLOR_PAIR_BLUE);
    safePrint(y+12,x+20,"    ", COLOR_PAIR_SKIN);

    safePrint(y+13,x+4,"      ", COLOR_PAIR_BLUE);
    safePrint(y+13,x+10,"    ", COLOR_PAIR_BABYBLUE);
    safePrint(y+13,x+14,"      ", COLOR_PAIR_BLUE);

    safePrint(y+14,x+2,"        ", COLOR_PAIR_BROWN);
    safePrint(y+14,x+10,"    ", COLOR_PAIR_BABYBLUE);
    safePrint(y+14,x+14,"        ", COLOR_PAIR_BROWN);

    safePrint(y+15,x+2,"        ", COLOR_PAIR_BROWN);
    safePrint(y+15,x+10,"    ", COLOR_PAIR_BABYBLUE);
    safePrint(y+15,x+14,"        ", COLOR_PAIR_BROWN);
}
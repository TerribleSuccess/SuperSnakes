#include <curses.h>
#include "../../main.h"

void printMarioSideLeft(int x, int y) {
    // Row 0
    safePrint(y+0, x+8, "            ", COLOR_PAIR_RED);

    // Row 1
    safePrint(y+1, x+2, "                    ", COLOR_PAIR_RED);

    // Row 2
    safePrint(y+2, x+6,  "  ", COLOR_PAIR_SKIN);
    safePrint(y+2, x+8,  "  ", COLOR_PAIR_BLACK);
    safePrint(y+2, x+10,  "      ", COLOR_PAIR_SKIN);
    safePrint(y+2, x+16, "      ", COLOR_PAIR_BROWN);

    // Row 3
    safePrint(y+3, x+2,  "      ", COLOR_PAIR_SKIN);
    safePrint(y+3, x+8,  "  ", COLOR_PAIR_BLACK);
    safePrint(y+3, x+10,  "        ", COLOR_PAIR_SKIN);
    safePrint(y+3, x+18, "  ", COLOR_PAIR_BROWN);
    safePrint(y+3, x+20, "  ", COLOR_PAIR_SKIN);
    safePrint(y+3, x+22, "  ", COLOR_PAIR_BROWN);

    // Row 4
    safePrint(y+4, x+0,  "      ", COLOR_PAIR_SKIN);
    safePrint(y+4, x+6,  "  ", COLOR_PAIR_BLACK);
    safePrint(y+4, x+8,  "        ", COLOR_PAIR_SKIN);
    safePrint(y+4, x+16, "    ", COLOR_PAIR_BROWN);
    safePrint(y+4, x+20, "  ", COLOR_PAIR_SKIN);
    safePrint(y+4, x+22, "  ", COLOR_PAIR_BROWN);

    // Row 5
    safePrint(y+5, x+2,  "        ", COLOR_PAIR_BLACK);
    safePrint(y+5, x+10,  "          ", COLOR_PAIR_SKIN);
    safePrint(y+5, x+20, "    ", COLOR_PAIR_BROWN);

    // Row 6
    safePrint(y+6, x+4, "                ", COLOR_PAIR_SKIN);

    // Row 7
    safePrint(y+7, x+8,  "        ", COLOR_PAIR_RED);
    safePrint(y+7, x+16,  "  ", COLOR_PAIR_BLUE);
    safePrint(y+7, x+18, "    ", COLOR_PAIR_RED);

    // Row 8
    safePrint(y+8, x+4,  "      ", COLOR_PAIR_RED);
    safePrint(y+8, x+10,  "  ", COLOR_PAIR_BLUE);
    safePrint(y+8, x+12,  "    ", COLOR_PAIR_RED);
    safePrint(y+8, x+16, "  ", COLOR_PAIR_BLUE);
    safePrint(y+8, x+18, "      ", COLOR_PAIR_RED);

    // Row 9
    safePrint(y+9, x+2,  "      ", COLOR_PAIR_RED);
    safePrint(y+9, x+8,  "          ", COLOR_PAIR_BLUE);
    safePrint(y+9, x+18, "        ", COLOR_PAIR_RED);

    // Row 10
    safePrint(y+10,x+2,  "    ", COLOR_PAIR_SKIN);
    safePrint(y+10,x+6,  "  ", COLOR_PAIR_RED);
    safePrint(y+10,x+8,  "  ", COLOR_PAIR_BLUE);
    safePrint(y+10,x+10,  "  ", COLOR_PAIR_YELLOW);
    safePrint(y+10,x+12, "    ", COLOR_PAIR_BLUE);
    safePrint(y+10,x+16, "  ", COLOR_PAIR_YELLOW);
    safePrint(y+10,x+18, "  ", COLOR_PAIR_BLUE);
    safePrint(y+10,x+20, "  ", COLOR_PAIR_RED);
    safePrint(y+10,x+22, "    ", COLOR_PAIR_SKIN);

    // Row 11
    safePrint(y+11,x+2,  "      ", COLOR_PAIR_SKIN);
    safePrint(y+11,x+8,  "            ", COLOR_PAIR_BLUE);
    safePrint(y+11,x+20, "      ", COLOR_PAIR_SKIN);

    // Row 12
    safePrint(y+12,x+2,  "    ", COLOR_PAIR_SKIN);
    safePrint(y+12,x+6,  "                ", COLOR_PAIR_BLUE);
    safePrint(y+12,x+22, "    ", COLOR_PAIR_SKIN);

    // Row 13
    safePrint(y+13,x+6,  "      ", COLOR_PAIR_BLUE);
    safePrint(y+13,x+12,  "    ", COLOR_PAIR_BABYBLUE);
    safePrint(y+13,x+16, "      ", COLOR_PAIR_BLUE);

    // Row 14
    safePrint(y+14,x+4,  "        ", COLOR_PAIR_BROWN);
    safePrint(y+14,x+12,  "    ", COLOR_PAIR_BABYBLUE);
    safePrint(y+14,x+16, "        ", COLOR_PAIR_BROWN);

    // Row 15
    safePrint(y+15,x+4,  "        ", COLOR_PAIR_BROWN);
    safePrint(y+15,x+12,  "    ", COLOR_PAIR_BABYBLUE);
    safePrint(y+15,x+16, "        ", COLOR_PAIR_BROWN);
}

void deleteMarioSideLeft(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    safePrint(y+0,  x+8,  "              ", COLOR_PAIR_BABYBLUE);
    safePrint(y+1,  x+2,  "                    ", COLOR_PAIR_BABYBLUE);
    safePrint(y+2,  x+6,  "                ", COLOR_PAIR_BABYBLUE);
    safePrint(y+3,  x+2,  "                      ", COLOR_PAIR_BABYBLUE);
    safePrint(y+4,  x+0,  "                        ", COLOR_PAIR_BABYBLUE);
    safePrint(y+5,  x+2,  "                      ", COLOR_PAIR_BABYBLUE);
    safePrint(y+6,  x+4,  "                ", COLOR_PAIR_BABYBLUE);
    safePrint(y+7,  x+8,  "              ", COLOR_PAIR_BABYBLUE);
    safePrint(y+8,  x+4,  "                    ", COLOR_PAIR_BABYBLUE);
    safePrint(y+9,  x+2,  "                        ", COLOR_PAIR_BABYBLUE);
    safePrint(y+10, x+2,  "                        ", COLOR_PAIR_BABYBLUE);
    safePrint(y+11, x+2,  "                        ", COLOR_PAIR_BABYBLUE);
    safePrint(y+12, x+2,  "                        ", COLOR_PAIR_BABYBLUE);
    safePrint(y+13, x+6,  "                ", COLOR_PAIR_BABYBLUE);
    safePrint(y+14, x+4,  "                      ", COLOR_PAIR_BABYBLUE);
    safePrint(y+15, x+4,  "                      ", COLOR_PAIR_BABYBLUE);
}

// int checkLeft(int xIn, int yIn){
//     int x = xIn;
//     int y = yIn;
//     if ((PAIR_NUMBER(mvinch(y+0, x+24))  == COLOR_PAIR_BABYBLUE) &&
//         (PAIR_NUMBER(mvinch(y+4, x+24))  == COLOR_PAIR_BABYBLUE) &&
//         (PAIR_NUMBER(mvinch(y+8, x+24))  == COLOR_PAIR_BABYBLUE) &&
//         (PAIR_NUMBER(mvinch(y+12, x+24))  == COLOR_PAIR_BABYBLUE) &&
//         (PAIR_NUMBER(mvinch(y+15, x+24))  == COLOR_PAIR_BABYBLUE)){
//         return 1;
//     }
//     return 0;
// }
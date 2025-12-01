#include <curses.h>
#include "../../main.h"


//By Michael, Prints "YOU LOSE"
void printLose(){
    int x = width/2-30;
    int y = height/2-3;

    clearScreenSlow();

    safePrint(y, x, "                                                            ", COLOR_PAIR_RED);

    safePrint(y+1, x, "  ",COLOR_PAIR_RED);
    safePrint(y+1, x+2, "  ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+4, "  ", COLOR_PAIR_RED);
    safePrint(y+1, x+6, "  ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+8, "  ", COLOR_PAIR_RED);
    safePrint(y+1, x+10,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+16,  "  ", COLOR_PAIR_RED);
    safePrint(y+1, x+18,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+20,  "  ", COLOR_PAIR_RED);
    safePrint(y+1, x+22,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+24,  "  ", COLOR_PAIR_RED);

    safePrint(y+1, x+26,  "  ", COLOR_PAIR_RED);
    safePrint(y+1, x+28,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+30,  "      ", COLOR_PAIR_RED);
    safePrint(y+1, x+36,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+42,  "  ", COLOR_PAIR_RED);
    safePrint(y+1, x+44,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+50,  "  ", COLOR_PAIR_RED);
    safePrint(y+1, x+52,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+1, x+58,  "  ", COLOR_PAIR_RED);


    safePrint(y+2, x, "  ",COLOR_PAIR_RED);
    safePrint(y+2, x+2, "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+4, "  ", COLOR_PAIR_RED);
    safePrint(y+2, x+6, "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+8, "  ", COLOR_PAIR_RED);
    safePrint(y+2, x+10,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+12,  "  ", COLOR_PAIR_RED);
    safePrint(y+2, x+14,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+16,  "  ", COLOR_PAIR_RED);
    safePrint(y+2, x+18,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+20,  "  ", COLOR_PAIR_RED);
    safePrint(y+2, x+22,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+24,  "  ", COLOR_PAIR_RED);

    safePrint(y+2, x+26,  "  ", COLOR_PAIR_RED);
    safePrint(y+2, x+28,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+30,  "      ", COLOR_PAIR_RED);
    safePrint(y+2, x+36,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+38,  "  ", COLOR_PAIR_RED);
    safePrint(y+2, x+40,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+42,  "  ", COLOR_PAIR_RED);
    safePrint(y+2, x+44,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+46,  "      ", COLOR_PAIR_RED);
    safePrint(y+2, x+52,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+2, x+54,  "      ", COLOR_PAIR_RED);


    safePrint(y+3, x, "  ",COLOR_PAIR_RED);
    safePrint(y+3, x+2, "      ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+8, "  ", COLOR_PAIR_RED);
    safePrint(y+3, x+10, "  ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+12,  "  ", COLOR_PAIR_RED);
    safePrint(y+3, x+14,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+16,  "  ", COLOR_PAIR_RED);
    safePrint(y+3, x+18,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+20,  "  ", COLOR_PAIR_RED);
    safePrint(y+3, x+22,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+24,  "  ", COLOR_PAIR_RED);

    safePrint(y+3, x+26,  "  ", COLOR_PAIR_RED);
    safePrint(y+3, x+28,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+30,  "      ", COLOR_PAIR_RED);
    safePrint(y+3, x+36,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+38,  "  ", COLOR_PAIR_RED);
    safePrint(y+3, x+40,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+42,  "  ", COLOR_PAIR_RED);
    safePrint(y+3, x+44,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+50,  "  ", COLOR_PAIR_RED);
    safePrint(y+3, x+52,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+3, x+58,  "  ", COLOR_PAIR_RED);

    
    safePrint(y+4, x, "    ",COLOR_PAIR_RED);
    safePrint(y+4, x+4, "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+6, "    ", COLOR_PAIR_RED);
    safePrint(y+4, x+10, "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+12,  "  ", COLOR_PAIR_RED);
    safePrint(y+4, x+14,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+16,  "  ", COLOR_PAIR_RED);
    safePrint(y+4, x+18,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+20,  "  ", COLOR_PAIR_RED);
    safePrint(y+4, x+22,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+24,  "  ", COLOR_PAIR_RED);

    safePrint(y+4, x+26,  "  ", COLOR_PAIR_RED);
    safePrint(y+4, x+28,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+30,  "      ", COLOR_PAIR_RED);
    safePrint(y+4, x+36,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+38,  "  ", COLOR_PAIR_RED);
    safePrint(y+4, x+40,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+42,  "      ", COLOR_PAIR_RED);
    safePrint(y+4, x+48,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+50,  "  ", COLOR_PAIR_RED);
    safePrint(y+4, x+52,  "  ", COLOR_PAIR_WHITE);
    safePrint(y+4, x+54,  "      ", COLOR_PAIR_RED);




    safePrint(y+5, x, "    ",COLOR_PAIR_RED);
    safePrint(y+5, x+4, "  ", COLOR_PAIR_WHITE);
    safePrint(y+5, x+6, "    ", COLOR_PAIR_RED);
    safePrint(y+5, x+10, "      ", COLOR_PAIR_WHITE);
    safePrint(y+5, x+16,  "  ", COLOR_PAIR_RED);
    safePrint(y+5, x+18,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+5, x+24,  "     ", COLOR_PAIR_RED);

    safePrint(y+5, x+28,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+5, x+34,  "   ", COLOR_PAIR_RED);
    safePrint(y+5, x+36,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+5, x+42,  "  ", COLOR_PAIR_RED);
    safePrint(y+5, x+44,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+5, x+50,  "  ", COLOR_PAIR_RED);
    safePrint(y+5, x+52,  "      ", COLOR_PAIR_WHITE);
    safePrint(y+5, x+58,  "  ", COLOR_PAIR_RED);


    safePrint(y+6, x, "                                                            ", COLOR_PAIR_RED);
    refresh();
}
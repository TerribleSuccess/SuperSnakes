#include <curses.h>
#include "../../main.h"

//By Michael prints and deletes star
void deleteStar(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    safePrint(y, x+10, " ", COLOR_PAIR_BABYBLUE);
    safePrint(y, x+11, " ", COLOR_PAIR_BABYBLUE);

    for(int i = 0; i<6; i++){
        safePrint(y+1, x+i+8, " ", COLOR_PAIR_BABYBLUE);
    }
    for(int i = 0; i<10; i++){
        safePrint(y+2, x+i+6, " ", COLOR_PAIR_BABYBLUE);
    }
    for(int i = 0; i<22; i++){
        safePrint(y+3, x+i, " ", COLOR_PAIR_BABYBLUE);
    }
    for(int i = 0; i<22; i++){
        safePrint(y+4, x+i, " ", COLOR_PAIR_BABYBLUE);
    }
    for(int i = 0; i<18; i++){
        safePrint(y+5, x+i+2, " ", COLOR_PAIR_BABYBLUE);
    }
    for(int i = 0; i<14; i++){
        safePrint(y+6, x+i+4, " ", COLOR_PAIR_BABYBLUE);
    }
    for(int i = 0; i<14; i++){
        safePrint(y+7, x+i+4, " ", COLOR_PAIR_BABYBLUE);
    }
    for(int i = 0; i<18; i++){
        safePrint(y+8, x+i+2, " ", COLOR_PAIR_BABYBLUE);
    }
    for(int i = 0; i<18; i++){
        safePrint(y+9, x+i+2, " ", COLOR_PAIR_BABYBLUE);
    }
    safePrint(y+10, x+4, " ", COLOR_PAIR_BABYBLUE);
    safePrint(y+10, x+5, " ", COLOR_PAIR_BABYBLUE);
    safePrint(y+10, x+16, " ", COLOR_PAIR_BABYBLUE);
    safePrint(y+10, x+17, " ", COLOR_PAIR_BABYBLUE);
}

void printStar(int xIn, int yIn){
    int x = xIn;
    int y = yIn;
    safePrint(y, x+10, " ", COLOR_PAIR_STARBLACK);
    safePrint(y, x+11, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+1, x+8, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+1, x+9, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+1, x+10, " ", COLOR_PAIR_YELLOW);
    safePrint(y+1, x+11, " ", COLOR_PAIR_YELLOW);
    safePrint(y+1, x+12, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+1, x+13, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+2, x+6, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+2, x+7, " ", COLOR_PAIR_STARBLACK);
    for (int i = 0; i < 6; i++){
        safePrint(y+2, x+8+i, " ", COLOR_PAIR_YELLOW);
    }
    safePrint(y+2, x+14, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+2, x+15, " ", COLOR_PAIR_STARBLACK);

    for (int i = 0; i < 8; i++){
        safePrint(y+3, x+i, " ", COLOR_PAIR_STARBLACK);
    }
    for (int i = 0; i < 6; i++){
        safePrint(y+3, x+8+i, " ", COLOR_PAIR_YELLOW);
    }
    for (int i = 0; i < 8; i++){
        safePrint(y+3, x+14+i, " ", COLOR_PAIR_STARBLACK);
    }

    safePrint(y+4, x, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+4, x+1, " ", COLOR_PAIR_STARBLACK);
    for (int i = 0; i < 6; i++){
        safePrint(y+4, x+2+i, " ", COLOR_PAIR_YELLOW);
    }
    safePrint(y+4, x+8, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+4, x+9, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+4, x+10, " ", COLOR_PAIR_YELLOW);
    safePrint(y+4, x+11, " ", COLOR_PAIR_YELLOW);
    safePrint(y+4, x+12, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+4, x+13, " ", COLOR_PAIR_STARBLACK);
    for (int i = 0; i < 6; i++){
        safePrint(y+4, x+14+i, " ", COLOR_PAIR_YELLOW);
    }
    safePrint(y+4, x+20, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+4, x+21, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+5, x+2, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+5, x+3, " ", COLOR_PAIR_STARBLACK);
    for (int i = 0; i < 4; i++){
        safePrint(y+5, x+4+i, " ", COLOR_PAIR_YELLOW);
    }
    safePrint(y+5, x+8, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+5, x+9, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+5, x+10, " ", COLOR_PAIR_YELLOW);
    safePrint(y+5, x+11, " ", COLOR_PAIR_YELLOW);
    safePrint(y+5, x+12, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+5, x+13, " ", COLOR_PAIR_STARBLACK);
    for (int i = 0; i < 4; i++){
        safePrint(y+5, x+14+i, " ", COLOR_PAIR_YELLOW);
    }
    safePrint(y+5, x+18, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+5, x+19, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+6, x+4, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+6, x+5, " ", COLOR_PAIR_STARBLACK);
    for (int i = 0; i < 10; i++){
        safePrint(y+6, x+6+i, " ", COLOR_PAIR_YELLOW);
    }
    safePrint(y+6, x+16, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+6, x+17, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+7, x+4, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+7, x+5, " ", COLOR_PAIR_STARBLACK);
    for (int i = 0; i < 10; i++){
        safePrint(y+7, x+6+i, " ", COLOR_PAIR_YELLOW);
    }
    safePrint(y+7, x+16, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+7, x+17, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+8, x+2, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+8, x+3, " ", COLOR_PAIR_STARBLACK);
        for (int i = 0; i < 4; i++){
        safePrint(y+8, x+4+i, " ", COLOR_PAIR_YELLOW);
    }
        for (int i = 0; i < 6; i++){
        safePrint(y+8, x+8+i, " ", COLOR_PAIR_BLACK);
    }
        for (int i = 0; i < 4; i++){
        safePrint(y+8, x+14+i, " ", COLOR_PAIR_YELLOW);
    }
    safePrint(y+8, x+18, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+8, x+19, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+9, x+2, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+9, x+3, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+9, x+4, " ", COLOR_PAIR_YELLOW);
    safePrint(y+9, x+5, " ", COLOR_PAIR_YELLOW);
    safePrint(y+9, x+6, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+9, x+7, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+9, x+14, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+9, x+15, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+9, x+16, " ", COLOR_PAIR_YELLOW);
    safePrint(y+9, x+17, " ", COLOR_PAIR_YELLOW);
    safePrint(y+9, x+18, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+9, x+19, " ", COLOR_PAIR_STARBLACK);

    safePrint(y+10, x+4, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+10, x+5, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+10, x+16, " ", COLOR_PAIR_STARBLACK);
    safePrint(y+10, x+17, " ", COLOR_PAIR_STARBLACK);
}
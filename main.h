#ifndef MAIN_H_
#define MAIN_H_

#define COLOR_PAIR_WHITE 1
#define COLOR_PAIR_RED 2
#define COLOR_PAIR_ORANGE 3
#define COLOR_PAIR_BLUE 4
#define COLOR_PAIR_BROWN 5
#define COLOR_PAIR_BLACK 6
#define COLOR_PAIR_YELLOW 7

#define COLOR_BROWN 8
#define COLOR_ORANGE 9

void initializeColors(void);
void printMarioSide(int, int);
void printTitle(void);
void printStart(int,int);

void jump(int, int);

#endif
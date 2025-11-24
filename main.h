#ifndef MAIN_H_
#define MAIN_H_

//Colors
#define COLOR_PAIR_WHITE 1
#define COLOR_PAIR_RED 2
#define COLOR_PAIR_SKIN 3
#define COLOR_PAIR_BLUE 4
#define COLOR_PAIR_BROWN 5
#define COLOR_PAIR_BLACK 6
#define COLOR_PAIR_YELLOW 7
#define COLOR_PAIR_BABYBLUE 8
#define COLOR_PAIR_TITLETEXT 9

#define COLOR_BROWN 8
#define COLOR_SKIN 9
#define COLOR_BABYBLUE 10

void initializeColors(void);


//Title Screen
void displayTitleScreen(void);
void printTitle(int, int);
void printTitleText(int, int);
void clearScreenSlow(void);

//Ground
int printBrick(int, int, int);
void initializeFloor(int, int, int);

//Mario
int checkTop(int, int);
int checkBottom(int, int);
void printMarioSide(int, int);
void deleteMarioSide(int, int);


#endif
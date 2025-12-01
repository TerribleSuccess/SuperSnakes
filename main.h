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
#define COLOR_PAIR_GREEN 10
#define COLOR_PAIR_BROWNDEATH 11
#define COLOR_PAIR_STARBLACK 12
#define COLOR_PAIR_GREYFINISH 13

#define COLOR_BROWN 8
#define COLOR_SKIN 9
#define COLOR_BABYBLUE 10
#define COLOR_BROWNDEATH 11

extern int width;
extern int height;
extern int gameOn;

void initializeColors(void);


//Title Screen
void displayTitleScreen(void);
void printTitle(int, int);
void printTitleText(int, int);
void clearScreenSlow(void);

//Win Screen
void printWin();

//Ground
void initializeFloor();

void eviornment();
void printBrick(int, int, int);
void deleteBrick(int, int);
void printLose();
void printCastle(int xIn, int yIn);
int printPipe(int, int, int, int);
void deletePipe(int, int, int);
void printGoomba(int, int);
void deleteGoomba(int, int);
void printBlock(int, int);
void deleteBlock(int, int);
void printStar(int, int);
void deleteStar(int, int);
void safePrint(int, int, char *, int);
void deleteCastle(int, int);

// Goomba written by Ryan
struct Coordinates {
    int x;
    int y;
};
struct Coordinates doMovement(int xIn, int yIn, int *direction);
void moveGoombas();
int checkForStar(int, int);

//Mario written by Michael
int checkTop(int, int);
int checkBottom(int, int);
int checkRight(int, int);
int checkLeft(int, int);
void deleteMario(int, int);
void printMarioRight(int, int);
void printMarioRightJump(int, int);
void printMarioLeft(int, int);
void printMarioLeftJump(int, int);

#endif

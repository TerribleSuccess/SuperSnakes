#ifndef MARIO_H
#define MARIO_H

typedef struct {
    volatile int x;
    volatile int y;
    volatile int prevX;
    volatile int prevY;
    volatile int width;
    int height;
    volatile int xVelocity;
    volatile int yVelocity;
} Mario;

Mario createMario(int screenHeight);

void drawMario(Mario *m);
void eraseMario(Mario *m);
void runMarioPhysics(Mario *m, volatile int *right, volatile int *left, volatile int *jump, volatile int *crouch);

//Mario
int checkTop(int, int);
int checkBottom(int, int);
void printMarioSide(int, int);
void deleteMarioSide(int, int);

#endif
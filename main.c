#include <curses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "main.h"
#include <pthread.h>
#include <stdlib.h>
#include <math.h>
#include "objects/mario.h"

// Thread creation
pthread_t renderThread;
pthread_t physicsThread;
pthread_t inputThread;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

volatile int gameOn = 1;
Mario mario;

// Inputs
volatile int jump = 0;
volatile int right = 0;
volatile int left = 0;
volatile int crouch = 1;

// Window size
int width, height;

void* renderFunction(void* arg) {
    int nextFloor = 1;
    drawMario(&mario);

    while (gameOn) {
        pthread_mutex_lock(&mutex);
        eraseMario(&mario);
        drawMario(&mario);
        pthread_mutex_unlock(&mutex);

        refresh();
        usleep(16000); // fps limiter
    }
    return NULL;
}

// old draw function for reference
/*
void* marioDrawFunction(void* arg) {
    int marioX = 20;
    int marioY = 50;

    int nextFloor = 1;
    printMarioSide(marioX, marioY);
    while (gameOn){
        pthread_mutex_lock(&mutex);
        if(jump){
            if (checkBottom(marioX, marioY)!=1){
                yVelocity+=30;
            }
            jump = 0;
        }

        if(right){
            if (xVelocity<60){
                xVelocity+=15;
            }else{
                xVelocity=60;
            }
            right = 0;
        }


        if (checkBottom(marioX, marioY) == 1 && yVelocity <= 0){
            yVelocity--;
        }else if(checkBottom(marioX, marioY+1) == 0 && yVelocity < 0){
            yVelocity = 0;
        }
        if (xVelocity != 0 || yVelocity != 0){
            deleteMarioSide(marioX, marioY);

            if(yVelocity <0)marioY++;
            if(yVelocity >0)marioY--;

            if(xVelocity <0);

            if(xVelocity > 0){
                initializeFloor(width, height, nextFloor);
                if (nextFloor<4){
                    nextFloor++;
                }else{
                    nextFloor = 0;
                }
            }

            printMarioSide(marioX, marioY);
            
            if (xVelocity < 0) xVelocity++;
            if (xVelocity > 0) xVelocity--;
            if (yVelocity > 0) yVelocity--; 
        }
        pthread_mutex_unlock(&mutex);
        refresh();
        usleep(15000-100*(abs(xVelocity)+abs(yVelocity)));
    }
    return NULL;
}
*/

void* physicsFunction(void* arg) {
    while (gameOn) {
        pthread_mutex_lock(&mutex);

        runMarioPhysics(&mario, &right, &left, &jump, &crouch);

        pthread_mutex_unlock(&mutex);

        usleep(8000); // adjust as needed for physics updates
    }

    return NULL;
}

void* inputFunction(void* arg) {
    while (gameOn) {
        int ch = getch(); 

        pthread_mutex_lock(&mutex);
        switch (ch) {
            case 'w': jump = 1; break;
            case 'a': left = 1; break;
            case 's': crouch = 1; break;
            case 'd': right = 1; break;
            case '\e': gameOn = 0; break;
            default: break;
        }
        pthread_mutex_unlock(&mutex);

        usleep(5000); 
    }
    return NULL;
}


int main(){
    struct winsize wbuf;
    if(ioctl(0, TIOCGWINSZ, &wbuf) != - 1){
        width = wbuf.ws_col;
        height = wbuf.ws_row;
    }

    //Change Terminal Settings
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    
    //Setup Title Screen
    initializeColors();
    wbkgd(stdscr, COLOR_PAIR_BABYBLUE);
    refresh();
    printTitle(width/2-40, height/4);
    printTitleText(width/2-30, height/4+16);

    //Start Game on Char input
    getch();

    clearScreenSlow();
    refresh();

    usleep(1000);

    initializeFloor(width, height, 0);
    refresh();
    
    mario = createMario(height);

    pthread_create(&renderThread, NULL, renderFunction, NULL);
    pthread_create(&physicsThread, NULL, physicsFunction, NULL);
    pthread_create(&inputThread, NULL, inputFunction, NULL);

    while (gameOn) {
        usleep(10000);
    }
    //End Of Program
    endwin();
    return 1;
}
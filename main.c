#include <curses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "main.h"
#include <pthread.h>
#include <stdlib.h>
#include <math.h> 

pthread_t drawMario;
pthread_t jumpMario;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

volatile int xVelocity=0, yVelocity=0;
int gameOn = 1;
int width, height;

void* marioDrawFunction(void* arg){
    int marioX = 20;
    int marioY = 50;

    int nextFloor = 1;
    printMarioSide(marioX, marioY);
    while (gameOn){
        pthread_mutex_lock(&mutex);
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
        usleep(10000-100*(abs(xVelocity)+abs(yVelocity)));
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
    int ch = getch();

    clearScreenSlow();
    refresh();

    usleep(1000);

    initializeFloor(width, height, 0);
    refresh();

    pthread_create(&drawMario, NULL, marioDrawFunction, NULL);

    while(gameOn){
        int ch = getch();
        switch(ch){
            case 'w': pthread_mutex_lock(&mutex); if(yVelocity == 0)yVelocity+=30; pthread_mutex_unlock(&mutex); break;
            case 'a': pthread_mutex_lock(&mutex); xVelocity-=15; pthread_mutex_unlock(&mutex); break;;
            case 's': ; break;
            case 'd': pthread_mutex_lock(&mutex); xVelocity+=15; pthread_mutex_unlock(&mutex); break;
            case '\e': gameOn = 0; break;
        }
    }
    //End Of Program
    endwin();
    return 1;
}

//Current bugs and likely fixes:
//
//                  Double Jump when velocity is 0
//                  Check if mario is on the ground inside the game loop in order to change velocity,
//                  to do this instead of directly changing velocity in case, change a jumpRequest
//                  variable and then use that to do the logic in the main game loop!
//
//                  Breaks if w is pressed while d is held down
//                  Caused by a negtive Usleep, add max velocitys!
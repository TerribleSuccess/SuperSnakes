#include <curses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "main.h"
#include <pthread.h>
#include <stdlib.h>

pthread_t drawMario;
pthread_t jumpMario;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

volatile int xVelocity=0, yVelocity=0;
int gameOn = 1;

void right(){
    pthread_mutex_lock(&mutex);
    pthread_mutex_unlock(&mutex);
}

void* marioDrawFunction(void* arg){
    int marioX = 20;
    int marioY = 50;
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
            if(xVelocity <0)marioX++;
            if(yVelocity <0)marioY++;
            if(xVelocity >0)marioX++;
            if(yVelocity >0)marioY--;
            printMarioSide(marioX, marioY);
            
            if (xVelocity < 0) xVelocity++;
            if (xVelocity > 0) xVelocity--;
            if (yVelocity > 0) yVelocity--; 
        }
        pthread_mutex_unlock(&mutex);
        refresh();
        sleep(1);
    }
    return NULL;
}


int main(){
    int width;
    int height;
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
    usleep(10000);

    printBrick(0, height-4);
    printBrick(10, height-4);
    printBrick(20, height-4);
    printBrick(30, height-4);
    printBrick(40, height-4);
    printBrick(50, height-4);
    printBrick(60, height-4);
    printBrick(70, height-4);
    printBrick(80, height-4);
    printBrick(90, height-4);
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

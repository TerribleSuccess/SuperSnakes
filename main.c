#include <curses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "main.h"
#include <pthread.h>
#include <stdlib.h>
#include <math.h>

// Thread creation
pthread_t renderThread;
pthread_t physicsThread;
pthread_t inputThread;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

volatile int gameOn = 1;

// Inputs
volatile int jump = 0;
volatile int right = 0;
volatile int left = 0;
volatile int crouch = 1;

// Window size
int width, height;


//Mario
typedef struct {
    volatile int x;
    volatile int y;
    volatile int width;
    int height;
    volatile int xVelocity;
    volatile int yVelocity;
    volatile int facing;
} Mario;
Mario m;
void* gameLoop(void* arg) {
    while (gameOn){
        pthread_mutex_lock(&mutex);
        int localJump      = jump;
        int localRight     = right;
        int localLeft      = left;

        jump = 0;
        right = 0;
        left = 0;
        pthread_mutex_unlock(&mutex);

        if (m.facing) {
            deleteMarioSide(m.x, m.y);
        } else {
            deleteMarioSideLeft(m.x, m.y);
        }

        if(localJump){
            if (checkBottom(m.x, m.y)!=1){
                m.yVelocity+=30;
            }
        }

        if(localRight){
            m.xVelocity = (m.xVelocity <  45) ? m.xVelocity + 15 :  45;
        }
        
        if(localLeft){
            m.xVelocity = (m.xVelocity > -45) ? m.xVelocity - 15 : -45;
        }

        if (checkBottom(m.x, m.y) && m.yVelocity <= 0){
            m.yVelocity--;
        }else if(!checkBottom(m.x, m.y) && m.yVelocity < 0){
            m.yVelocity = 0;
        }


        if (m.yVelocity != 0){
            m.y += (m.yVelocity < 0) ? 1 : -1;
        }

        if (m.xVelocity != 0){
            if (m.xVelocity > 0 && checkRight(m.x, m.y)){
                m.facing = 1;
                if (m.x < width/2-20){
                    m.x++;
                }else{
                    eviornment();
                }
            }else if (m.xVelocity < 0 && m.x > 1){
                m.facing=0;
                m.x--;
            }
        }
    
        if (m.xVelocity > 0) m.xVelocity--;
        if (m.xVelocity < 0) m.xVelocity++;
        if (m.yVelocity > 0) m.yVelocity--;
        if (m.yVelocity < 0) m.yVelocity++;  

        if (m.facing){
            printMarioSide(m.x, m.y);
        }else{
            printMarioSideLeft(m.x, m.y);
        }

        refresh();
        usleep(15000-100*(abs(m.xVelocity)+abs(m.yVelocity)));
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

    clear();
    clearScreenSlow();
    refresh();

    initializeFloor(width, height, 0);
    refresh();

    m.x = 20;
    m.y = 50;
    m.width = 3;
    m.height = 3;
    m.xVelocity = 0;
    m.yVelocity = 0;
    m.facing = 1;
    
    printMarioSide(m.x, m.y);
    refresh();

    pthread_create(&renderThread, NULL, gameLoop, NULL);

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

    //End Of Program
    endwin();
    return 1;
}
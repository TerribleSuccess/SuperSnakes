#include <curses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int gameOn = 1;

// Inputs
volatile int jump = 0;
volatile int right = 0;
volatile int left = 0;
volatile int crouch = 1;

// Window size
int width, height;


//Mario
typedef struct {
    int x;
    int y;
    int width;
    int height;
    int xVelocity;
    int yVelocity;
    int facing;
    int skidding;
} Mario;

Mario m;

const int ACCEL_GROUND = 4;
const int ACCEL_AIR = 2;
const int MAX_SPEED_GROUND = 6;
const int MAX_SPEED_AIR = 3;
const int FRICTION = 2; 
const int SKID_DECEL = 2;
const int GRAVITY = 2; 
const int JUMP_VEL = 40; 

const int FRAMES_PER_SECOND = 60;

void gameLoop() {
    if (m.facing == 1) {
        deleteMarioSide(m.x, m.y);
    } else if (m.facing == -1) {
        deleteMarioSideLeft(m.x, m.y);
    }

    int onGround = !checkBottom(m.x, m.y);
    if (jump){
        if (onGround) {
            m.yVelocity = JUMP_VEL;
        }
    }

    if (!onGround) {
        m.yVelocity-= GRAVITY;
    } else if (m.yVelocity < 0) {
        m.yVelocity = 0;
    }

    int accel = onGround ? ACCEL_GROUND : ACCEL_AIR;
    int maxSpeed = onGround ? MAX_SPEED_GROUND : MAX_SPEED_AIR;

    int direction = 0;
    if(right){
        direction = 1;
    }
    
    if(left){
        direction = -1;
    }

   
    if (onGround && direction != 0 && direction != m.facing && m.xVelocity != 0) {
        m.skidding = 1;
        if (m.xVelocity > 0) {
            m.xVelocity-=SKID_DECEL;
            if (m.xVelocity > 0) {
                m.xVelocity = 0;
            }
        } else if (m.xVelocity < 0) {
            m.xVelocity+=SKID_DECEL;
            if (m.xVelocity < 0) {
                m.xVelocity = 0;
            }
        }
    } else {
        m.skidding = 0;
        m.xVelocity+=accel * direction;
        if (m.xVelocity > maxSpeed) m.xVelocity = maxSpeed;
        if (m.xVelocity < -maxSpeed) m.xVelocity = -maxSpeed;
    }

    if (onGround && direction == 0 && !m.skidding) {
        if (m.xVelocity > 0) {
            m.xVelocity-=FRICTION;
            if (m.xVelocity < 0) m.xVelocity = 0;
        } else if (m.xVelocity < 0) {
            m.xVelocity+=FRICTION;
            if (m.xVelocity >0) m.xVelocity = 0;
        }
    }


    if (direction != 0) {
        m.facing = direction;
    }


    if (m.yVelocity != 0){
        m.y += (m.yVelocity < 0) ? 1 : -1;
    }

     if (m.xVelocity != 0) {
        if (m.xVelocity > 0 && checkRight(m.x, m.y)){
            m.facing = 1;
            if (m.x < width/2-20){
                m.x+=m.xVelocity;
            }else{
                eviornment();
            }
        }else if (m.xVelocity < 0 && m.x > 2){
            m.x+=m.xVelocity;
        }
    } 
    if (m.facing == 1) { 
        printMarioSide(m.x, m.y);
    }else if (m.facing == -1) {
        printMarioSideLeft(m.x, m.y);
    }

    refresh();
}

int main(){
    struct winsize wbuf;
    if(ioctl(0, TIOCGWINSZ, &wbuf) != - 1){
        width = wbuf.ws_col;
        height = wbuf.ws_row;
    }

    setlocale(LC_ALL, "");
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);

    
    //Setup Title Screen
    initializeColors();
    wbkgd(stdscr, COLOR_PAIR_BABYBLUE);
    refresh();
    printTitle(width/2-40, height/4);
    printTitleText(width/2-30, height/4+16);

    //Start Game on Char input
    getch();
    // trying this over thread
    nodelay(stdscr, TRUE);

    clear();
    clearScreenSlow();
    refresh();

    initializeFloor(0);
    refresh();

    m.x = 20;
    m.y = height - 16 - 5;
    m.width = 3;
    m.height = 3;
    m.xVelocity = 0;
    m.yVelocity = 0;
    m.facing = 1;
    
    printMarioSide(m.x, m.y);
    refresh();

    while (gameOn) {
        right = left = jump = crouch = 0;
        int ch;
        while ((ch = getch()) != ERR) {
            switch (ch) {
                case 'a': left = 1; break;
                case 'd': right= 1; break;
                case 'w': jump = 1; break;
                case 's': crouch = 1; break;
                case '\e': gameOn = 0; break;
            }
        }

        gameLoop();
        usleep(1000000 / FRAMES_PER_SECOND);
    }

    //End Of Program
    endwin();
    return 1;
}
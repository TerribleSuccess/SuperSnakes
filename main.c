#include <curses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <math.h>
#include <time.h>

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
    long starTime;
} Mario;

Mario m;

const int ACCEL_GROUND = 4;
const int ACCEL_AIR = 3;
const int MAX_SPEED_GROUND = 6;
const int MAX_SPEED_AIR = 5;
const int FRICTION = 2; 
const int SKID_DECEL = 2;
const int GRAVITY = 2; 
const int JUMP_VEL = 50; 

const int FRAMES_PER_SECOND = 60;

int goombaMoveTime = 0;
/*
Written by Ryan and Michael
The game loop controls the entire game, it controls marios movement,
calls enviornment() to scroll the screen right and computes marios physics
*/
void gameLoop() {
    deleteMario(m.x, m.y);
    
    int bottomCheck = checkBottom(m.x, m.y);
    int onGround = !bottomCheck;

    if(bottomCheck==2){ //If on goombas head then jump
        m.yVelocity = JUMP_VEL;
    } else if (bottomCheck == 3) { // If collected star
        m.starTime = 15 * FRAMES_PER_SECOND;
    }

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
        m.y += (m.yVelocity < 0) ? 1 : (m.y - 1 < 0)  ? 0 : - 1;
    }

     if (m.xVelocity != 0) {
        int rightCheck = checkRight(m.x + m.xVelocity, m.y);
        if (rightCheck == 3) {
            m.starTime = 15 * FRAMES_PER_SECOND;
        }
        if (m.xVelocity > 0 && rightCheck){
            m.facing = 1;
            if (m.x < width/2-20){
                m.x++;
            }else{
                enviornment();
            }
        }else if (m.xVelocity < 0 && m.x > 2){
            int leftCheck = checkLeft(m.x + m.xVelocity, m.y);
            if (leftCheck == 3) { // If collected star
                m.starTime = 15 * FRAMES_PER_SECOND;
            }
            if (leftCheck){
                m.x--;
            }
        }
    }
    if (m.facing == 1) { 
        if (m.yVelocity > 0){
            printMarioRightJump(m.x, m.y);
        }else{
           printMarioRight(m.x, m.y); 
        }
        
    } else if (m.facing == -1) {
        if (m.yVelocity > 0){
            printMarioLeftJump(m.x, m.y);
        }else{
            printMarioLeft(m.x, m.y); 
        }
    }
    if (m.starTime) {
        mvprintw(0, 0, "Star Time: %ld  ", m.starTime);
        m.starTime--;
    }

    // halfs their speed
    if (goombaMoveTime % 2 == 0) {
        moveGoombas();
        goombaMoveTime++;
    } else {
        goombaMoveTime = 0;
    }
    if (checkForStar(m.x, m.y)) {
        m.starTime = 15 * FRAMES_PER_SECOND;
    }
    refresh();
}
/*
Written by Michael and Ryan:
The main function sets up the window, collects keypresses from the user and handels the start and end screens.
*/
int main(){
    struct winsize wbuf;
    if(ioctl(0, TIOCGWINSZ, &wbuf) != - 1){
        width = wbuf.ws_col;
        height = wbuf.ws_row;
    }

    initscr();
    cbreak();
    noecho();
    curs_set(0);
    srand(time(NULL));
    
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

    enviornment();
    refresh();
    m.x = 20;
    m.y = height - 16 - 22;
    m.width = 3;
    m.height = 3;
    m.xVelocity = 0;
    m.yVelocity = 0;
    m.facing = 1;
    
    printMarioRight(m.x, m.y);
    refresh();
    while (gameOn==1) {
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

    if (gameOn == 2){
        printWin();
    }else{
        printLose();
    }
    sleep(10);

    endwin();
    return 1;
}
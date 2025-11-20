#include <curses.h>
#include <unistd.h>
#include <pthread.h>
#include "../main.h"


// int checkTop(int xIn, int yIn){
//     int x = xIn;
//     int y = yIn;
//     if ((PAIR_NUMBER(mvinch(y, x+6))    == COLOR_PAIR_BABYBLUE) &&
//         (PAIR_NUMBER(mvinch(y, x+12))   == COLOR_PAIR_BABYBLUE) &&
//         (PAIR_NUMBER(mvinch(y+1, x+4))  == COLOR_PAIR_BABYBLUE) &&
//         (PAIR_NUMBER(mvinch(y+1, x+18)) == COLOR_PAIR_BABYBLUE)){
//         return 1;
//     }
//     return 0;
// }

// int checkBottom(int xIn, int yIn){
//     int x = xIn;
//     int y = yIn;
//     if ((PAIR_NUMBER(mvinch(y+16, x+6))  == COLOR_PAIR_BABYBLUE) && (PAIR_NUMBER(mvinch(y+16, x+12)) == COLOR_PAIR_BABYBLUE)){
//         return 1;
//     }
//     return 0;
// }
// void jump(int xIn, int yIn){
//     const int MAX_JUMP = 30;

//     int x = xIn;
//     int y = yIn;

//     int iTwo = 0;
//     for(int i = 0; i < 30; i++){
//         if(checkTop(x, y-i)){
//             deleteMarioSide(x, y-iTwo);
//             iTwo++;
//             printMarioSide(x, y-iTwo);
//             move(1,1);
//             printw("%d", i);
//         }
//         refresh();
//         usleep(10000);
//     }

//     for(int i = iTwo; i > 0; i--){
//         if(checkBottom(x, y-i)){
//             deleteMarioSide(x, y-iTwo);
//             iTwo--;
//             printMarioSide(x, y-iTwo);
//         }
//         refresh();
//         usleep(10000);
//     }
// }

// //Jump for multi-thread
// void* jumpThreadFunction(void* arg){

//     int iTwo = 0;
//     for(int i = 0; i < 30; i++){
//         if(checkTop(marioX, marioY)){
//             pthread_mutex_lock(&screenMutex);
//             deleteMarioSide(marioX, marioY-iTwo);
//             iTwo++;
//             printMarioSide(marioX, marioY-iTwo);
//             move(1,1);
//             printw("%d", i);
//         }
//         refresh();
//         usleep(10000);
//     }
    
//         for(int i = iTwo; i > 0; i--){
//         if(checkBottom(marioX, marioY-i)){
//             deleteMarioSide(marioX, marioY-iTwo);
//             iTwo--;
//             printMarioSide(marioX, marioY-iTwo);
//         }
//         refresh();
//         usleep(10000);
//     }

//     return NULL;
// }
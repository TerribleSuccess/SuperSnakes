
#include <curses.h>
#include "mario.h"

Mario createMario(int screenHeight) {
    Mario m;
    m.x = 20;
    m.y = screenHeight - 16 - 5; // adjust
    m.prevX = m.x;
    m.prevY = m.y;
    m.xVelocity = 0;
    m.yVelocity = 0;
    return m;
}

void drawMario(Mario *m) {
    printMarioSide(m->x, m->y);
}

void eraseMario(Mario *m) {
    deleteMarioSide(m->prevX, m->prevY);
    m->prevX = m->x;
    m->prevY = m->y;
}

void runMarioPhysics(Mario *m, volatile int *right, volatile int *left, volatile int *jump, volatile int *crouch) {
    if (*right) {
        m->xVelocity = (m->xVelocity < 60) ? m->xVelocity + 6 : 60;
        *right = 0;
    }

    if (*left) {
        m->xVelocity = (m->xVelocity > -60) ? m->xVelocity - 6 : -60;
        *left = 0;
    }

    if (*jump) {
         if (checkBottom(m->x, m->y) == 1) {
                m->yVelocity = 30;
        }
        *jump = 0;
    }

    if (checkBottom(m->x, m->y) != 1) {
        m->yVelocity -= 2;
    } else if (m->yVelocity < 0) {
        m->yVelocity = 0;
    }

    if (*crouch) {
        *crouch = 0;
    }

    m->x += (m->xVelocity > 0) ? 1 : (m->xVelocity < 0 ? -1 : 0);
    m->y -= (m->yVelocity > 0 ) ? 1 : 0;
    m->y += (m->yVelocity < 0) ? 1 : 0;

    if (m->xVelocity > 0) m->xVelocity--;
    if (m->xVelocity < 0) m->xVelocity++;
    if (m->yVelocity > 0) m->yVelocity--;
    if (m->yVelocity < 0) m->yVelocity++;
}



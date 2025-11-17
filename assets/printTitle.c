#include <curses.h>

void printTitle(int myX,int myY){
    int y = myY;
    int x = myX;

    // Line 0 - top solid bar
    move(y + 0, x);
    attron(COLOR_PAIR(2));
    for(int i = 0; i < 80; i ++)printw(" ");

    // Line 1
    move(y + 1, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("       ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("       ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("       ");
    attron(COLOR_PAIR(2)); printw("                                     ");

    // Line 2
    move(y + 2, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("      ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("   ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("       ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("   ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("                                     ");

    // Line 3
    move(y + 3, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("       ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("       ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("       ");
    attron(COLOR_PAIR(2)); printw("                                     ");

    // Line 4
    move(y + 4, x);
    attron(COLOR_PAIR(2)); printw("      ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("       ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("       ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("                                      ");

    // Line 5
    move(y + 5, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("       ");
    attron(COLOR_PAIR(1)); printw("       ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("   ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("                                     ");

    // Line 6
    move(y + 6, x);
    attron(COLOR_PAIR(2));
    for(int i = 0; i < 80; i ++)printw(" ");

    // Line 7
    move(y + 7, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("          ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("    ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("      ");
 
    // Line 7
    move(y + 8, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("    ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("          ");

    // Line 9
    move(y + 9, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("    ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("      ");

    // Line 10
    move(y + 10, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw(" ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("   ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("    ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw(" ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("   ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("      ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("      ");

    // Line 11
    move(y + 11, x);
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("    ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("  ");
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("  ");

    // Line 12 - bottom solid bar
    move(y + 12, x);
    attron(COLOR_PAIR(2));
    for(int i = 0; i < 80; i ++)printw(" ");
}

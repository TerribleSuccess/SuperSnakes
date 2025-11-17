#include <curses.h>

void printMarioSide(int marioX, int marioY){
    start_color();
    init_pair(1, COLOR_BLACK,   COLOR_BLACK);
    init_pair(2, COLOR_RED,     COLOR_RED);
    init_pair(3, COLOR_YELLOW,  COLOR_YELLOW);
    init_pair(4, COLOR_BLUE,    COLOR_BLUE);
    init_pair(5, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_BLACK,   COLOR_BLACK);
    init_pair(7, COLOR_YELLOW,  COLOR_YELLOW);

    int y = marioY;
    int x = marioX;
    
    move(y+0, x);
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(2)); printw("          ");
    attron(COLOR_PAIR(1)); printw("        ");

    move(y+1, x);
    attron(COLOR_PAIR(1)); printw("    ");
    attron(COLOR_PAIR(2)); printw("                  ");
    attron(COLOR_PAIR(1)); printw("  ");

    move(y+2, x);
    attron(COLOR_PAIR(1)); printw("    ");
    attron(COLOR_PAIR(5)); printw("      ");
    attron(COLOR_PAIR(3)); printw("    ");
    attron(COLOR_PAIR(6)); printw("  ");
    attron(COLOR_PAIR(3)); printw("  ");
    attron(COLOR_PAIR(1)); printw("      ");

    move(y+3, x);
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(5)); printw("  ");
    attron(COLOR_PAIR(3)); printw("  ");
    attron(COLOR_PAIR(5)); printw("  ");
    attron(COLOR_PAIR(3)); printw("        ");
    attron(COLOR_PAIR(6)); printw("  ");
    attron(COLOR_PAIR(3)); printw("      ");
    attron(COLOR_PAIR(1)); printw("  ");

    move(y+4, x);
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(5)); printw("  ");
    attron(COLOR_PAIR(3)); printw("  ");
    attron(COLOR_PAIR(5)); printw("    ");
    attron(COLOR_PAIR(3)); printw("      ");
    attron(COLOR_PAIR(6)); printw("  ");
    attron(COLOR_PAIR(3)); printw("      ");
    attron(COLOR_PAIR(1)); printw("  ");

    move(y+5, x);
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(5)); printw("    ");
    attron(COLOR_PAIR(3)); printw("        ");
    attron(COLOR_PAIR(6)); printw("        ");
    attron(COLOR_PAIR(1)); printw("  ");

    move(y+6, x);
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(3)); printw("            ");
    attron(COLOR_PAIR(1)); printw("    ");

    move(y+7, x);
    attron(COLOR_PAIR(1)); printw("    ");
    attron(COLOR_PAIR(2)); printw("    ");
    attron(COLOR_PAIR(4)); printw("  ");
    attron(COLOR_PAIR(2)); printw("        ");
    attron(COLOR_PAIR(1)); printw("      ");

    move(y+8, x);
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(2)); printw("      ");
    attron(COLOR_PAIR(4)); printw("  ");
    attron(COLOR_PAIR(2)); printw("    ");
    attron(COLOR_PAIR(4)); printw("  ");
    attron(COLOR_PAIR(2)); printw("      ");
    attron(COLOR_PAIR(1)); printw("  ");

    move(y+9, x);
    attron(COLOR_PAIR(2)); printw("        ");
    attron(COLOR_PAIR(4)); printw("      ");
    attron(COLOR_PAIR(7)); printw("  ");
    attron(COLOR_PAIR(4)); printw("  ");
    attron(COLOR_PAIR(2)); printw("        ");
    attron(COLOR_PAIR(2)); printw("  ");

    move(y+10,x);
    attron(COLOR_PAIR(3)); printw("        ");
    attron(COLOR_PAIR(4)); printw("        ");
    attron(COLOR_PAIR(7)); printw("  ");
    attron(COLOR_PAIR(4)); printw("  ");
    attron(COLOR_PAIR(3)); printw("      ");

    move(y+11,x);
    attron(COLOR_PAIR(3)); printw("      ");
    attron(COLOR_PAIR(4)); printw("                ");
    attron(COLOR_PAIR(3)); printw("      ");

    move(y+12,x);
    attron(COLOR_PAIR(1)); printw("    ");
    attron(COLOR_PAIR(4)); printw("      ");
    attron(COLOR_PAIR(1)); printw("    ");
    attron(COLOR_PAIR(4)); printw("      ");
    attron(COLOR_PAIR(1)); printw("    ");

    move(y+13,x);
    attron(COLOR_PAIR(1)); printw("  ");
    attron(COLOR_PAIR(5)); printw("      ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(5)); printw("      ");
    attron(COLOR_PAIR(1)); printw("  ");

    move(y+14,x);
    attron(COLOR_PAIR(5)); printw("        ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(5)); printw("        ");

    move(y+15,x);
    attron(COLOR_PAIR(5)); printw("        ");
    attron(COLOR_PAIR(1)); printw("      ");
    attron(COLOR_PAIR(5)); printw("        ");
}
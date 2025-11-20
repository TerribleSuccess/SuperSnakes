#include <curses.h>
#include "../main.h"

void deleteMarioSide(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    move(y+0, x+6);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("            ");
    move(y+1, x+4);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                    ");
    move(y+2, x+4);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("              ");
    move(y+3, x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                      ");
    move(y+4, x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                        ");
    move(y+5, x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                      ");
    move(y+6, x+6);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                ");
    move(y+7, x+4);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("              ");
    move(y+8, x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                    ");
    move(y+9, x);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                        ");
    move(y+10,x);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                        ");
    move(y+11,x);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                        ");
    move(y+12,x);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                        ");
    move(y+13,x+4);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                ");
    move(y+14,x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                    ");
    move(y+15,x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("                        ");
}

void printMarioSide(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    move(y+0, x+6);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("            ");

    move(y+1, x+4);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("                    ");

    move(y+2, x+4);
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_BLACK)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("  ");

    move(y+3, x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("        ");
    attron(COLOR_PAIR(COLOR_PAIR_BLACK)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("      ");

    move(y+4, x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("        ");
    attron(COLOR_PAIR(COLOR_PAIR_BLACK)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("      ");

    move(y+5, x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("          ");
    attron(COLOR_PAIR(COLOR_PAIR_BLACK)); printw("        ");

    move(y+6, x+6);
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("                ");

    move(y+7, x+4);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("        ");

    move(y+8, x+2);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("      ");

    move(y+9, x);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("        ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("          ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("      ");

    move(y+10,x);
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_YELLOW)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_YELLOW)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("    ");

    move(y+11,x);
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("            ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("      ");

    move(y+12,x);
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("                ");
    attron(COLOR_PAIR(COLOR_PAIR_SKIN)); printw("    ");


    move(y+13,x+4);
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_BLUE)); printw("      ");
 
    move(y+14,x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("        ");
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("        ");

    move(y+15,x+2);
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("        ");
    attron(COLOR_PAIR(COLOR_PAIR_BABYBLUE)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_BROWN)); printw("        ");
}
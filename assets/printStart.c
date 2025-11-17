#include <curses.h>
#include "../main.h"

void printStart(int xIn, int yIn){
    int x = xIn;
    int y = yIn;

    move(y + 0, x);
    attron(COLOR_PAIR(COLOR_PAIR_RED));
    for(int i = 0; i < 42; i ++)printw(" ");

    move(y+1, x);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");

    move(y + 2, x);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("        ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");

    move(y + 3, x);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");

    move(y + 4, x);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw(" ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("     ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    
    move(y + 5, x);
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("      ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");
    attron(COLOR_PAIR(COLOR_PAIR_WHITE)); printw("  ");
    attron(COLOR_PAIR(COLOR_PAIR_RED)); printw("    ");

    move(y+6, x);
    for(int i = 0; i < 42; i ++)printw(" ");

    refresh();
}
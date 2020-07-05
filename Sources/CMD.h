#ifndef CMD_H
#define CMD_H

#include <ncurses.h>

int mainCMD(int** GameMatrix);

void Print_Horizontal_Boundaries(WINDOW* stdscr,int row,int col);

void Print_Vertical_Boundaries(WINDOW* stdscr,int row,int col);

#endif

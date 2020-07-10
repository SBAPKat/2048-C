#ifndef CMDUTILS_H
#define CMDUTILS_H

#include <ncurses.h>


void Print_Horizontal_Boundaries(WINDOW* stdscr,int row,int col); //Prints horizontal game boundaries

void Print_Vertical_Boundaries(WINDOW* stdscr,int row,int col); //Prints vertical game boundaries

void Print_Cases(int row,int col,int** GameMatrix); //Prints Cases values inside the boundaries

void Update_UI(int** GameMatrix, WINDOW* stdscr); //Calls the previous functions in order to update the entire UI

void Display_Defeat(); //Displays the Defeat Screen

void Def_Colors();
#endif

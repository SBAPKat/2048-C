#ifndef CMDUTILS_H
#define CMDUTILS_H

#include <ncurses.h>

// Prints horizontal game boundaries
void Print_Horizontal_Boundaries(WINDOW* stdscr, int row, int col);

// Prints vertical game boundaries
void Print_Vertical_Boundaries(WINDOW* stdscr, int row, int col);

// Prints Cases values inside the boundaries
void Print_Cases(int row, int col, int** GameMatrix);

// Calls the previous functions in order to update the entire UI
void Update_UI(int** GameMatrix, WINDOW* stdscr);

// Displays the Defeat Screen
void Display_Defeat();

// Defines the colors to be used in the game
void Def_Colors();
#endif

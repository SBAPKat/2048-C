#include <ncurses.h>
#include "randomcase.h"

#define EXIT_SUCCESS 0
void  Print_Vertical_Boundaries(WINDOW* stdscr,int row,int col){
    int i, y;
    for(i=0;i<=row*2-1;i=i+(row*2-1)/4){                      //prints outer vertical boundaries
        for(y=1;y<=row;y++){
            mvaddch(y,i,'|');
        }
    }
    
}

void Print_Horizontal_Boundaries(WINDOW* stdscr,int row,int col){
    int i, y;
    for(i=0;i<=row-1;i=i+(row-1)/4){                      //prints horizontal boundaries
        for(y=0;y<=row*2-2;y++){
            mvaddch(i,y,'_');
        }
    }
}

void Print_Cases(int row, int col, int** GameMatrix){
    col=row*2/4;
    row=row/4;
    char str[12];
    int scrx=col/2,scry=row/2;
    for(int y=0 ;y<=3;y++){
        for(int x=0;x<=3;x++){
            sprintf(str, "%d", GameMatrix[x][y]); //converts the case value to string
            mvprintw(scry,scrx,str); //prints the string to selected coordinates
            scry+=row; //select next case
            refresh();
        }
        scrx+=col; //select next row
        scry=row/2;
    }
}



int mainCMD(int** GameMatrix){
    int keypress;
    int row, col;
    timeout(0);
    initscr(); //initialises the ncurses screen
    raw(); //Control keys don't generate signals, line buffering disabled
    noecho(); //prevents keystrokes from being echo'ed to terminal
    keypad(stdscr, TRUE); //Allows reading of function keys (and arrow keys)
    getmaxyx(stdscr,row,col);
    Print_Horizontal_Boundaries(stdscr,row,col);
    Print_Vertical_Boundaries(stdscr,row,col);
    while(1){
        getmaxyx(stdscr,row,col);
        refresh();
        keypress = getch();
        clear();
        Print_Horizontal_Boundaries(stdscr,row,col);
        Print_Vertical_Boundaries(stdscr,row,col);
        Print_Cases(row,col,GameMatrix);
        refresh();
        switch(keypress)
        {
            case 'q':
                endwin();
                return EXIT_SUCCESS;
                break;

            case 'a':
                GenCase (GameMatrix);
                break;
            
            case KEY_LEFT:
                //move left
                GenCase (GameMatrix);
                break;

            case KEY_RIGHT:
                //move right
                GenCase (GameMatrix);
                break;

            case KEY_UP:
                //move up
                GenCase (GameMatrix);
                break;

            case KEY_DOWN:
                //move down
                GenCase (GameMatrix);
                break;
        }
    }
}





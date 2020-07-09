#include "CMDUtils.h"

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

void Display_Defeat(WINDOW* stdscr){
    int row,col;
    getmaxyx(stdscr,row,col);
    clear();
    mvprintw(row/2,(col-13)/2,"You have lost");
    mvprintw(row/2+1,(col-25)/2,"Press spacebar to restart");
    refresh();
    while(getch()!=' '){}
    clear();
}

void Update_UI(int** GameMatrix, WINDOW* stdscr){
    int row,col;
    getmaxyx(stdscr,row,col);
    clear();
    Print_Horizontal_Boundaries(stdscr,row,col);
    Print_Vertical_Boundaries(stdscr,row,col);
    Print_Cases(row,col,GameMatrix);
}

#include "CMDUtils.h"

void  Print_Vertical_Boundaries(WINDOW* stdscr,int row,int col){
    int i, y;
    for(i=0;i<=row*2-1;i=i+(row*2-1)/4){					//Prints outer vertical boundaries
        for(y=1;y<=row;y++){
            mvaddch(y,i,'|');
        }
    }

}

void Print_Horizontal_Boundaries(WINDOW* stdscr,int row,int col){
    int i, y;
    for(i=0;i<=row-1;i=i+(row-1)/4){						//Prints horizontal boundaries
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
			if(GameMatrix[x][y]<=2048) attron(COLOR_PAIR(GameMatrix[x][y]));	//If case value<=2048, apply color
            sprintf(str, "%d", GameMatrix[x][y]);	//converts the case value to string
            mvprintw(scry,scrx,str);	//prints the string to selected coordinates
            scry+=row;	//select next case
            refresh();
			if(GameMatrix[x][y]<=2048) attroff(COLOR_PAIR(GameMatrix[x][y]));	//If case value<=2048, remove color
        }
        scrx+=col;	//select next row
        scry=row/2;	//Resets y coord
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
    getmaxyx(stdscr,row,col);	//Gets max x and y values
    clear();	//Clears screen
    Print_Horizontal_Boundaries(stdscr,row,col);	//						*
    Print_Vertical_Boundaries(stdscr,row,col);		//Calls the UI functions*
    Print_Cases(row,col,GameMatrix);				//						*
}

void Def_Colors(){
	init_pair(2,COLOR_RED,COLOR_BLACK);				//2								*
	init_pair(4,COLOR_GREEN,COLOR_BLACK);			//4								*
	init_pair(8,COLOR_YELLOW,COLOR_BLACK);			//8								*
	init_pair(16,COLOR_BLUE,COLOR_BLACK);			//16							*
	init_pair(32,COLOR_MAGENTA,COLOR_BLACK);		//32							*
	init_pair(64,COLOR_CYAN,COLOR_BLACK);			//64							*
	init_pair(128,COLOR_RED,COLOR_BLACK);			//128 Cases Color Definitions	*
	init_pair(256,COLOR_GREEN,COLOR_BLACK);			//256							*
	init_pair(512,COLOR_YELLOW,COLOR_BLACK);		//512							*
	init_pair(1024,COLOR_BLUE,COLOR_BLACK);			//1024							*
	init_pair(2048,COLOR_MAGENTA,COLOR_BLACK);		//2048							*
}

#include <ncurses.h>

void Print_Vertical_Boundaries(WINDOW* stdscr,int row,int col){
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

int main(){
    int keypress;
    int row, col, i=0, y=0;
    timeout(0);
    initscr(); //initialises the ncurses screen
    raw(); //Control keys don't generate signals, line buffering disabled
    noecho(); //prevents keystrokes from being echo'ed to terminal
    keypad(stdscr, TRUE); //Allows reading of function keys (and arrow keys)
    while(1){
        clear();
        getmaxyx(stdscr,row,col);
        Print_Horizontal_Boundaries(stdscr,row,col);
        Print_Vertical_Boundaries(stdscr,row,col);
        refresh();
        keypress = getch();
        if(keypress== 'q') break;
    }
    endwin();
    return 1;
}




/*
void printMatrix (int lineNumber, int columnNumber, int** matrix){
    printf("_________________\n");
	for (int i=0;i<lineNumber;i++){
		for (int j=0;j<columnNumber;j++){
			printf(" %d |",matrix[i][j]);
		}
		printf("\n");
	}
    printf("_________________\n");
	return;
}*/

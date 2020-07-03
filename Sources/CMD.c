#include <ncurses.h>

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
        for(i=0;i<=row-1;i=i+row-1){                      //prints horizontal boundaries
            for(y=0;y<=col;y++){
                mvaddch(i,y,'_');
            }
        }
        for(i=0;i<=col-1;i=i+col-1){                      //prints vertical boundaries
            for(y=1;y<=row;y++){
                mvaddch(y,i,'|');
            }
        }
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

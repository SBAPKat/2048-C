#include "CMD.h"

#define EXIT_SUCCESS 0


int mainCMD(int** GameMatrix){
    int number_case=0;
    initscr(); //initialises the ncurses screen
	if(has_colors()==FALSE){
		endwin();
		printf("Your terminal does not support color");
		return EXIT_SUCCESS;
	}
	start_color();
    raw(); //Control keys don't generate signals, line buffering disabled
    noecho(); //prevents keystrokes from being echo'ed to terminal
    keypad(stdscr, TRUE); //Allows reading of function keys (and arrow keys)
	Def_Colors ();
    Update_UI (GameMatrix,stdscr);
    refresh();
    while(1){
        switch(getch())
        {
            case 'q':
                endwin();
                return EXIT_SUCCESS;
                break;

            case KEY_LEFT:
                //number_case-=move left();
                if(defeat (number_case)==1)  {Display_Defeat (stdscr);
                    endwin();
                    return 1;}
                else GenCase (GameMatrix);
                number_case++;
                break;

            case KEY_RIGHT:
                //number_case-=move right();
                if(defeat (number_case)==1)  {Display_Defeat (stdscr);
                    endwin();
                    return 1;}
                else GenCase (GameMatrix);
                number_case++;
                break;

            case KEY_UP:
                //number_case-=move up();
                if(defeat (number_case)==1)  {Display_Defeat (stdscr);
                    endwin();
                    return 1;}
                else GenCase (GameMatrix);
                number_case++;
                break;

            case KEY_DOWN:
                //number_case-=move down();
                if(defeat (number_case)==1) {Display_Defeat (stdscr);
                    endwin();
                    return 1;}
                else GenCase (GameMatrix);
                number_case++;
                break;

            case 'l':
                Display_Defeat (stdscr);
                break;
        }
        Update_UI (GameMatrix,stdscr);
        refresh();
    }
}





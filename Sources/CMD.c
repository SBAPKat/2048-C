#include "CMD.h"

#define EXIT_SUCCESS 0


int mainCMD(int** GameMatrix){
    int number_case=0;
    initscr();	//initialises the ncurses screen
	if(has_colors()==FALSE){
		endwin();
		printf("Your terminal does not support color");
		return EXIT_SUCCESS;
	}
	start_color();	//Activate ncurses colors
    raw();	//Control keys don't generate signals, line buffering disabled
    noecho();	//prevents keystrokes from being echo'ed to terminal
    keypad(stdscr, TRUE);	//Allows reading of function keys (and arrow keys)
	Def_Colors ();	//Defines the colors that we're going to use
    Update_UI (GameMatrix,stdscr);	//Update the entire UI
    refresh();	//Displays the updates
    while(1){	//Game loop
        switch(getch()) //Input 
        {
            case 'q': //we quit
                endwin();
                return EXIT_SUCCESS;
                break;

            case KEY_LEFT:
                //number_case-=move left();
                if(defeat (number_case)==1)  {Display_Defeat (stdscr);	//If you lose					*
                    endwin();											//Quit ncurses					*
                    return 1;											//Return 1 will restart mainCMD	*
                else GenCase (GameMatrix);								//If we don't, generate a case	*
                number_case++;											//Update the number of cases	*
                break;													//Exits the switch case			*

            case KEY_RIGHT:
                //number_case-=move right();
                if(defeat (number_case)==1)  {Display_Defeat (stdscr);	//If you lose					*
                    endwin();                                         	//Quit ncurses					*
                    return 1;}                                        	//Return 1 will restart mainCMD	*
                else GenCase (GameMatrix);                            	//If we don't, generate a case	*
                number_case++;                                        	//Update the number of cases	*
                break;                                                	//Exits the switch case			*

            case KEY_UP:
                //number_case-=move up();
                if(defeat (number_case)==1)  {Display_Defeat (stdscr);	//If you lose					*
                    endwin();                                         	//Quit ncurses					*
                    return 1;}                                        	//Return 1 will restart mainCMD	*
                else GenCase (GameMatrix);                            	//If we don't, generate a case	*
                number_case++;                                        	//Update the number of cases	*
                break;                                                	//Exits the switch case			*

            case KEY_DOWN:
                //number_case-=move down();
                if(defeat (number_case)==1) {Display_Defeat (stdscr);	//If you lose					*
                    endwin();                                        	//Quit ncurses					*
                    return 1;}                                       	//Return 1 will restart mainCMD	*
                else GenCase (GameMatrix);                           	//If we don't, generate a case	*
                number_case++;                                       	//Update the number of cases	*
                break;                                               	//Exits the switch case			*
        }
        Update_UI (GameMatrix,stdscr);	//Update the UI
        refresh();						//Show the updates
    }
}





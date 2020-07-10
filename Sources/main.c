#include "randomcase.h"
#include "Init.h"
#include "Gamelogic.h"
#include "check_args.h"
#include "CMD.h"

int main(int argc, char** argv){
	int** GameMatrix = generateMatrix(4,4);	//Creates the game matrix
    int option;								//Variable in which the option will be stored
    option = check_args (argc, argv);		//Checks the argument to choose a display method
    if(option==1) {							//If there are no arguments, ncurses is selected
        while(mainCMD (GameMatrix)){		//Checks if you still want to play or if you quit
            GameMatrix=generateMatrix(4,4);	//If you still want to play, reset game matrix
        }
    }
    else{
        if(option==2) {/*SDL*/}
        else printf("Bad flag");
    }
   	return EXIT_SUCCESS;
}

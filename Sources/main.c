#include "randomcase.h"
#include "Init.h"
#include "Gamelogic.h"
#include "check_args.h"
#include "CMD.h"

int main(int argc, char** argv){
	int** GameMatrix = generateMatrix(4,4);
    int option;
    option = check_args (argc, argv);
    if(option==1) mainCMD (GameMatrix);
    else{
        if(option==2) {/*SDL*/}
        else printf("Bad flag");
    }
   	return EXIT_SUCCESS;
}

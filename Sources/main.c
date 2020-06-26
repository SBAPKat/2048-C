#include <randomcase.h>
#include <Init.h>
#include <Gamelogic.h>
#include <check_args.h>

int main(int argc, char** argv){
	int** GameMatrix = generateMatrix(4,4);
    char *unused;
    unused = NULL;
	printMatrix (4,4,GameMatrix);
    GenCase (GameMatrix);	
    while(1){
        printMatrix (4,4,GameMatrix);
        GenCase (GameMatrix);
        scanf("%c",unused);
    }	
	return EXIT_SUCCESS;
}

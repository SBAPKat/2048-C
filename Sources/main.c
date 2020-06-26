#include <randomcase.h>
#include <Init.h>
#include <Gamelogic.h>
#include <check_args.h>

int main(int argc, char** argv){
	int** GameMatrix = generateMatrix(4,4);
	printMatrix (4,4,GameMatrix);
	
	
	
	return EXIT_SUCCESS;
	}

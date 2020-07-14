#include <stdio.h>

#include "CMD.h"
#include "Gamelogic.h"
#include "Init.h"
#include "check_args.h"
#include "randomcase.h"

int main(int argc, char** argv) {
	int** GameMatrix = generateMatrix(4, 4);  // Creates the game matrix
	switch (check_args(argc, argv[1])) {
		case 1:
			while (
			    mainCMD(GameMatrix)) {  // Checks if you still want
						    // to play or if you quit
				GameMatrix = generateMatrix(4, 4);  // If you still want to play, reset
					    // game matrix
			}
			break;

		case 2:
			// TODO:IMPLEMENT SDL
			printf("SDL SELECTED");
			break;

		case 3:
			// TODO:IMPLEMENT OPENGL
			printf("OPENGL SELECTED");
			break;
	}
	return EXIT_SUCCESS;
}

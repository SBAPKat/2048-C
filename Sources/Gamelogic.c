#include "Gamelogic.h"


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
}


/*
 * This series of protocol is used to print in color, but it only works if we are on specified OS
 */
void magenta (int bold){
	#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
	printf("\033[%d;35m",bold);
   	#endif
}
void reset(){
	#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
		printf("\033[0m)");
   	#endif

}
void green(int bold){
	#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
	printf("\033[%d;32m",bold);
   	#endif
}
void yellow(int bold){
	#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
		printf("\033[%d;33m",bold);
   	#endif
}
void blue(int bold){
	#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
		printf("\033[%d;34m",bold);
   	#endif
}
void red(int bold){
	#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
		printf("\033[%d;31m",bold);
   	#endif
}
void cyan (int bold){
	#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
		printf("\033[%d;36m",bold);
   	#endif
}


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

void postmove(int** GameMatrix){
	int y,i;
	for(i=0;i<=3;i++){
		for(y=0;y<=3;y++){
			if(GameMatrix[i][y]%2 !=0){
				GameMatrix[i][y]-=1;
			}
		}
	}
}

/*
 * This series of protocols are used to print in color, but only work if we are on specified OS
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


int defeat(int number_case){
    if(number_case>=16) return 1;
    else return 0;
}


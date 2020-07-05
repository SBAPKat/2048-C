#include "randomcase.h"
#include "Init.h"
#include "Gamelogic.h"
#include "check_args.h"
#include "CMD.h"

int main(int argc, char** argv){
	int** GameMatrix = generateMatrix(4,4);
    int input;
	printMatrix (4,4,GameMatrix);
    GenCase (GameMatrix);	
    while(1){
        while ((input = fgetc(stdin)) != EOF){
            if(input=='a'){
                GenCase (GameMatrix);
                printMatrix (4,4,GameMatrix); 
            }
            else{
                if(input!=10){ //ASCII LINE FEED
                printf("sudo press a\n");
            }}
        }}	
	return EXIT_SUCCESS;
}

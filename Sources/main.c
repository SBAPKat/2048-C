#include <randomcase.h>
#include <Init.h>
#include <Gamelogic.h>
#include <check_args.h>

int main(int argc, char** argv){
	int** GameMatrix = generateMatrix(4,4);
    unsigned char input;
	printMatrix (4,4,GameMatrix);
    GenCase (GameMatrix);	
    while(1){
        input=fgetc(stdin);
        if(input=='a'){
            GenCase (GameMatrix);
            printMatrix (4,4,GameMatrix);
        }
        else{
            if(input!=EOF) printf("sudo press a\n"); //does not work for some reason, still displays press a everytime
        }
    }	
	return EXIT_SUCCESS;
}

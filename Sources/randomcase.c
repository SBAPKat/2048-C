#include <randomcase.h> //Header file
#include <stdlib.h>//random
#include <time.h>  //random seed
#include <stdio.h> //debug

void GenCase(int** GameMatrix){
	int random, randomranged, RandA, RandB;
	srand(time(0)); //current time as rseed
	random = (rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates a value between 0 and 3
	do{
		RandA=(rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates a value between 0 and 3 
		RandB=(rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates a value between 0 and 3 
		printf("GameMatrix[%i][%i]", RandA, RandB);		//debug
	}
	while(GameMatrix[RandA][RandB]!=0); //As long as the selected slot isnt empty, select another one
	if(random==0){
		//gen a 4
		printf("%i\n", 4);	//debug
		Gamematrix[RandA][RandB] = 4; //Write to slot
	}
	else{
		//gen a 2
		printf("%i\n", 2);	//debug
		Gamematrix[RandA][RandB] = 2; //Write to slot
	}
}

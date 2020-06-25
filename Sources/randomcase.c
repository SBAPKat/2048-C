#include <stdlib.h>//random
#include <time.h>  //random seed
#include <stdio.h> //debug

void GenCase(int** GameMatrix){
	int random, randomranged, RandA, RandB, i;
	srand(time(0)); //curent time as rseed
	random = (rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates a value between 0 and 3
	do{
		RandA=(rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates a value between 0 and 3 
		RandB=(rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates a value between 0 and 3 
		printf("GameMatrix[%i][%i]", RandA, RandB);		//debug
	}
	while(GameMatrix[RandA][RandB]!=0);
	if(random==0){
		//gen a 4
		printf("%i\n", 4);
		Gamematrix[RandA][RandB] = 4;
	}
	else{
		//gen a 2
		printf("%i\n", 2);
		Gamematrix[RandA][RandB] = 2;
	}
}

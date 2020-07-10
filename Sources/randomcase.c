#include "randomcase.h"	//Header file

void GenCase(int** GameMatrix){
	int random, RandA, RandB;
	srand(time(0));	//current time as rseed
	random = (rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates a value between 0 and 3
	do{
		RandA=(rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/;	//generates a value between 0 and 3 
		RandB=(rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates a value between 0 and 3 
	}
	while(GameMatrix[RandA][RandB]!=0);	//As long as the selected slot isnt empty, select another one
	if(random==0){
		//gen a 4
		GameMatrix[RandA][RandB] = 4;	//Write to slot
	}
	else{
		//gen a 2
		GameMatrix[RandA][RandB] = 2;	//Write to slot
        printf("\n\n");
	}
}

#include <stdlib.h>//random
#include <time.h>  //random seed
#include <stdio.h> //debug

int main(){
	int random, randomranged;
	srand(time(0)); //curent time as rseed
	random = (rand()%(3/*high*/ - 0/*lower*/ + 1))+0/*lower*/; //generates either a 0 or a 1	
	if(random==0){
		//gen a 4
		printf("%i\n", 4);
		return 4;
	}
	else{
		if(random>3){ //random did weird shit
			printf("%c",'N');
			return NULL;
		}
		else{

		//gen a 2
		printf("%i\n", 2);
		return 2;
		}
	}
}

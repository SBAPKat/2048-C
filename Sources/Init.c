#include "Init.h"






int** generateMatrix (int lineNumber, int columnNumber){

	if (lineNumber <= 0 || columnNumber <= 0){ //Checking the user isn't having a stroke
		printf("there is a problem with the size of the matrice, make sure you entered a correct value");
		return NULL; //If he does well call 911		
	}
	
	int** matrix= (int**) malloc(lineNumber * sizeof(int*)); //Generating our matrix
		
	if (matrix == NULL){ //Checking the memorry allocation
		fprintf(stderr,"There is an memory error while generatating the game Matrix");
		return NULL;
	}
		
	for (int i=0;i<lineNumber;i++){
		matrix[i] = (int*) malloc(columnNumber * sizeof(int));
		if (matrix[i] != NULL){		
			for (int j=0;j<columnNumber;j++){
				matrix[i][j]=0;
			}	
		}else{
			fprintf(stderr,"There is an memory error while generatating the 2nd pointer of the game Matrix");
			return NULL;
		}
	}return matrix;
}

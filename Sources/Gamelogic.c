#include <matrix.h>




void printMatrix (int lineNumber, int columnNumber, float** matrix){
	printf("{ ");
	for (int i=0;i<lineNumber;i++){
		for (int j=0;j<columnNumber;j++){
			printf(" %.2f ;",matrix[i][j]);
		}
		printf("\n");
	}printf(" }");
	return;
}

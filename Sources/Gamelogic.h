#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <stdio.h>
#include <stdlib.h>

/**
 * Print the content of the specified matrix
 * @paramlineNumber - number of lines
 * @paramcolumnNumber - number of columns
 * @param matrix - the matrix [lineNumber X columnNumber] to print
 */
void printMatrix(int lineNumber, int columnNumber, int** matrix);

/*
 * This series of protocol is used to print in color, but it only works if we
 * are on specified OS
 */
void magenta(int bold);
void reset();
void green(int bold);
void yellow(int bold);
void blue(int bold);
void red(int bold);
void cyan(int bold);

int defeat(int number_case);

#endif

#ifndef INIT_H
#define INIT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Used to create and initialize a matrix having lineNumber lines and
 * columnNumber columns,base value is zero
 * @param lineNumber - number of lines
 * @param columnNumber - number of columns
 * @return the newly initialized matrix
 */
int** generateMatrix(int lineNumber, int columnNumber);

#endif

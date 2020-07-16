#ifndef RANDOMCASE_H
#define RANDOMCASE_H
#include <stdio.h>   //random seed
#include <stdlib.h>  //random
#include <time.h>    //debug

/**
 * Used to generate a case, which is 3/4 of the time a 2, and otherwise a 4
 * @param GameMatrix - Game matrix
 */
void GenCase(int** GameMatrix);

#endif

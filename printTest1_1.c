#include "printTest1_1.h"
#include <stdio.h>
// Comment to track on git (2)
void printingSentence(void)
{
    int characterNumber = 20;
    printf("\n");
    printf("This line, in %s, in the code is numbered by %d", __FILE__, __LINE__);
    printf("\n");
    printf("\n");
    printf("Only the number %d is going to be printed from function source file\n", characterNumber);
    printf("\n");
}
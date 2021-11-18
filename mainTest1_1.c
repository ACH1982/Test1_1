// Method calling the functionallity
// Comment to track on git
#include "printTest1_1.h"
#include <stdio.h>

int main()
{
    // Call the file for printing a sentence
    printf("\n");
    printingSentence();
    printf("\n");
    printf("Additionally this is printed from main\n");
    printf("\n");
    printf("This line, in %s, in the code is numbered by %d", __FILE__, __LINE__);
    printf("\n");
    printf("\n");

    return 0;
}
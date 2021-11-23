// Method calling the functionallity
// Comment to track on git
// Comment to track on git from the ACH1982a second try
// Comment to track on git from the ACH1982a third try
#include "printCharacterTest1_1.h"
#include "printIntegerTest1_1.h"
#include <stdio.h>

int main()
{
    // Printing title
    char generalTitle[] = "-Title-";
    printCharacter(generalTitle);
    // Printing age
    int age;
    printf("Introduce your age: ");
    scanf("%d", &age);
    printInteger(age);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char grade = 'F';
    // purpose of a switch statement is checking 1 single value against bunch of other conditions
    switch(grade)
    {
        case 'A': printf("You did great! "); break;
        case 'B': printf("You did alright! "); break;
        case 'C': printf("You did poorly"); break;
        case 'D': printf("You did very bad!"); break;
        case 'F': printf("You Failed!"); break;
        default: printf("Invalid grade!"); // don't need break here
    }
    return 0;
}
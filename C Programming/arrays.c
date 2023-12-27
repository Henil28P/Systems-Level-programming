#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // initialize an array
    int luckyNumbers[] = {12, 34, 198, 2, 76};
    printf("%d\n", luckyNumbers[1]); // prints the element at index 1 (which is 34) from above array
    // modify current elements in an array
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);

    // unsure about what elements to put in an array?:
    double points[4];
    points[1] = 2.3;
    points[3] = 53.65;
    printf("%f %f", points[1], points[2]); // for points[2], it will print -2 which means undefined value
    
    return 0;
}
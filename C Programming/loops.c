#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // for strcpy() function

int main()
{
    // while loop is a post-test loop
    // int index = 1;
    // while(index <= 5) // keep looping until index reaches 5
    // {
    //     printf("%d\n", index);
    //     index++; // increment index (same as index+=1)
    // }





    // do-while loop runs the code first at least once before checking the condition
    // this is a pre-test loop
    // int index = 6;
    // do {
    //     printf("%d\n", index);
    //     index++;
    // } while (index <= 5);

    // return 0;




    // for loops in C (good for looping through elements in the arrays)
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    // 3 main parts of for loops: for (initialization, condition, iteration) {...}
    for (int i = 0; i < 6; i++) {
        printf("%d\n", luckyNums[i]);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // for strcpy() function

int main()
{
    // create 2d arrays and multidimensional arrays in C
    // 2 square brackets for 2D arrays
    int nums[3][2] = { // this whole 2D array has 3 elements overall so [3] for first bracket and each element (which is an array) has 2 elements inside it so thus [2]
                    {1, 2}, // this array is the 1st element of the whole 2D array
                    {3, 4}, // this array is the 2nd element of the whole 2D array
                    {5, 6} // array within an array, you get the idea ...
                    };

    printf("%d", nums[0][1]); // to access 1 (at index 1 of 1st element at index 0 of 2D array) so [0] and to access and grab element 1


    
    // concept of nested for-loops
    int i, j;
    for (i = 0; i < 3; i++) { // j < 3 because total of 3 elements in the whole 2D array declared above
        for (j = 0; j < 2; j++) { // j < 2 because total of 2 elements within each element (which is an array itself) of the whole 2D array
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
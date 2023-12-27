#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // keep large amounts of data is to store in variables, but we can only store 1 value to variables
    // array is a container which can hold multiple data values (more than 1 unlike variables)
    int luckyNums[] = {4, 8, 15, 16, 23, 42}; // 4, 8, 15, etc are elements in the array
    luckyNums[1] = 19;                        // modify elements of array

    cout << luckyNums[0]; // access elements of the array (1st element is at index 0)

    // in cases of not knowing the amount of elements to be stored in the array
    int luckyNums2[20] = {4, 8, 15, 16, 23, 42}; // specify the size (20 elements)
    luckyNums2[10] = 100;                        // update the array by adding another element at index 10

    cout << luckyNums2[10]; // print the newly added element to luckyNums2 array

    return 0;
}
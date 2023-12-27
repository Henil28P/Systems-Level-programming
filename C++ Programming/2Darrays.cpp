#include <iostream>
#include <cmath>

using namespace std;

// 2D array - where every single element in the array is an array
// Nested For Loops - a for loop inside a for loops
// We can use the above 2 subjects together to create an interesting program in C++

int main()
{
    int numberGrid[4][3] = {              // need to specify the number of rows and columns for 2D arrays
                            {1, 3, 5},    // element at position 0 of numberGrid
                            {2, 4, 6},    // element at position 1
                            {7, 9, 11},   // element at position 2
                            {8, 10, 12}}; // element at position 3
    // we are basically building a matrix

    cout << numberGrid[0][1] << endl; // this will output 3 because: element at index 0 of numberGrid is {1,3,5} and element at index 1 in this array ({1,3,5}) is 3
    cout << endl;

    // Additionally, we can iterate through all the elements of numberGrid[][] 2D Array (matrix) by the concept of Nested For loops
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j += 1) // this is a for loop inside a for loop to iterate over the array-type elements within the elements of numberGrid[][] 2D array
        {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}
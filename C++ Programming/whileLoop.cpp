#include <iostream>
#include <cmath>

using namespace std;

// While loop is a programming structure that allows us to loop through a block of code while a certain condition true

int main()
{
    int index = 1;
    // while loop (post-test) - checking the condition and then executing the code
    while (index <= 5)
    {
        cout << index << endl;
        index++; // same as index+=1
    }

    // Infinite loop is a situation where the condition of loop never becomes false and loop continues to run forever

    // do-while loop (pre-test) - execute the code and then check the condition
    index = 6;
    do
    {
        cout << index << endl;
        index += 1;
    } while (index <= 5);

    return 0;
}
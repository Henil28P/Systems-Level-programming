#include <iostream>
#include <cmath>

using namespace std;

// for loop syntax: for (variable initialization; condition; incrementation) {...}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << endl;

    int nums[] = {1, 2, 5, 7, 3};
    for (int j = 0; j < 5; j++)
    {
        cout << nums[j] << endl;
    }

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int power(int base, int power) // for base^power
{
    int result = 1;

    for (int i = 0; i < power; i++) // so if power is 5, then loop through 5 times
    {
        result = result * base;
        // 1st time we go through the loop, result = 1*base = base
        // 2nd time, result = base*base
        // 3rd time, result = (base*base)*base
        // 4th time, result = (base*base*base)*base
        // 5th time, result = (base*base*base*base)*base
    }

    return result;
}

int main()
{
    cout << power(2, 3);
    return 0;
}
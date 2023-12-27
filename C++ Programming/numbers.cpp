// importing libraries
#include <iostream>
#include <cmath> // to use some math functions from cmath library

using namespace std;

int main()
{
    // whole numbers (integers), decimal numbers (floats - store less decimal points and doubles - more decimal points)
    // use mathematical functions to perform mathematical operations with numbers

    int num1 = 2;
    int num2 = 4;

    cout << num1 * num2 << endl;
    cout << num1 + num2 << endl;
    cout << num2 - num1 << endl;
    cout << num2 / num1 << endl;
    cout << 10 % 3 << endl; // % is modulus operater which will give the remainder

    // Math operations in c++ - math functions
    // to use math functions, we need to import libraries to tell c++ to go and grab code from other files
    cout << pow(num2, num1) << endl; // means 4^2 (num2^num1)
    cout << sqrt(num2) << endl;      // means square root of 4 (num2)
    cout << round(4.6) << endl;      // follows normal rounding rule so 4.6 to 5 and 4.4 to 4
    cout << ceil(4.6) << endl;       // round 4.4 up = 5
    cout << floor(4.8) << endl;      // round 4.8 down = 4

    cout << fmax(3, 10) << endl; // return bigger of the two numbers (parameters)
    cout << fmin(3, 10) << endl; // return smallest of the two numbrs (parameters)

    // go to google and search "c++ math functions" and see the list, it contains sin, cosine, etc

    return 0;
}
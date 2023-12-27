#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2; // declare same data type vars on same line, can also use double for numbers

    cout << "Enter first number: ";
    cin >> num1; // get first user input number

    cout << "Enter second number: ";
    cin >> num2; // get second user input number

    cout << "The addition result is: " << num1 + num2; // add both number and print result

    return 0;
}
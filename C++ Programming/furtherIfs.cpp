#include <iostream>
#include <cmath>

using namespace std;

// This code focuses on if statements with comparisons with logical operators

int getMax(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;
}

int main()
{
    cout << getMax(2, 7, 4);

    return 0;
}

/*
Logical (Comparison) Operators:
>, <, <=, >=, <>, !=, ==
NOTE: you can use comparison operators to not just compare integers, but also characters, doubles, etc
*/
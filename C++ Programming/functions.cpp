#include <iostream>
#include <cmath>

using namespace std;

// A function is a little collection/block of code that performs a specific task
// A function is a container to put a small code and reuse that code throughout the program

// write a function signature (stub)
void sayHi(string name, int age); // to allow main function to access function declaration below it

// c++ function to cube a number
double cubeNum(double num)
{
    double result = num * num * num;
    return result; // the return keyword tells c++ we're done executing the code in function, the code below it won't execute
}

int main()
{
    sayHi("Henil", 19); // to "call" the function sayHi() for the code of sayHi() to be executed in the main()
    sayHi("Alex", 23);
    sayHi("Steve", 20);

    double answer = cubeNum(5.0);
    cout << "The cubed is " << answer;

    return 0;
}

// function to say "hi" to user
void sayHi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << endl;
}

/*
Return type of a function - void, int, string, double, char, boolean
Parameters - arguments
*/
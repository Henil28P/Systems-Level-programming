#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // create variable to store user input info, same works for char, double.
    int age;
    cout << "Enter your age: ";
    cin >> age; // cin to allow user to input
    cout << "You are " << age << " years old";

    // to get string input. a bit different process below
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // use getline() function to get entire line of user input text
    cout << "Hello " << name;

    return 0;
}
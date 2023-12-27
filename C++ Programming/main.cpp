#include <iostream>

using namespace std;
// Above are configuration options for C++ file

int main()
{
    string characterName = "John"; // create a container (variable) that can store a string value
    int characterAge;
    characterAge = 35;

    cout << "There once was a man named " << characterName << endl; // cout stands for "console out", endl stands for "endline"
    cout << "He was " << characterAge << " years old" << endl;

    // we can modify variable values midway
    characterName = "Mike";
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    // Data Types in C++
    char grade = 'A';
    string phrase = "New Delhi"; // string of characters
    int age = 18;                // whole numbers

    // 2 types of decimal numbers - "double" and "float"
    double gpa = 6.7; // decimal numbers; can store more decimal points than float
    // float;         // floating point numbers; can store less decimal points than double
    bool isMale = false; // boolean - true or false values only

    cout << "Age of " << age;                                           // Note that not putting an "endl" will not insert a new line and continue on current line
    cout << ", GPA of " << gpa << " with a grade of " << grade << endl; // we can us \n in the "" to insert a new line //

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

/*
Pointers are type of information; they are memory addresses.
In our computer, we have memory (RAM - Random Access Memory) - it is the active memory that our computer uses when it's running the program
*/

int main()
{
    int age = 19;
    double gpa = 6.7;
    string name = "Henil";
    // All the above are variables (containers) where we can store specific information
    // Our computer would be using RAM to run this program, so it will use memory in order to store and keep track of the information
    // It will store all of the values above inside of that memory,
    // (e.g. the value of each variable will be stored inside of the physical "memory address" of the computer running the program)
    // Each of the containers inside the memory of the computer where these memories are stored have an address

    cout << &age << endl; // print out the memory address where each variables/values of variables are stored
    // The & will tell c++ to print out the memory address of the value of age is stored (memory address of 19)
    // In case to modify the value of this variable, the computer can easily do it by finding through that memory address
    // The memory addresses are known as "pointers" in C and C++, pointers are a type of data just like int, double, string

    // Let's print out all the memory addresses (pointers) of all the variables
    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    // Let's take a step further, create a variable where we can store the pointer for age, gpa and name variables
    // to manage and keep track of pointers, we can create a pointer variable which will be a container where we can store memory address
    int *pAge = &age;
    double *Gpa = &gpa;
    string *Name = &name;

    cout << pAge << endl; // use the above pointer variables and simply print it

    // Let's look at dereferencing a pointer - this means to grab the value that's inside of that memory address
    // When we dereference a pointer, we are telling C++ that instead of using the actual pointer, we want to physically go to that memory address, we want to get the actual value that's stored in it
    cout << *pAge; // this is called "dereferencing" a pointer
    cout << *&gpa; // this is dereferencing a referenced pointer on same line

    // People often streotypically get overwhelmed with the concept of pointers in C and C++, it's just a data type like int, double and it's called pointers data type

    return 0;
}
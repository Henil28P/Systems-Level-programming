#include <iostream>
#include <cmath>

using namespace std;

/*
Object functions - sometimes referred to as Instance Functions;
it's a function that we can put inside of one of our classes, and the different objects of that class can use that function in order to:
find out information about objects, or modify their information.
*/

class Student
{
public:
    string name;
    string major;
    double gpa;

    Student(string aName, string aMajor, double aGpa) // Student constructor
    {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors() // return true if student has gpa of 3.5 or above to be in honours role
    {
        if (gpa >= 5.5)
        {
            return true;
        }
        return false;
    }
    // So each of the objects that we create can call this hasHonors() function and depending on their specific GPA, it will return different answer
};

int main()
{
    Student student1("Jim", "Business", 6.7);
    Student student2("Alice", "Art", 5.35);
    // We wanted a way to figure out whether or not one of these students are honour role
    // The rules of being in honour role - GPA of 3.5 or above
    // We want an easy way to figure out whether or not a student is in honour role
    // So we can create a function in Student class which each of the student objects can use to tell if they were in the honour role or not //

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    /*
    NOTE: In C++, if we want to print out boolean values,
    instead of printing true and false, it will print 1 (for true) and 0 (for false)
    */

    return 0;
}
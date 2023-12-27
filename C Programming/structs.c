#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // for strcpy() function

// let's look at structs through an example of a Student details
// create a struct
struct Student
{
    char name[50]; // this string of name can hold max 50 characters
    char major[50];
    int age;
    double gpa;
};

int main()
{
    // in C, a struct allows us to store multiple data type values in them
    // create an instance of the "Student" structure
    struct Student student1; // create a container called "student1" which will store all student details from struct
    student1.age = 22; // assign some values for student1 container
    student1.gpa = 6.5;
    strcpy(student1.name, "Jim"); // strcpy() takes a string and give a value we specifiy
    strcpy(student1.major, "Data Analytics");
    printf("%s whose age is %d is doing the %s major with a current gpa of %f\n", student1.name, student1.age, student1.major, student1.gpa);

    // create another instance of the "Student" structure
    struct Student student2; // create a container called "student2" which will store all student details from struct
    student2.age = 20; // assign some values for student1 container
    student2.gpa = 5.3;
    strcpy(student2.name, "Alex"); // strcpy() takes a string and give a value we specifiy
    strcpy(student2.major, "Cybersecurity");

    printf("%s whose age is %d is doing the %s major with a current gpa of %f\n", student2.name, student2.age, student2.major, student2.gpa);

    return 0;
}
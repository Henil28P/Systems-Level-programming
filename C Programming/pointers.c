#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // for strcpy() function

int main()
{
    // accessing and printing memory addresses with C
    /*
    int age = 30;
    double gpa = 6.5;
    char grade = 'A';
    */
    // use %p to print out pointer (memory addresses) instead of the actual values of the variables
    // printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);






    // pointers in C are just a type of data like int, double, char
    /*

    int age = 30;
    int *pAge = &age; // this pointer variable is storing the memory address of the age variable from above (key concept of pointers in C)
    
    // pointers need to have physical memory address of another variable of same data type
    double gpa = 5.65;
    double *pGpa = &gpa;
    
    char grade = 'B';
    char *pGrade = &grade;

    printf("age's memory address is: %p\n", &age);

    */


    



    // dereferencing pointers in C;
    // when dereferneing a pointer means to go to physical memory address of that pointer and grabbing the piece of information/value from there //
    int age = 30;
    int *pAge = &age;

    printf("%d", *pAge); // dereferencing the pointer using *
    // need to use %d instead of %p because once pointer is dereferenced, the outputted value is no longer a memory address, it's the actual value of the initial variable which is a variable now
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // User input in C
    int age; // declare a variable to store the age of user input from prompt
    printf("Enter your age: "); // 1. prompt the user
    scanf("%d", &age); // 2. allow user to enter input something info, it means store an integer to "age" variable, &age just refers to the concept of "pointer" in C
    printf("You are %d years old\n", age); // 3. finally print the result

    // %lf tells scanf function we're looking for a double
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);

    // %c tells scanf function we're looking for a single character
    char gender;
    printf("Enter your gender: ");
    scanf("%c", &gender);
    printf("Your gender is %c\n", gender);

    // get a string of characters from the user
    char uname[18]; // the number inside the [] specified the number of characters, so only able to store 18 characters
    printf("Enter your username: ");
    fgets(uname, 18, stdin); // don't need & in this case
    // fgets() grabs the whole line of input regardless of whitespace/empty space whereas scanf() function would only get the text before the empty space detected in a line of text
    printf("Your username is %s\n", uname);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[] = "John"; // list of characters known as String
    int age = 23;
    // 2 types of decimal numbers in C (double and float)
    double gpa = 6.5;
    char grade = 'H'; // a single character in single quotation marks

    printf("\n");
    printf("Hello %s\n", name);
    printf("Your age is %d\n", age);
    printf("C is\"G.O.A.T\n"); // displaying double quotation marks as output
    printf("%d\n", 73);  // to print a number in C, we need to use format specifier which is %d
    printf("My favourite game is %s %d\n", "GTA", 5); // combining 2 format specifiers in 1 line, order matters btw
    printf("Print a decimal by %f\n", gpa); // format specifier of decimal number
    printf("\n");

    // Format specifiers:
    // %d prints an integer
    // %f prints a decimal number
    // %s prints a text/string
    // %c prints a single character

    // in C, String is no datatype, instead use char name[] to define String as a list of characters is basically known as String
    // %s is for String/characters (a format specifier)
    // %d is for integers (a format specifier)
    // \n is for inserting new line in C programming

    // Constants in C (a variable) -- for disabling the modification of a variable (that variable wouldn't be modified after being constant)
    const int NUM2 = 5; // lot of developers consider to make the name of the constant variable in uppercase letters like NUM instead of num
    printf("%d\n", NUM2);

    return 0; // need this for the program in the main() method to run
}
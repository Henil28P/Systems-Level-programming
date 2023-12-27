#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1); // store 1st number in the num1 variable

    printf("Enter second number: ");
    scanf("%lf", &num2); // store 2nd number in the num2 variable

    printf("Answer: %f", num1 + num2); // print addition result of both numbers

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int user(int num);
int max(int num1, int num2, int num3); // this is called Prototyping process (used to introduct any functions below the main() function)
// above is known as "signature"

int main()
{
    if (!((3 > 2 || 2 > 5) && 3 != 2))
    {
        printf("False\n");
    }
    else
    {
        printf("True");
    }

    printf("%d\n", max(10, 4, 8));
    return 0;
}

int max(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}

// int user(int num)
// {
//     int num;                       // declare a variable to store the age of user input from prompt
//     printf("Enter your number: "); // 1. prompt the user
//     num = scanf("%d", &num);       // 2. allow user to enter input something info, it means store an integer to "age" variable, &age just refers to the concept of "pointer" in C

//     return num;
// }
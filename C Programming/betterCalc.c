#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototypes & signatures
void choice();
int addNums(int num1, int num2);
int subtractNums(int num1, int num2);
int multiplyNums(int num1, int num2);
double divideNums(int num1, int num2);
int exponentialNums(int num1, int num2);

int main()
{
    choice();

    int choice;
    printf("Please choose any one arithmetic operation from above options: ");
    scanf("%d", &choice);
    // return choice;

    int n1;
    printf("Enter first number: ");
    scanf("%d", &n1);

    int n2;
    printf("Enter second number: ");
    scanf("%d", &n2);

    if (choice == 1)
    {
        printf("Your result: %d\n", addNums(n1, n2));
    }
    else if (choice == 2)
    {
        printf("Your result: %d\n", subtractNums(n1, n2));
    }
    else if (choice == 3)
    {
        printf("Your result: %d\n", multiplyNums(n1, n2));
    }
    else if (choice == 4)
    {
        printf("Your result: %f\n", divideNums(n1, n2));
    }
    else if (choice == 5)
    {
        printf("Your result: %d\n", exponentialNums(n1, n2));
    }
    else
    {
        printf("Invalid operator!\n");
    }

    return 0;
}

void choice()
{
    printf("Choose any 1 from below options\n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Exponential \n");
}

int addNums(int num1, int num2)
{
    int sumResult = num1 + num2;
    return sumResult;
}

int subtractNums(int num1, int num2)
{
    int subtractResult = num1 - num2;
    return subtractResult;
}

int multiplyNums(int num1, int num2)
{
    int multiplyResult = num1 * num2;
    return multiplyResult;
}

double divideNums(int num1, int num2)
{
    double divideNums = num1 / num2;
    return divideNums;
}

int exponentialNums(int num1, int num2)
{
    int exponentialNums = pow(num1, num2);
    return exponentialNums;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// void return type just means this function doesn't have to return anything
void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d\n", name, age);
}

double cubeNum(int num) {
    double result = pow(num, 3.0);
    return result; // cannot print anything below this return as it breaks us out of code
}

// for example, main() is a function in C, int is the return type of main() function
int main()
{
    sayHi("Henil", 19); // call the sayHi() function
    sayHi("Alex", 22);

    int input;
    printf("Please enter a num: ");
    scanf("%d", &input);
    printf("Answer: %f\n", cubeNum(input));
    return 0;
}

// int cubeNum(int num) {
//     printf("")
// }


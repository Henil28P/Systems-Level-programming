#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Doing math/arithmetic operations
    int num = 5;
    float dec = 4.0;
    printf("%f\n", num / dec);
    printf("%f\n", num * dec);

    // Functions we can use with math in C
    printf("%f\n", pow(2, 3)); // pow() function is for exponention such as pow(2,3) = 2^3 = 8
    printf("%f\n", sqrt(16)); // sqrt() function prints the square root of the number
    printf("%f\n", ceil(36.356)); // ceil() function rounds the number up
    printf("%f\n", floor(36.656)); // floor() function rounds the number down

    return 0;
}
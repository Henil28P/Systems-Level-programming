#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // for strcpy() function

// a secret number, allow user to guess the secret number

int main()
{
    int secretNumber = 5;
    int guess; // store user's guess
    int guessCount = 0;
    int guessLimit = 3; // user can only guess 3 times
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0) // always true until user guesses the secretNumber
    {
        if (guessCount < guessLimit)
        {
            printf("Enter your guess: ");
            scanf("%d\n", &guess);
            guessCount+=1;
        }
        else
        {
            outOfGuesses = 1;
            printf("You reached the guess limit!\n");
        }
    }

    if (outOfGuesses == 1)
    {
        printf("Out of guesses.\n"); // user didn't guess it correctly
    }
    else
    {
        printf("Congrats! You guessed it correct!\n"); // success message
    }

    return 0;
}
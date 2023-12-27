#include <iostream>
#include <cmath>

using namespace std;

// This game will use if-statements, while/do-while loops, and other c++ concepts covered so far
// The game: The users try to guess a secret number stored in the program

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (guess != secretNum && !outOfGuesses) // keep prompting user until guess is correct
    {
        if (guessCount < guessLimit)
        {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses)
    {
        cout << "You loose!";
    }
    else
    {
        cout << "You win!";
    }

    return 0;
}
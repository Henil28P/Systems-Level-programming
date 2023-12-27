#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = true;

    if (isMale && isTall) // if both isMale AND isTall is true, then execute the following
    {
        cout << "The user is a tall male" << endl;
    }
    else if (isMale && !isTall || !isMale && isTall)
    {
        cout << "The user is either a male AND tall OR is NOT a male but is tall" << endl;
    }
    else // if the isMale is false, then execute the following
    {
        cout << "The user is not a male" << endl;
    }

    return 0;
}

/*
NOTES on relational operators used:
! - NOT
|| - OR
&& - AND
*/
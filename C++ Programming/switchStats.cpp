#include <iostream>
#include <cmath>

using namespace std;

// Switch statement - allows us to check 1 particular value against bunch of other values

/*
0 -> "Sunday"
1 -> "Monday"
...
*/

string getDayOfWeek(int dayNum)
{
    string dayName;

    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        cout << "Invalid Day Number" << endl;
    }

    return dayName;
}

int main()
{
    cout << getDayOfWeek(2);
    return 0;
}
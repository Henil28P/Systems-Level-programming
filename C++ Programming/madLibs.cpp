#include <iostream>
#include <cmath>

using namespace std;

/*
Overview of Mad Libs game:
A game where you enter random words (nouns, adjectives) which then get taken and get sprinkled in a story
*/

int main()
{
    string color, pluralNoun, celebrity; // declare same data type variables on same line

    cout << "Enter a color: ";
    getline(cin, color); // store user input as value of color var
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun); // store user input as value of pluralNoun var
    cout << "Enter a celebrity: ";
    getline(cin, celebrity); // store user input as value of celebrity var

    // output everything
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int age = 18;
    double gpa = 6.7;
    char grade = 'A';

    cout << "Age of " << age;                                           // Note that not putting an "endl" will not insert a new line and continue on current line
    cout << ", GPA of " << gpa << " with a grade of " << grade << endl; // we can us \n in the "" to insert a new line //

    // "string functions" - function is a block of code which we can call which will perform a specific task for us
    // modify string, give information about a string. and more

    // 1. length() function
    string phrase = "Apple Foundation";
    cout << phrase.length(); // length() function tells us how many characters in the phrase string

    // Access individual character in the phrase string
    cout << phrase[3]; // indexing a string or any other data type start at 0

    // Assign a new value to a character in the phrase string
    phrase[1] = 'n';
    cout << phrase; // will output "Anple Foundation"

    // Find information about a string
    cout << phrase.find("Found", 0); // within () is passing paramaters/arguments
    // to find if a particular string is contained in the phrase variable at a particular position
    // it will return the position Found (F) starts

    string phrasesub;
    phrasesub = phrase.substr(8, 5); // give 2 pieces of information in parameter (starting index, end index)
    cout << phrasesub;

    return 0;

    // Summary of string functions
}
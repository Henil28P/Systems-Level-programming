#include <iostream>
#include <cmath>

using namespace std;

/*
Classes - when we create a class in C++, we are creating a new data type in C++; we can create a blueprint for new type of data in our program
(e.g. we can create a class that will specify what a book data type is, and we can use that book data type we created in our program)

Objects - an instance of that Book class (book data type)
*/

// A class is a specification or a blueprint for a new data type in our program
class Book
{
    // We are specifying what a book is inside of our program

    // Define the book data type by giving them attributes (3 or 4 attributes)
    // and we can use those data types (stirng, integer, character, double) to represent those attributes of Book class
public:
    string title;
    string author;
    int pages;
    bool awardWinner;
    // By above variable declarations (attributes), we are mapping out a blueprint (template/specification) for the Book data type (complex data type)
    // So a book in our program can have a title, author, number of pages, and whether be an awardWinner or not
};

int main()
{
    string name = "Henil";
    double pi = 3.14;
    char favouriteLetter = 'R';

    // C++ allows us to store bunch of different types of data (text, numbers, characters, etc)
    // The limitation is that there is a lot of real world entities that can't just be represented by text, number, or character
    // E.g. a phone (real world entity such as animal, person, camera, musical instrument) cannot be represented in the program using text, number (limited data types)
    // E.g. we want to represent a book in our program, we can't just do "book myBook = ..." - it's not possible
    // We can create a class - a new data type

    // The code in the class Book of attribute (variable) declarations under public is just a blueprint, it's not a physical book
    // To have a physical book that we will work with in our program, we need to create Object in the main() function

    // Create the book object (book1) //
    Book book1; // this follows the same syntax as variable declarations but instead of regular data types, we are getting the class name which is a complex data type which is Book
    // let's give some attributes to book1 //
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;
    book1.awardWinner = true;
    // So now we are able to store all the above information inside the book1 object.

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 650;
    book2.awardWinner = true;

    // Let's print the information of each book object
    cout << book1.title << endl
         << book1.pages << endl
         << book1.author << endl;
    cout << book2.title << endl
         << book2.author << endl
         << book2.pages << endl;

    /*
    Terminology:
    -- A class is the specification/blueprint/template of a data type, so the Book class is the template of a book inside of out program
    -- An object is the actual instance of that blueprint or class, (e.g. an Object is the actual book with actual title, author, pages, etc.)
    */

    /*
    General idea - we are just taking a real world entity (person, place, thing, animal),
    breaking it up into individual attributes that describes its features and represent it in our program
    */

    return 0;
}
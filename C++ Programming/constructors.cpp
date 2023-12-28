#include <iostream>
#include <cmath>

using namespace std;

/*
Constructor - a special function that is going to get called whenever we create an object of a class
We can also create multiple constructors - to give use multiple ways they can create their objects
*/

class Book
{
public:
    string title;
    string author;
    int pages;

    Book()
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }

    Book(string aTitle, string aAuthor, int aPages) // this Book() function is a constructor which gets called everytime a new object is created for this Book class
    {
        // cout << "Creating Object: " << name << endl;
    }
};

int main()
{
    // create objects - an object is an instance of a class
    Book book1("Harry Potter", "JK Rowling", 500); // pass the value to the parameter of Book() constructor in class Book
    // book1.title = "Harry Potter";
    // book1.author = "JK Rowling";
    // book1.pages = 500;

    Book book2("Lord of the Rings", "Tolkein", 650); // instead of book2.title, book2.author, book2.pages... we can just pass those values in the parameters of the Book() constructor
    // book2.title = "Lord of the Rings";
    // book2.author = "Tolkein";
    // book2.pages = 650;

    Book book3;
    cout << book3.title;

    // Here's the thing, it takes lot of time and space of code to manually type out for assigning values to each attribute
    // and we need to do this for every different objects we create
    // Instead of all the above, we can just pass those values into the constructor and it could initialise the values for us

    return 0;
}
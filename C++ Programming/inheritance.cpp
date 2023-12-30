#include <iostream>
#include <cmath>

using namespace std;

/*
Inheritance - where we can define a class and then can define other classes,
and those other classes can extend/inherit all the functionality and attributes of that original class

Terminology: Chef class is called "superclass", ItalianChef class is called "subclass"
*/

class Chef // Superclass
{
public:
    void makeBurger()
    {
        std::cout << "The chef makes chicken" << endl;
    }

    void makeSalad()
    {
        std::cout << "The chef prepares salad" << endl;
    }

    void makeSpecialDish()
    {
        std::cout << "The chef makes mexican tacos" << endl;
    }
};

// Let's create a more specific class ItalianChef and we want that Italian Chef to do everything that the normal Chef can do
// That Italian Chef can inherit everything that normal chef can do and all the functions and attributes of that original Chef class
// The ItalianChef class can do makeBurger(), makeSalad(), makeSpecialDish() and additionally other things as well that the Chef c;ass can't do
class ItalianChef : public Chef // : just says inherit all the functions from Chef class
{
    // don't need to specify or repeat those functions present in the Chef class
    // The italian chef can do some other additional stuff that normal Chef can't

public:
    void makePasta()
    {
        std::cout << "The chef makes pasta" << endl;
        // It is important to know that the normal chef can't make pasta
        // This means that the Chef class cannot use this makePasta() function from this ItalianChef class
    }

    // Additionally, the ItalianChef can override any of the function from the Chef class if changes are required within it
    // For example: If the special dish of ItalianChef is Spicy Sizzler, and special dish of normal Chef is Mexican Taco
    void makeSpecialDish()
    { // this is using the inherited function makeSpecialDish() from normal Chef class, but is overriding its features
        std::cout << "The italian chef makes Spicy Sizzler" << endl;
    }
};

int main()
{
    Chef chef;         // create chef object (create instance of the Chef class)
    chef.makeBurger(); // use the makeBurger() function of the Chef class
    // NOTE that the normal chef object cannot use makePasta() function present in ItalianChef class

    ItalianChef italianChef;
    italianChef.makeBurger(); // we can call that same makeBurger() function on the ItalianChef class now since it inherits attributes from Chef class

    // Let's use the normal function makeSpecialDish() from Chef class and also the same overridden function from ItalianChef class
    Chef chef1;              // make another object "chef1"
    chef1.makeSpecialDish(); // Mexican Taco

    ItalianChef italianChef1;
    italianChef1.makeSpecialDish(); // Spicy Sizzler

    return 0;
}
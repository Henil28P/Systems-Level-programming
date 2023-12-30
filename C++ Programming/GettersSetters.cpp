#include <iostream>
#include <cmath>

using namespace std;

/*
Getters and Setters in C++ classes - allow us to control the access to different attributes and elements inside of our C++ classes
Sometimes, we would want to control what values or how the users can interact with the attributes of a class or of an object
In our case, we want to restrict the types of ratings to be stored inside the Movie.
So we were able to set the attribute to private which meant nobody could access it directly,
instead if the user wanted to set the rating, they have to go through the public setRating() function
and go through the if-statement in it.

This is a great way to control access to the individual elements or attributes in a specific object.
*/

class Movie
{
private:
    string rating; // this means only code inside this class Movie can access the attribute "rating", not anything outside the class like the main() function

public: // the stuff below this will be public means any other code outside of this Movie class can access title, director, rating and also the Movie constructor
    // 3 attributes of a Movie (describing the movie)
    string title;
    string director;
    // string rating;

    Movie(string aTitle, string aDirector, string aRating) // Movie constructor
    {
        // assigning those parameter values to the values inside of the object
        title = aTitle;
        director = aDirector;
        setRating(aRating); // note that we can't do rating = aRating now
    }

    void setRating(string aRating) // good way to control access to the individual elements or attributes in a specific object
    {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {                     // set up some rules for valid ratings
            rating = aRating; // whenever we wanna give a value to the "rating" attribute, we need to go through this setRating() function
        }
        else // if invalid ratings, then output "NR"
        {
            rating = "NR";
        }
    }

    string getRating()
    {
        return rating; // return the rating received from the setRating() public function
    }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG");
    // valid ratings can be G, PG, PG-13, R, NR
    // However, we don't want any user to input invalid data for rating other than valid ones listed above
    // We might not want a movie object to be created that's not using a valid rating, so we can use Getters or Setters to ensure this

    // avengers.setRating("Dog");
    /*
    to modify rating, we can't just do avengers.rating = "Dog" because "rating" is private,
    instead, we need to use the setRating() public function from Movie class to modify it.
    */

    cout << avengers.getRating(); // we can't access rating like avengers.rating because "rating" is private now,
    // so we can create another public function in Movie class called getRating()

    return 0;
}
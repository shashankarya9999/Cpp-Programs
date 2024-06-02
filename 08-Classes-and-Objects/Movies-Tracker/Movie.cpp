/******************************************************************
//
// Models a Movie with the following atttributes
// 
// std::string name - the name of the movie 
// std::string rating - G, PG, PG-13, R
// int watched - the number of times you've watched the movie
//
*******************************************************************/

#include <iostream>
#include "Movie.h"

// implemention of the constructor
Movie::Movie(std::string name, std::string rating, int watched) 
    :name(name), rating(rating), watched(watched) {}

//implemention of the copy constructor
Movie::Movie(const Movie &source) 
    :Movie{source.name, source.rating, source.watched} {}

// implementation of the destructor
Movie::~Movie() {}

// implementation of the display method
// should just insert the movie attributes to cout
void Movie::display() const 
{
    std::cout << name << ", " << rating <<  ", " << watched  << std::endl;
}

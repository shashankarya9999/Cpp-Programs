#include<cstring>
#include<iostream>
#include "Mystring.h"

// no-args constructor
Mystring::Mystring()
    :str {nullptr}
{
    str = new char[1];
    *str = '\0';
}

// overloaded constructor
Mystring::Mystring(const char *s)
    :str {nullptr}
{
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }

    else
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str,s);
    }
}

// copy constructor
Mystring::Mystring(const Mystring &source)
    :str {nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str,source.str);
}

// destructor
Mystring::~Mystring()
{
    delete [] str;
}

// copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout << "Copy assignment" << std::endl;

    // checks for self assignment
    if(this == &rhs)
        return *this;

    // deallocate storage for this -> str since we are overwriting it
    delete [] this -> str;

    // allocate storage for the deep copy
    str = new char[std::strlen(rhs.str) + 1];

    // perform the copy
    std::strcpy(this -> str, rhs.str);

    // return the current by reference to allow chain assignment
    return *this;
}

// display method
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const
{
    return std::strlen(str);
}

// string getter
const char *Mystring::get_str() const
{
    return str;
}

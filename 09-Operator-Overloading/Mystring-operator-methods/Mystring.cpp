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

// move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str)
{
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
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

// move assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "Using move assignment" << std::endl;

    // checks for self assignment
    if(this == &rhs)
        return *this;

    // deallocate storage for this -> str since we are overwriting it
    delete [] str;

    // steal the pointer from the rhs object and assign it to this -> str
    str = rhs.str;

    // null out the rhs pointer
    rhs.str = nullptr;

    // return the current object by reference to allow chain assignment
    return *this;
}

// equality
bool Mystring::operator==(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) == 0);
}

// make lowercase
Mystring Mystring::operator-() const
{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff,str);

    for(size_t i=0; i<std::strlen(buff); ++i)
        buff[i] = std::tolower(buff[i]);

    Mystring temp {buff};
    delete [] buff;

    return temp;
}

// concatenate
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff,str);
    std::strcat(buff, rhs.str);

    Mystring temp {buff};
    delete [] buff;

    return temp;
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

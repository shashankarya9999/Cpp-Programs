#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    private:
        char *str;      // pointer to a char[] that hold a C-style string

    public:
        Mystring();                         // no-args constructor
        Mystring(const char *s);            // overloaded constructor
        Mystring(const Mystring &source);   // copy constructor
        Mystring(Mystring &&source);        // move constructor
        ~Mystring();                        // destructor

        Mystring &operator=(const Mystring &rhs);   // copy assignment
        Mystring &operator=(Mystring &&rhs);        // move assignment

        Mystring operator-() const;                         // male lowercase
        Mystring operator+(const Mystring &rhs) const;      // concatenate
        bool operator==(const Mystring &rhs) const;         // comparison

        void display() const;

        int get_length() const;             // getters
        const char *get_str() const;
};

#endif  // _MYSTRING_H_
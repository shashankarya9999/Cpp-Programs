#include<iostream>

using namespace std;

// overloading func to take lvalue or rvalue as per input parameters
// void func(int &num);     // A
// void func(int &&num);    // B

int main()
{
    int x {100};

    int &l_ref = x;     // l-value reference
    l_ref = 10;         // change x to 10

    int &&r_ref = 200;  // r-value ref
    r_ref = 300;        // change r_ref to 300

    // int &&x_ref = x;     // compiler error

    // l-value reference parameters

    // int x {100};    // x is an l-value

    // func(x);    // calls function A - x is an l-value
    // func(200);  // Error - 200 is an r-value
    //             // error: cannot bind non-const lvalue reference of type 'int&' 
    //             // to an rvalue of type 'int'

    // // r-value reference parameters
    
    // int x {100};

    // func(200);  // calls function B - 200 is an r value
    // func(x);    // Error - x is an l-value
    //             // error: cannot bind rvalue reference of type 'int&&'
    //             // to lvalue of type 'int'

    return 0;   
}
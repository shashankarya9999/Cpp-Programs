#include<iostream>

using namespace std;

inline int add_numbers(int a, int b)    // definition
{
    return a + b;
}

int main()
{
    int result {0};
    int result = add_numbers(100,200);  // call

    return 0;
}

// An inline function is one for which the compiler copies the code from the function definition 
// directly into the code of the calling function 
// rather than creating a separate set of instructions in memory.
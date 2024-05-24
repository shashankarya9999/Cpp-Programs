#include<iostream>

using namespace std;

void say_hello();

int main()
{
    // say_hello();            // OK
    // say_hello(100);         // ERROR
    // cout << say_hello();    // ERROR, no return value

    return 0;
}

void say_hello()
{
    cout << "Hello World!" << endl;
}
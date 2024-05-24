#include<iostream>

using namespace std;

void say_world()
{
    cout << "World" << endl;
    cout << "Bye from say_world" << endl;
}

void say_hello()
{
    cout << "Hello" << endl;
    say_world();
    cout << "Bye from say_hello" << endl;
}

int main()
{
    say_hello();
    cout << "Bye from main" << endl;

    return 0;
}
#include<iostream>

using namespace std;

int add_numbers(int,int);               // add ints
double add_numbers(double, double);     // add doubles

int main()
{
    cout << add_numbers(10,20) << endl;         // integer
    cout << add_numbers(10.0, 20.0) << endl;    // double

    return 0;
}

int add_numbers(int a, int b)
{
    return (a + b);
}

double add_numbers(double a, double b)
{
    return (a + b);
}

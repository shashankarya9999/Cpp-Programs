#include<iostream>

using namespace std;

int main()
{
    int num1 {}, num2 {};

    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;

    if( num1 != num2 )
    {
        cout << "Largest: " << (( num1 > num2 ) ? num1 : num2) << endl;
        cout << "Smallest: " << (( num1 < num2 ) ? num1 : num2) << endl;
    } 

    else
    {
        cout << "The numbers are the same" << endl;
    }

    return 0;
}
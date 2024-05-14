/*
    
Average of three numbers

- ask the user to enter 3 integers
- calculate the sum of the integers then
- calculate the average of the 3 integers
- display the 3 integers entered
- display the sum of 3 integers entered and the average of the 3 integers

*/

#include<iostream>

using namespace std;

int main()
{
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter 3 integers seperated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;

    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;

    cout << "The sum of the numbers is: " << total << endl;

    cout << "The average of the numbers is: " << average << endl;

    return 0; 
}
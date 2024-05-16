#include<iostream>

using namespace std;

int main()
{
    int num {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;

    while(num > 0)
    {
        cout << num << endl;
        --num;
    }

    cout << "Blastoff!" << endl;

    cout << endl;

    int number {};
    cout << "Enter a positive integer to count up to: ";
    cin >> number;

    int j {1};
    while(number >= j)
    {
        cout << j << endl;
        j++;
    }

    cout << endl;

    return 0;
}
#include<iostream>

using namespace std;

int main()
{
    // example 1
    
    int i {1};

    while(i<=5)
    {
        cout << i << endl;
        ++i;
    }

    cout << endl;

    // example 2

    int j {1};

    while(j<=10)
    {
        if(j % 2 == 0)
            cout << j << endl;
        ++j;
    }

    cout << endl;

    // array example

    int scores[] {100,97,98};
    int k {0};

    while(k < 3)
    {
        cout << scores[k] << endl;
        ++k;
    }

    // input validation example 1

    int number {};

    cout << "Enter an integer less than 100: ";
    cin >> number;

    while(number >= 100)
    {
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }

    // input validation example 2

    int num {};
    
    cout << "Enter an integer between 1 and 5: ";
    cin >> num;

    while(num <= 1 || num >=5)
    {
        cout << "Enter an integer between 1 and 5: ";
        cin >> num;
    }

    // input validation - boolean flag example

    bool done {false};
    int n {0};

    while(!done)
    {
        cout << "Enter an integer between 1 and 5: ";
        cin >> n;

        if(n <= 1 || n >= 5)
        {
            cout << "Out of range, try again" << endl;
        }

        else
        {
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    return 0;
}
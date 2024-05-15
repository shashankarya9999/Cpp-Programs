/*
    Problem:

    - ask the user what grade they expect on exam &
    - tell them what they need to score to get it

*/

#include<iostream>

using namespace std;

int main()
{
    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade)
    {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, Study Hard!" << endl;
            break;
        
        case 'b':
        case 'B':
            cout << "You need 80-89 for a B, Go Study!" << endl;
            break;

        case 'c':
        case 'C':
            cout << "You need 70-79 for C grade" << endl;
            break;

        case 'd':
        case 'D':
            cout << "Your should strive for a better grade! All you need is 60-69" << endl;
            break;

        case 'f':
        case 'F':
        {
            char confirm {};
            
            cout << "Are you sure(Y/N)?";
            cin >> confirm;

            if(confirm == 'y' || confirm == 'Y')
            {
                cout << "Ok, I guess you didn't study..." << endl;
            }

            else if(confirm == 'n' || confirm == 'N')
            {
                cout << "Good, Go study!" << endl;
            }

            else
            {
                cout << "Illegal choice" << endl;
            }

            break;
        }

        default:
            cout << "Sorry, That is not a valid grade!" << endl;
    }

    return 0;
}
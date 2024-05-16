#include<iostream>
#include<string>

using namespace std;

int main()
{
    // string s1;
    // cout << "Enter a string: ";
    // cin >> s1;                  // Hello there
    //                             // only accepts up to the first space
    // cout << s1 << endl;         // Hello

    // getline(cin, s1);           // Read entire line until \n
    // cout << s1 << endl;         // Hello there

    // getline(cin, s1, 'x');      // this isx
    // cout << s1 << endl;         // this is

    string full_name {};

    cout << "Enter your full name: ";
    getline(cin, full_name);

    cout << "Your full name is: " << full_name;

    return 0;
}

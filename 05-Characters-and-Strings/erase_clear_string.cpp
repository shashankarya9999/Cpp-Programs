#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 {"This is a test"};

    cout << s1.erase(0,5) << endl;  // is a test
    cout << s1.erase(5,4) << endl;  // is a 

    s1.clear();             // empties string s1

    cout << s1 << endl;

    // string s1 {"Frank"};

    // cout << s1.length() << endl;    // 5

    // s1 += " James";
    // cout << s1 << endl;     // Frank James

    return 0;
}
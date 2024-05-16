#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};

    cout << boolalpha;
    cout << (s1 == s5) << endl;
    cout << (s1 == s2) << endl;
    cout << (s1 != s2) << endl;
    cout << (s1 < s2) << endl;
    cout << (s2 > s1) << endl;
    cout << (s4 < s5) << endl;
    cout << (s1 == "Apple") << endl;

    return 0;
}
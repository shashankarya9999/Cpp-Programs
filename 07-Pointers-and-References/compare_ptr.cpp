#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 {"Shashank"};
    string s2 {"Shashank"};
    string s3 {"Arya"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;  // to get true/false as output instead of 1/0

    cout << p1 << " == " << p2 << " " << (p1 == p2) << endl;
    cout << p1 << " == " << p3 << " " << (p1 == p3) << endl;
    cout << endl;

    cout << *p1 << " == " << *p2 << " " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << " " << (*p1 == *p3) << endl;

    p3 = &s3;   // points to Arya

    cout << *p1 << " == " << *p3 << " " << (*p1 == *p3) << endl;

    char name[] {"Spandan"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0];   // S
    char_ptr2 = &name[3];   // n

    cout << "In the string " << name <<", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

    cout << endl;
    
    return 0;
}
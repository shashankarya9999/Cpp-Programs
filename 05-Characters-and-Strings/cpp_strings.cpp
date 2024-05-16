#include<iostream>
#include<string>

using namespace std;

int main()
{
    // string s1;                      // empty
    // string s2 {"Shashank"};         // Shashank
    // string s3 {s2};                 // Shashank
    // string s4 {"Shashank", 3};      // Sha
    // string s5 {s3, 0, 2};           // Sh
    // string s6 (3,'S');              // SSS

    /////////   Assignment  ////////////
    
    // string s1;
    // s1 = "C++ Rocks!"; 
    
    // string s2 {"Hello"};
    // s2 = s1;

    /////////   Concatenation   /////////////
    
    // string part1 {"C++"};
    // string part2 {"is a powerful"};
    
    // string sentence;
    
    // sentence = part1 + " " + part2 + " language";    // C++ is a powerful language
    
    // sentence = "C++" + " is powerful";   // Illegal(2 C style literals)

    /////////    Accessing characters [] and .at() method   //////////

    // string s1;
    // string s2 {"Frank"};

    // cout << s2[0] << endl;      // F
    // cout << s2.at(0) << endl;   // F 

    // s2[0] = 'f';    // frank
    // s2.at(0) = 'p'  // prank   

    // string s1 {"Frank"};

    // for(char c: s1)
    //     cout << c << endl;

    // output:
    // F
    // r
    // a
    // n
    // k
    
    // for(int c: s1)
    //    cout << c << endl;

    // output:
    // 70   // F
    // 114  // r
    // 97   // a
    // 110  // n
    // 107  // k
    // 0    // null character

    return 0;
}
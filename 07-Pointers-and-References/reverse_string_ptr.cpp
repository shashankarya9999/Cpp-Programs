#include<iostream>
#include<string>

using namespace std;

string reverse_string(const string &str) 
{
    string reversed;
    
    const char* start = str.c_str();                    // Pointer to the first character
    const char* end = str.c_str() + str.size() - 1;     // Pointer to the last character

    while (end >= start) 
    {
        reversed.push_back(*end);   // Append the character at the end pointer to the reversed string
        end--;
    }

    return reversed; 
}

int main()
{
    string s {"Shashank"};

    cout << "String: ";

    for(auto c: s)
        cout << c;

    cout << endl;

    cout << "Reversed String: ";

    string reversed = reverse_string(s);

    for(auto c: reversed)
        cout << c;

    cout << endl;

    return 0; 
}

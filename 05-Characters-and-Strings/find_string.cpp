#include<iostream>
#include<string>

using namespace std;

int main()
{
    // string s1 {"This is a test"};
    // cout << s1.find("This") << endl;    // 0
    // cout << s1.find("is") << endl;      // 2
    // cout << s1.find("test") << endl;    // 10
    // cout << s1.find('e') << endl;       // 11
    // cout << s1.find("is", 4) << endl;   // 5
    // cout << s1.find("MMMM") << endl;    // string::npos

    string s1 = "The secret word is Boo";
    string word {};

    cout << "Enter the word to find: ";
    cin >> word;

    int position = s1.find(word);

    if(position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;

    else
        cout << "Sorry, " << word << " not found" << endl;

    cout << endl;
    return 0;
}

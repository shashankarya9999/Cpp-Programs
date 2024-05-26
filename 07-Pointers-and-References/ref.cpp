#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> stooges {"Larry","Moe","Curly"};

    for(auto str: stooges)
        str = "Funny";          // str is a COPY of each vector element

    for(auto const str: stooges)    // No change
        cout << str << " ";     // Larry, Moe, Curly

    for(auto &str: stooges)
        str = "Funny";          // changes the actual vector

    for(auto const str: stooges)
        cout << str << " ";     // Funny, Funny, Funny    

    cout << endl;

    return 0;
}
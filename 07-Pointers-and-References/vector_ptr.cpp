#include<iostream>
#include<vector>
#include<string>

using namespace std;

void display(const vector<string> *const v)
{
    // (*v).at(0) = "Funny";    // Error

    for(auto str: *v)
        cout << str << " ";
    
    cout << endl;

    // v = nullptr;             // Error 
}

int main()
{
    vector<string> stooges {"Larry","Moe","Curly"};
    display(&stooges);

    return 0;
}
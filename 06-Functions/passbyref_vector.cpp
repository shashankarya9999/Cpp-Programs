#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> &v);
void print_vector(vector<string> &v);
void pass_by_ref1(vector<string> &v);

int main()
{
    vector<int> data {1,2,3,4,5};

    print(data);

    vector<string> stooges {"Larry","Moe","Curly"};
    cout << "\nstooges before calling pass_by_ref1: ";
    print_vector(stooges);
    pass_by_ref1(stooges);
    cout << "stooges after calling pass_by_ref1: ";
    print_vector(stooges);

    return 0;
}

void print(vector<int> &v)
{
    // v.at(0) = 200;   // ERROR
    
    for(auto num: v)
        cout << num << " ";

    cout << endl;
}

void pass_by_ref1(vector<string> &v)
{
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> &v)
{
    for(auto s: v)
        cout << s << " ";

    cout << endl;
}
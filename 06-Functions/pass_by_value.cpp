#include<iostream>
#include<vector>
#include<string>

using namespace std;

// void param_test(int);

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

int main()
{
    // int actual {50};            
    // cout << actual << endl;     // 50
    // param_test(actual);         // pass in 50 to param_test
    // cout << actual << endl;     // 50 - did not change
    
    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\n another num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another num after calling pass_by_value1: " << another_num << endl;
    
    string name {"FRANK"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges {"Larry","Moe","Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);

    cout << endl;

    return 0;
}

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v)
{
    for(auto s: v)
        cout << s << " ";
    cout << endl;
}

// void param_test(int formal)
// {
//     cout << formal << endl;     // formal is a copy of actual // 50
//     formal = 100;               // only changes the local copy
//     cout << formal << endl;     // 100
// }

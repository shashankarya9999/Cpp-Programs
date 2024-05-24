#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v);

int main()
{
    vector<int> data {1,2,3,4,5};

    print(data);

    return 0;
}

void print(vector<int> v)
{
    for(auto num: v)
        cout << num << " ";

    cout << endl;
}
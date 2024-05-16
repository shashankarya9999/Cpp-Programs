#include<iostream>

using namespace std;

int main()
{
    // comma operator allows us to seperate expressions with a comma
    // and both expressions will execute

    for(int i {1}, j {5}; i<=5; ++i,++j)
    {
        cout << i << " * " << j << " : " << (i * j) << endl;
    }

    return 0;
}
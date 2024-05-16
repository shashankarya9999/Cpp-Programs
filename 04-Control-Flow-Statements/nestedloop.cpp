#include<iostream>

using namespace std;

int main()
{
    for(int outer_val {1}; outer_val <= 2; ++outer_val)
    {
        for(int inner_val {1}; inner_val <= 3; ++inner_val)
        {
            cout << outer_val << ", " << inner_val << endl;
        }
    }

    return 0;
}
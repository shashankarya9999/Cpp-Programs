#include<iostream>

using namespace std;

void double_data(int *int_ptr);

int main()
{
    int value {10};
    int *int_ptr {nullptr};

    cout << value << endl;      // 10
    double_data(&value);
    cout << value << endl;

    cout << "------------------------------" << endl;
    
    cout << value << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    return 0;
}

void double_data(int *int_ptr)
{
    *int_ptr *= 2;

    // *int_ptr = *int_ptr * 2
}
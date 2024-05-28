#include<iostream>

using namespace std;

int main()
{
    int *int_ptr {nullptr};

    int_ptr = new int;          // allocate an integer on the heap

    cout << int_ptr << endl;
    cout << *int_ptr << endl;   // garbage

    *int_ptr = 100;

    cout << *int_ptr << endl;   // 100

    delete int_ptr;             // frees the allocated storage

    return 0;
}

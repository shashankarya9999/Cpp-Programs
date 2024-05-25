#include<iostream>

using namespace std;

int main()
{
    // using new[] to allocate storage for an array

    size_t size {0};    
    double *temp_ptr {nullptr};

    cout << "How many temps?: ";
    cin >> size;

    temp_ptr = new double[size];  // allocate array on the heap

    cout << temp_ptr << endl;

    delete [] temp_ptr;        // free allocated storage

    return 0;
}
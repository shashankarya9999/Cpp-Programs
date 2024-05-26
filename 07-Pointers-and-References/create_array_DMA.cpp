#include<iostream>

using namespace std;

int* create_array(size_t size, int init_value = 0)
{
    int *new_storage {nullptr};

    new_storage = new int[size];

    for(size_t i {0}; i < size; ++i)
        *(new_storage + i) = init_value;    // Pointer offset notation

    return new_storage;
}

void display(const int *const array, size_t size)
{
    for(size_t i {0}; i < size; ++i)
        cout << array[i] << " ";
    
    cout << endl;
}

int main()
{
    int *my_array;          // will be allocated by the function
    size_t size;
    int init_value {};

    cout << "How many integers would you like to allocate? ";
    cin >> size;

    cout << "What value would you like them initialized to? ";
    cin >> init_value;

    my_array = create_array(size, init_value);    // create the array

    display(my_array,size);

    delete [] my_array;     // be sure to free the storage

    return 0;
}
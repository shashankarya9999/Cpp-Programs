#include<iostream>

using namespace std;

void zero_array(const int numbers[], size_t size);
void print_array(int numbers[], size_t size);

int main()
{
    int my_numbers[] {1,2,3,4,5};
    zero_array(my_numbers, 5);      
    print_array(my_numbers, 5);     

    return 0;
}

void zero_array(const int numbers[], size_t size)
{
    for(size_t i {0}; i < size; ++i)
        // numbers[i] = 0;     // any attempy to modify the array
                            // will result in compiler error
        // const
    
    return;
}

void print_array(int numbers[], size_t size)
{
    for(size_t i {0}; i < size; ++i)
        cout << numbers[i] << " ";

    cout << endl;
}
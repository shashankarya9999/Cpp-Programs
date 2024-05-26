#include<iostream>

using namespace std;

void reverse_array(int *arr, int size)
{
    int *start = arr;
    int *end = arr + (size -1);

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    size_t size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size] {};
    
    cout << "Enter elements of array: ";
    for(size_t i {0}; i < size; i++)
        cin >> arr[i];

    cout << "Array elements are: ";

    for(size_t i {0}; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    reverse_array(arr, size);

    cout << "Array elements in reverse are: ";

    for(size_t i {0}; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
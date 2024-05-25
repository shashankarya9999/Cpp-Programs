#include<iostream>

using namespace std;

int main()
{
    int num {10};

    cout << "Value of num is: " << num << endl;     // 10

    cout << "Sizeof of num is: " << sizeof(num) << endl;    // 4

    cout << "Address of num is: " << &num << endl;  // 0x7ffdca0982b4

    return 0;
}
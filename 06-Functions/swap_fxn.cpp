#include<iostream>

using namespace std;

void swap(int &a, int &b);

int main()
{
    int x {10}, y {20};

    cout << x << " " << y << endl;      // 10 20
    
    swap(x,y);

    cout << x << " " << y << endl;      // 20 10
    
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
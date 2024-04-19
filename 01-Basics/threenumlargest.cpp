#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if( a>b && a>c )
    {    
            cout << "The greatest number is: %d" << a << endl;
    }
        
    else if( b>a && b>c )       
    {
            cout << "The greatest number is: %d" << b << endl;
    }
        
    else if( c>a && c>b )
    {
            cout << "The greatest number is: %d" << c << endl;
    }
    
    return 0;
}

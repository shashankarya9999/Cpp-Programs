#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if( a>b && a>c )            printf("The greatest number is: %d\n",a);

    else if( b>a && b>c )       printf("The greatest number is: %d\n",b);

    else if( c>a && c>b )       printf("The greatest number is: %d\n",c);

    return 0;
}

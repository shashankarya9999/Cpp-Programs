#include<iostream>

using namespace std;

int main()
{
    int num1 {10};
    int num2 {20};

    int exp;

    // 100 = num1;          // lvalue required as left operand of assignment
    // num1 = "Shashank"    // conversion issue

    // expression evaluates to the value that is being assigned
    exp = (num1 = 100);
    num1 = num2 = 1000;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    
    cout << "exp: " << exp << endl;

    return 0;
}

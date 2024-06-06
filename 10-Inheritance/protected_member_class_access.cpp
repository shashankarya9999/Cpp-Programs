#include<iostream>

using namespace std;

class Base
{
    // friends of Base have access to all
    public:
        int a {0};
        void display()
        {
            cout << a << ", " << b << ", " << c << endl;
        }
    
    protected:
        int b {0};

    private:
        int c {0};
};

class Derived: public Base
{
    // friends of derived have access to only what derived has access to
    
    // a will be public
    // b will be protected
    // c will not be accessible

    public:
        void access_base_members()
        {
            a=100;  // OK
            b=200;  // OK
            // c=500;  // Compiler error
        }

};

int main()
{
    cout << "----- Base member access from base objects -----" << endl;
    Base base;

    base.a = 100;   // OK
    // base.b = 200;   // Compiler error
    // base.c = 300;   // Compiler error

    Derived d;
    d.a = 100;      // OK
    // d.b = 200;   // Error
    // d.c = 300;   // Error
    
    return 0;
}
#include<iostream>
#include<memory>

using namespace std;

class B;    // forward declaration

class A
{
    std::shared_ptr<B> b_ptr;

    public:
        void set_B(std::shared_ptr<B> &b)
        {
            b_ptr = b;
        }

        A()
        {
            cout << "A Constructor" << endl;
        }

        ~A()
        {
            cout << "A Destructor" << endl;
        }
}

class B
{
    std::shared_ptr<A> a_ptr;

    public:
        void set_A(std::shared_ptr<A> &a)
        {
            a_ptr = a;
        }

        B()
        {
            cout << "B Constructor" << endl;
        }

        ~B()
        {
            cout << "B Destructor" << endl;
        }
}

int main()
{
    
}
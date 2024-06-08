#include<iostream>
#include<memory>

using namespace std;

int main()
{
    /*
        unique_ptr - creating, initializing and using
        {
            std::unique_ptr<int> p1 {new int {100}};
            std::cout << *p1 << std::endl;      // 100
            *p1 = 200;
            std::cout << *p1 << std::endl;      // 200
        }   // automatically deleted

        unique_ptr - some other useful methods
        {
            std::unique_ptr<int> p1 {new int {100}};
            std::cout << p1.get() << std::endl;     // 0x564388
            p1.reset();     // p1 is now nullptr
            if(p1)
                std::cout << *p1 << std::endl;      // won't execute
        }   // automatically deleted

        unique_ptr - user defined classes
        {
            std::unique_ptr<Account> p1 {new Account {"Larry"}};
            std::cout << *p1 << std::endl;      // display account
            p1 -> deposit(1000);
            p1 -> withdraw(500);
        }   // automatically deleted

        unique_ptr - vectors and move
        {
            std::vector<std::unique_ptr<int>> vec;
            std::unique_ptr<int> ptr {new int {100}};
            vec.push_back(ptr);     // ERROR - copy is not allowed
            vec.push_back(std::move(ptr));  // ptr gives up ownership of pointer, and it's moved to the vector
                                            // vector now owns the pointer, and ptr will be set to null pointer    
        }   // automatically deleted

        unique_ptr - make_unique(C++14) - more efficient(no calls to new or delete)
        {
            std::unique_ptr<int> p1 = make_unique<int>(100);
            std::unique_ptr<Account> p2 = make_unique<Account>("Curly",5000);
            auto p3 = make_unique<Player>("Hero",100,100);
        }   // automatically deleted
    */
}
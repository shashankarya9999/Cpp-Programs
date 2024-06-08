#include<iostream>
#include<memory>

using namespace std;

int main()
{
    /*
        shared_ptr - creating, initializing and using 
        {
            std::shared_ptr<int> p1 {new int {100}};
            std::cout << *p1 << std::endl;  // 100
            *p1 = 200;
            std::cout << *p1 << std::endl;  // 200
        }   // automatically deleted

        shared_ptr - some other useful methods
        use_count - the number of shared_ptr objects managing the heap object
        std::shared_ptr<int> p1 {new int {100}};
        std::cout << p1.use_count() << std::endl;   // 1
        
        std::shared_ptr<int> p2 {p1};               // shared ownership
        std::cout << p1.use_count() << std::endl;   // 2
        
        p1.reset();     // decrements the use_count; p1 is nulled out
        std::cout << p1.use_count() << std::endl;   // 0
        std::cout << p2.use_count() << std::endl;   // 1

        shared_ptr - user-defined classes
        {
            std::shared_ptr<Account> p1 {new Account {"Larry"}};
            std::cout << *p1 << std::endl;  // display account

            p1 -> deposit(1000);
            p1 -> withdraw(500);
        }   // automatically deleted

        shared_ptr - vectors and move
        {
            std::vector<std::shared_ptr<int>> vec;
            std::shared_ptr<int> ptr {new int {100}};

            vec.push_back(ptr);     // OK - Copy is allowed

            std::cout << ptr.use_count() << std::endl;  // 2
        }   // automatically deleted

        shared_ptr - make_shared(C++11)
        {
            std::shared_ptr<int> p1 = std::make_shared<int>(100);   // use_count: 1
            std::shared_ptr<int> p2 {p1};                           // use_count: 2
            std::shared_ptr<int> p3;                                // use_count: 3
            p3 = p1;
        }   // automatically deleted

        // // use std::make_shared - it's more efficient
        // when 3 pointers point to the SAME object on the heap!
        // When the use_count becomes 0, the heap object is deallocated
    */
}
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int *p;

    cout << "Value of p is: " << p << endl;     // contains garbage value

    cout << "Address of p is: " << &p << endl;

    cout << "sizeof of p is: " << sizeof(p) << endl;    // 8

    p = nullptr;    // set p to point nowhere

    cout << "Value of p is: " << p << endl;     // 0

    // All pointers in a program have same size. 
    // Here p1,p2,p3,p4 all have same size.

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "\nsizeof p1 is: " << sizeof(p1) << endl;
    cout << "sizeof p2 is: " << sizeof(p2) << endl;
    cout << "sizeof p3 is: " << sizeof(p3) << endl;
    cout << "sizeof p4 is: " << sizeof(p4) << endl;
    cout << "sizeof p5 is: " << sizeof(p5) << endl;

    cout << endl;

    // Compiler makes sure that the address stored in a pointer
    // is of the correct type

    int score {10};
    double high_temp {100.7};

    int *score_ptr {nullptr};

    score_ptr = &score;         // OK
    // score_ptr = &high_temp;     // Complier Error 
                                // since high_temp is double

    cout << "Value of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << endl;

    return 0;
}
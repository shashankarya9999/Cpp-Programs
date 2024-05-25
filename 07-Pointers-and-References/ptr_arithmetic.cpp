#include<iostream>

using namespace std;

int main()
{
    int scores[] {100,95,89,68,-1};
    int *score_ptr {scores};

    // one way
    
    while(*score_ptr != -1)     // -1 is the sentinel value
    {
        cout << *score_ptr << " ";
        score_ptr++;
    }
    
    cout << endl;

    // another way

    score_ptr = scores;

    // *score_ptr++ is equivalent to *(score_ptr++) not (*score_ptr)++
    // in the former, we are dereferencing the pointer and then incrementing the pointer
    // while in latter, we are dereferencing the pointer and then incrementing the integer pointed to by the pointer
    // the latter one is an infinite loop 

    while(*score_ptr != -1)
        cout << *(score_ptr++) << " ";
    
    cout << endl;

    return 0;
}
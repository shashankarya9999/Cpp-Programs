#include<iostream>

using namespace std;

int main()
{
    int scores[] {100,98,89};

    cout << "Value of scores: " << scores << endl;

    int *score_ptr {scores};

    cout << "Value of score_ptr: " << score_ptr << endl;

    // Array subscript notation
    
    cout << "\nArray subscript notation" << endl;

    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    // Array offset notation

    cout << "\nArray offset notation" << endl;

    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    // Pointer subscript notation
    
    cout << "\nPointer subscript notation" << endl;

    cout << score_ptr[0] << endl;   // 100
    cout << score_ptr[1] << endl;   // 98
    cout << score_ptr[2] << endl;   // 89

    // Pointer offset notation

    cout << "\nPointer offset notation" << endl;

    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << endl;

    return 0;
}
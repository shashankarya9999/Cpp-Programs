#include<iostream>

using namespace std;

int main()
{
    /*
        ///////////// pointer to constants ////////////////
        
        int high_score {100};
        int low_score {65};
        const int *score_ptr {&high_score};

        *score_ptr = 86;            // Error
        score_ptr = &low_score;     // OK 

        ////////////// constant pointers /////////////////

        int high_score {100};
        int low_score {65};
        int *const score_ptr {&high_score};

        *score_ptr = 86;            // Ok
        score_ptr = &low_score;     // Error

        ///////// constant pointer to constants /////////

        int high_score {100};
        int low_score {65};
        const int *const score_ptr {&high_score};

        *score_ptr = 86;            // Error
        score_ptr = &low_score      // Error

    */

    return 0;
}
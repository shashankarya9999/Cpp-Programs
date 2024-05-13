#include<iostream>

using namespace std;

int main()
{
    int total_amount {100};
    int total_number {8};
    double average {0.0};

    // before explicit typecasting

    average = total_amount / total_number;
    cout << average << endl;    // displays 12

    // after explicit typecasting

    average = static_cast<double>(total_amount) / total_number;
    cout << average << endl;    // displays 12.5

    return 0;
}
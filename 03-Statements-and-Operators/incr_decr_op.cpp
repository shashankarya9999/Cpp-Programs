#include<iostream>

using namespace std;

int main()
{
    int counter {10};
    int result {0};

    // simple increment
    
    cout << "Simple Increment" << endl;
    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;    // post-increment
    cout << "Counter: " << counter << endl;

    ++counter;    // pre-increment
    cout << "Counter: " << counter << endl;

    // pre-increment
    
    cout << "\nPre-increment" << endl;
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter; // increment before assignment, counter will be incremented before it's used
    
    // counter = counter + 1 then -> result = counter

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // post-increment
    
    cout << "\nPost-increment" << endl;
    counter = 10; 
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++;  // increment after assignment

    // result = counter then -> counter = counter + 1

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    return 0;
}

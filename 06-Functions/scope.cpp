#include<iostream>

using namespace std;

int num {300};      // Global variable - declared outside any class or function

void global_example();
void local_example(int x);
void static_local_example();

int main()
{
    int num {100};          // local to main
    int num1 {500};         // local to main

    cout << "Local num is: " << num << " in main" << endl;

    {
        // creates a new level of scope
        int num {200};      // local to this inner block

        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    cout << endl;

    global_example();
    global_example();

    cout << endl; 

    static_local_example();
    static_local_example();
    static_local_example();

    return 0;
}

void global_example()
{
    cout << "Global num is: " << num << " in global_example - start" << endl;

    num *= 2;

    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_example(int x)
{
    int num {1000};

    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    
    num = x;
    
    cout << "Local num is: " << num << " in local_example - end" << endl;
    // num1 in main is not within scope - so it can't be used here
}

void static_local_example()
{
    static int num {5000};  // local to static_local_example static - retains its value between calls

    cout << "Local static num is: " << num << " in static_local_example - start" << endl;

    num += 1000;

    cout << "Local static num is: " << num << " in static_local_example - end" << endl;
}


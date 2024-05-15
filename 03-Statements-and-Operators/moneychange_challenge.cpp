/*

    Challenge
    
- For this program I will be using USD dollars and cents
- Write a program that asks the user to enter the following:
    - An integer representing the number of cents.
- Assuming that the number of cents entered is greater than or equal to zero
- The program should then display how to provide that change to the user.
- In USD:
    - 1 dollar is 100 cents
    - 1 quarter is 25 cents
    - 1 dime is 10 cents
    - 1 nickel is 5 cents
    - 1 penny is 1 cent
*/

#include<iostream>

using namespace std;

int main()
{
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int change_amount {};

    // not using modulo operator
    
    cout << "Not using modulo operator:" << endl;
    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    int balance {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    dollars = change_amount / dollar_value;
    balance = change_amount - ( dollars * dollar_value );

    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;

    dimes = balance / dime_value;
    balance -= dimes * dime_value;

    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;

    pennies = balance; 

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    // using modulo operator

    cout << "Using modulo operator: " << endl;
    balance = dollars = quarters = dimes = nickels = pennies = 0;

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}

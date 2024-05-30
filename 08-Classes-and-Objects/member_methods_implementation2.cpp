#include<iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account hero_account;
    hero_account.set_name("Hero's account");
    hero_account.set_balance(1000.0);

    if(hero_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not allowed" << endl;

    if(hero_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    if(hero_account.withdraw(1500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    return 0;
}
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player
{
    public:
        //attributes
        string name {"Player"};
        int health {100};
        int xp {3};

        //methods
        void talk(string text_to_say)
        {
            cout << name << " says " << text_to_say << endl;
        }

        bool is_dead();
};

class Account
{
    public:
        //attributes
        string name {"Account"};
        double balance {0.0};

        //methods
        void deposit(double bal)
        {
            balance += bal;
            cout << "In deposit" << endl;
        }

        void withdraw(double bal)
        {
            balance -= bal;
            cout << "In withdraw" << endl;
        }
};

int main()
{
    Account hero_account;
    hero_account.name = "Hero's account";
    hero_account.balance = 5000.0;

    hero_account.deposit(1000.0);
    hero_account.withdraw(500.0);
    
    Player hero;
    hero.name = "Hero";
    hero.health = 100;
    hero.xp = 12;
    hero.talk("Hi there!");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy -> xp = 15;

    enemy -> talk("I will destroy you!");

    return 0;
}
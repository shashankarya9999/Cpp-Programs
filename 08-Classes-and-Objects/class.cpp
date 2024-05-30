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
        void talk(string text_to_say);
        bool is_dead();
};

class Account
{
    public:
        //attributes
        string name {"Account"};
        double balance {0.0};

        //methods
        bool deposit(double);
        bool withdraw(double);
};

int main()
{
    Account hero_account;
    Account jolie_account;
    
    Player jolie;
    Player hero;

    Player players[] {jolie, hero};

    vector<Player> player_vec {jolie};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}
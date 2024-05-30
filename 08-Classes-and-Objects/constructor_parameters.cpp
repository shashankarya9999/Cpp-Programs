#include<iostream>
#include<string>

using namespace std;

class Player
{
    private:
        std::string name;
        int health;
        int xp;
    
    public:
        Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player(std::string name_val, int health_val, int xp_val)
    :name {name_val}, health {health_val}, xp {xp_val}
{
    cout << "Three-args constructor" << endl;
}

int main()
{
    Player empty;
    Player hero {"Hero"};
    Player jolie {"Jolie",100};
    Player villain {"Villain",100,55};

    return 0;
}
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
        // overloaded constructors
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() 
    :name {"None"}, health {0}, xp {0}
{
    name = "None";
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val) 
    :name {name_val}, health {0}, xp {0}
{
    name = name_val;
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    :name {name_val}, health {health_val}, xp {xp_val}
{
    name = name_val;
    health = health_val;
    xp = xp_val;
}

int main()
{
    Player empty;
    Player hero {"Hero"};
    Player villain {"Villain",100,55};

    return 0;
}
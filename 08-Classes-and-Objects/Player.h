#ifndef _PLAYER_H_
#define _PLAYER_H_
#include<string>

class Player
{
    private:
        static int num_players;
        std::string name;
        int health;
        int xp;

    public:
        std::string get_name()
        {
            return name;
        }

        int get_health()
        {
            return health;
        }

        int get_xp()
        {
            return xp;
        }

        Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

        // copy constructor
        Player(const Player &source);
        
        // destructor
        ~Player();

        static int get_num_players();
};

#endif  // _PLAYER_H_
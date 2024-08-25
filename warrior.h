#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"
#include <string>

class Warrior : public Player{
private:
    std::string weapon;

public:
    //wizard constructor
    Warrior(std::string name, int health, int damage, std::string weapon);
    
    //get mana
    std::string getWeapon ();

    //set mana
    void setWeapon (std::string weapon);

    //cast spell that does damage based on mana
    void swingWeapon(Player* opponent);

};

#endif
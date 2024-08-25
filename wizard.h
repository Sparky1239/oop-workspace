#ifndef WIZARD_H
#define WIZARD_H

#include <string>
#include "player.h"

class Wizard : public Player{
private:
    int mana;

public:
    //wizard constructor
    Wizard(std::string name, int health, int damage, int mana);
    
    //get mana
    int getMana ();

    //set mana
    void setMana (int mana);

    //cast spell that does damage based on mana
    void castSpell(Player* opponent);

};

#endif
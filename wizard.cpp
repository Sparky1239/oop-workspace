    #include "player.h"
    #include "wizard.h"
    #include <iostream>
    #include <string>

    //Wizard constructor
    Wizard::Wizard(std::string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {}
    
        //get mana
    int Wizard::getMana (){
        return mana;
    }

    //set mana
    void Wizard::setMana (int mana){
        this->mana = mana;
    }

    //cast spell that does damage based on mana
    void Wizard::castSpell(Player* opponent){
        opponent->takeDamage(mana);
    }

    

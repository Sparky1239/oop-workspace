    #include "player.h"
    #include "warrior.h"
    #include <iostream>
    #include <string>

    //Warrior constructor
    Warrior::Warrior(std::string name, int health, int damage, std::string weapon) : Player(name, health, damage), weapon(weapon) {}
    
    //get weapon
    std::string Warrior::getWeapon (){
        return weapon;
    }

    //set weapon
    void Warrior::setWeapon (std::string weapon){
        this->weapon = weapon;
    }

    //cast spell that does damage based on mana
    void Warrior::swingWeapon(Player* opponent){
        opponent->takeDamage(getDamage());
    }

    
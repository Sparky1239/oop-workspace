    #include "player.h"
    #include <iostream>
    #include <string>
    
    //constructor that sets the data members to the given values
    Player::Player(std::string name, int health, int damage) : name(name), health(health), damage(damage) {}

    //deals damage to the opponent based on the player's damage point
    void Player::attack(Player* opponent, int damage) {
        opponent ->takeDamage(damage);
    }
    
    //reduces the player's health by the given amount
    void Player::takeDamage(int damage) {
        health -= damage;
        std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    }

    //get and setters
    
    //name
    std::string Player::getName() {
        return name;
    }

    //health
    int Player::getHealth(){
        return health;
    }
    void Player::setHealth(int health){
        this->health = health;
    }

    //damage
    int Player::getDamage(){
        return damage;
    }
    void Player::setDamage(int damage){
        this->damage = damage;
    }

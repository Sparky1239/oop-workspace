#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int health;
    int damage;

public:
    //constructor that sets the data members to the given values
    Player(std::string name, int health, int damage);

    //deals damage to the opponent based on the player's damage point
    void attack(Player* opponent, int damage);
    
    //reduces the player's health by the given amount
    void takeDamage(int damage);

    //get and setters
    
    //name
    std::string getName();

    //health
    int getHealth();
    void setHealth(int health);

    //damage
    int getDamage();
    void setDamage(int health);



};

#endif
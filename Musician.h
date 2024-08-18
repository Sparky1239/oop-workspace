#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    std::string instrument;
    int experience;

public:
    // default constructor
    Musician();

    // Constructor with Parameters
    Musician(std::string instrument, int experience);

    // Method to get the instrument Played
    std::string get_instrument();

    //Method to get the number of years of experience
    int get_experience();


};

#endif

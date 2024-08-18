#include "Musician.h"

//default constructor
Musician::Musician() : instrument("null"), experience(0) {}

//constructor with parameters
Musician::Musician(std::string instrument, int experience) : instrument(instrument), experience(experience) {}


std::string Musician::get_instrument(){
    return instrument;
}

int Musician::get_experience() {
    return experience;
}

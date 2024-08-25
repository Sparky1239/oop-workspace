#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "Musician.h"

class Orchestra {
private:
    Musician  *members;
    int max_Size;
    int current_Size;

public:
    // default constructor
    Orchestra();      

    // constructor for an orchestra of given size
    Orchestra(int size);   

    // returns the number of musicians who have joined the orchestra
    int get_current_number_of_members(); 

    // returns true if any musician in the orchestra plays the specified instrument
    // otherwise returns false
    bool has_instrument(std::string instrument); 


    // returns the array of members of the orchestra
    Musician *get_members(); 
    
           
    // returns true and adds new musician to the orchestra if the orchestra is not full
    // otherwise returns false
    bool add_musician(Musician new_musician);

    //delete orchestra
    ~Orchestra();
};

#endif
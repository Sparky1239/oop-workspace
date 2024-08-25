#include "Musician.h"
#include "Orchestra.h"

    // default constructor
    Orchestra :: Orchestra() : members(nullptr), max_Size(0), current_Size(0) {}       

    // constructor for an orchestra of given size
    Orchestra :: Orchestra(int size) : max_Size(size), current_Size(0) {
        members = new Musician[max_Size];
    }   

    // returns the number of musicians who have joined the orchestra
    int Orchestra :: get_current_number_of_members() {
        return current_Size;
    }

    // returns true if any musician in the orchestra plays the specified instrument
    // otherwise returns false
    bool Orchestra :: has_instrument(std::string instrument){
        for (int i = 0; i < current_Size; i++){
            if (members[i].get_instrument() == instrument){
                return true;
            }
        }
        return false;
    } 

    // returns the array of members of the orchestra
    Musician *Orchestra:: get_members(){
        return members;
    }       

    // returns true and adds new musician to the orchestra if the orchestra is not full
    // otherwise returns false
    bool Orchestra :: add_musician(Musician new_musician){
        if (current_Size < max_Size){
            members[current_Size]=new_musician;
            current_Size++;
            return true;
        }
        return false;
    }

    //delete orchestra
    Orchestra :: ~Orchestra(){
        delete[] members;
    }


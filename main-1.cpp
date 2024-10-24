#include "GridItem.hpp"
#include "Helper.hpp"

int main(){
    Helper Helper;
    GridItem Block1 = GridItem(1, 1, 1, 1);
    GridItem Block2 = GridItem(5, 5, 1, 1);
    
    std::cout<<"\nblock position 1: " <<Block1.getCoordinates().first<< " "<<Block1.getCoordinates().second;
    std::cout<<"\nblock position 2: " <<Block2.getCoordinates().first<< " "<<Block2.getCoordinates().second;

    std::cout<<"\ndistance between the blocks is: " << Helper.euclideanDistance(Block1.getCoordinates(), Block2.getCoordinates());
}
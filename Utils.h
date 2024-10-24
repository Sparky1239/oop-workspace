#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <cmath>
#include <cstdlib>

class Utils{
    public:
    //Static function to generate a random position within the grid
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);

    //static funciton to calculate euclidean distance between two positions
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);


};





#endif

#include "Utils.h"

//Static function to generate a random position within the grid
std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
    int x = rand() % gridWidth;
    int y = rand() % gridHeight;
    return std::make_tuple(x,y);
}

//static function to calculate euclidean distance between two positions
double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
    int x1 = std::get<0>(pos1), y1 = std::get<1>(pos1);
    int x2 = std::get<0>(pos2), y2 = std::get<1>(pos2);
    return std::sqrt(std::pow(x2-x1, 2) + std::pow(y2-y1, 2));
    
}

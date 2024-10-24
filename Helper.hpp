#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <cmath>

class Helper {
public:
    //function to calculate the euclidean distance betweeen two coordinates.
    double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        int x1 = item1.first;           int y1 = item1.second;
        int x2 = item2.first;           int y2 = item2.second;
        return sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2));
    }
};


#endif
#ifndef GRIDITEM_H
#define GRIDITEM_H

#include <iostream>
#include <tuple>

class GridItem
{
protected:
    std::pair<int, int> position;
    int width; 
    int height;
    int ActiveGridItemCount = 0;
public:
    //constructor
    GridItem(int x, int y, int width, int height) 
        : position(x,y), width(width), height(height) {
            ActiveGridItemCount++;
        }
    //default constructor
    GridItem()
        :position(0,0), width(0), height(0) {

        }
    //set coordinates
    void setCoordinates(int x, int y) {
        position = std::pair(x, y);
    }
    //get Coordiantes
    std::pair<int,int> getCoordinates() {
        return position;
    }
    //get grid width
    int getGridWidth() {
        return width;
    }
    //get grid height
    int getGridHeight() {
        return height;
    }
    //get active grid item count
    int getActiveGridItemCount(){
        return ActiveGridItemCount;
    }
    virtual ~GridItem(){
        ActiveGridItemCount--;
    }

    

};





#endif
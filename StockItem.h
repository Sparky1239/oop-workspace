#ifndef STOCKITEM_H
#define STOCKITEM_H
#include <string>

class StockItem
{
private:
std::string description;
int code_num;


public:
    //default constructor
    StockItem();

    //constructor that takes code number and description
    StockItem(int code_num, std::string description);

    //returns description
    std::string get_description();

    //returns the item code
    int get_item_code();
    
    //default destructor
    ~StockItem();
};








#endif

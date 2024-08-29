#include "StockItem.h"
#include <string>
#include <iostream>

    //default constructor
    StockItem::StockItem() : description(""), code_num(0) {}

    //constructor that takes code number and description
    StockItem::StockItem(int code_num, std::string description) :  description(description), code_num(code_num) {}

    //returns description
    std::string StockItem::get_description(){
        return description;
    }

    //returns the item code
    int StockItem::get_item_code(){
        return code_num;
    }
    
    //default destructor
    StockItem::~StockItem() {
        
    }
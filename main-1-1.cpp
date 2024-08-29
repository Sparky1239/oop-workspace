#include <string>
#include <iostream>
#include "StockItem.h"
using namespace std;

int main(){

StockItem null = StockItem();
StockItem apple = StockItem(1,"it's red" );

cout << null.get_description() << null.get_item_code() << apple.get_description() << apple.get_item_code();


return 0;
}
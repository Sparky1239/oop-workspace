#include <string>
#include <iostream>
#include "StockItem.h"
#include "Store.h"
using namespace std;

int main(){
StockItem apple = StockItem(1, "apple");
StockItem orange = StockItem(2, "orange");
StockItem banana = StockItem(3, "banana");
StockItem peach = StockItem(4, "peach");


Store storeA = Store(3);
cout << storeA.add_Stock(apple) << storeA.add_Stock(orange) << storeA.add_Stock(banana) << storeA.add_Stock(peach)<< "\n";

cout << storeA.get_Total_Stock_Count() << "\n";

cout << "the store has" << storeA.get_Total_Stock_Count() << "fruits";

cout << "the store has" << storeA.get_Stock_Count(2) <<  "oranges";



return 0;
}
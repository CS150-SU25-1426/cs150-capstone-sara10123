#include <iostream>
#include "Inventory.h"
using namespace std; 

int main() {

    Inventory produce("Carrots", "Veggies", 40, "02/24/2025"); 
    Inventory babyProducts("Diapers", "Infant", 200, ""); 
    Inventory cannedGoods("Canned Beans", "Canned", 75, "06/12/25"); 
    Inventory cannedGoods2("Canned fruits", "Canned", 20, "08/03/27");

    cout << "Fresh Produce: "<< produce << endl; 
    cout << "Infant Products: " << babyProducts << endl;
    cout << "Canned Goods: " << cannedGoods << endl; 
    cout << "Excess Canned Goods: " << cannedGoods2 << endl;
    return 0;
}
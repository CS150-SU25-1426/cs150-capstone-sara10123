#ifndef INVENTORYLIST_H
#define INVENTORYLIST_H

#include <vector>
#include "Inventory.h"
using namespace std; 

class InventoryList {
    private: 
    vector<Inventory> items; 

    public:
    void addItem(const Inventory& item); 
    bool editItem(const string& name); 
    bool deleteItem(const string& name);
    void showAll() const;

    bool operator==(const InventoryList& other) const;
    friend ostream& operator<<(ostream& os, const InventoryList& list);  
};


#endif
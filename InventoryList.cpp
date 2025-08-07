#include "InventoryList.h"
#include <iostream>

void InventoryList::addItem(const Inventory& item) {
    items.push_back(item); 
}

bool InventoryList::editItem(const string& name) {
    for(size_t i = 0; i < items.size(); ++i) {
        Inventory& item = items[i]; 
        if(item.getName()== name) {
            string newName, newCategory, newExpirationDate;
            int newQuantity;
            
            cout << "Enter new name: "; 
            getline(cin >> ws, newName); 
            cout << "Enter new category: "; 
            getline(cin>> ws, newCategory); 
            cout << "Enter new quantity: ";
            cin>> newQuantity;
            cout << "Enter new expiration date(if N/A leave blank): ";
            getline(cin>> ws, newExpirationDate);

            item.setName(newName); 
            item.setCategory(newCategory); 
            item.setQuantity(newQuantity); 
            item.setExpirationDate(newExpirationDate);
            return true;

        }
    }
    return false;
}

bool InventoryList::deleteItem(const string& name) {
    for(vector<Inventory>::iterator it = items.begin(); it != items.end(); ++it) {
        if (it-> getName() == name) {
            items.erase(it);
            return true;
        }
    }
    return false;
}

void InventoryList::showAll() const {
    if(items.empty()) {
        cout<< "Inventory empty\n";
        return;
    }

    for (size_t i =0; i < items.size(); ++i) {
        const Inventory& item = items[i];
        cout << item << endl;
    }
}

bool InventoryList::operator==(const InventoryList& other) const {
    return items == other.items;
}

ostream& operator <<(ostream& os, const InventoryList& list) {
    for (size_t i =0; i < list.items.size(); ++i) {
        os <<list.items[i] << endl;
    }
    return os;
}
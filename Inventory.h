#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
using namespace std; 

class Inventory {
    private: 
    string name, category, expirationDate; 
    int quantity; 

    public: 
    Inventory(); 
    Inventory(string name, string category, int quantity, string expirationDate);

    string getName() const; 
    string getCategory() const; 
    int getQuantity() const; 
    string getExpirationDate() const; 

    void setName(string name); 
    void setCategory(string category); 
    void setQuantity(int quantity); 
    void setExpirationDate(string expirationDate); 

    bool operator ==(const Inventory& other) const; 
    friend ostream& operator<<(ostream& os, const Inventory& item); 
    
}; 

#endif

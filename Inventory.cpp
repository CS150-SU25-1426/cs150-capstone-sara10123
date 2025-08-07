#include "Inventory.h"

Inventory::Inventory() {
    name = ""; 
    category = ""; 
    quantity = 0; 
    expirationDate = ""; 
}

Inventory::Inventory(string name, string category, int quantity, string expirationDate) {
    this-> name = name;
    this-> category = category; 
    this-> quantity = quantity; 
    this -> expirationDate = expirationDate; 
}

string Inventory::getName() const {
    return name; 
}

string Inventory::getCategory() const {
    return category; 
}

int Inventory::getQuantity() const {
    return quantity; 
}

string Inventory::getExpirationDate() const {
    return expirationDate; 
}

void Inventory::setName(string name) {
    this ->name = name; 
}

void Inventory::setCategory(string category) {
    this ->category = category; 
}

void Inventory::setQuantity(int quantity) {
    this ->quantity = quantity; 
}

void Inventory::setExpirationDate(string expirationDate) {
    this ->expirationDate = expirationDate; 
}

bool Inventory::operator==(const Inventory& other) const {
    return (name== other.name) && (category == other.category);
}

ostream& operator << (ostream& os, const Inventory& item) {
    os << "\nName: " << item.name << "\n"
    << "Category: " << item.category << "\n" 
    << "Quantity: " << item.quantity << "\n"
    << "Expiration Date: ";

    if (item.expirationDate != "")
    os << item.expirationDate << "\n"; 
    else
    os << "No expiration date.\n"; 

    return os; 
}

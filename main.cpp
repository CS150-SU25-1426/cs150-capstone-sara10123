#include <iostream>
#include <iomanip>
#include "Inventory.h"
#include "InventoryList.h"
using namespace std; 

int main() {
    InventoryList inventory;
    int choice;

    cout << "**************************************************************************\n";
    cout << left << setw(52) << "**" << right << setw(23) << "**\n";
    cout << left << setw(20) << "**" << "FOOD BANK INVENTORY" << right << setw(36) << "**\n";
    cout << left << setw(52) << "**" << right << setw(23) << "**\n";

    do{
        cout << "**************************************************************************\n";
        cout << "Choose one of the following options:" << endl <<  "1) Add an item" << endl << "2) Edit an item" << endl
        << "3) Delete an item" << endl << "4) Show all in inventory" << endl
        << "5) Exit" << endl;
        cout << "**************************************************************************\n";
        cout << "\nEnter your choice(1-5): ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1: {
                string name, category, expiration;
                int quantity;

                cout << "Enter item name: ";
                getline(cin, name);
                cout << "Enter item category: ";
                getline(cin, category);
                cout << "Enter quantity of item: ";
                cin>> quantity;
                cin.ignore();
                cout << "Enter item expiration date(MM/DD/Year, if N/A leave blank): ";
                getline(cin, expiration);

                Inventory newItem(name, category, quantity, expiration);
                inventory.addItem(newItem);
                cout << "\nItem added to food bank inventory!\n";
                break;
            }

            case 2: {
                string name; 
                cout << "Enter name of item to edit: ";
                getline(cin, name);
                if(!inventory.editItem(name)) {
                    cout << "\nItem was not found in inventory.\n";
                }
                break;
            }

            case 3: {
                string name;
                cout << "Enter name of item to delete: ";
                getline(cin, name);
                if (inventory.deleteItem(name)) {
                    cout << "\nItem successfully deleted!\n"; 
                } else {
                    cout << "\nItem not found in inventory. \n";
                }
                break;
            }

            case 4: 
            inventory.showAll();
            break;

            case 5: 
            cout << "Have a great day! Bye!\n"; break;

            default: cout << "ERROR: Invalid choice! Please enter a number between 1-5.\n";
        }
        
    } while(choice != 5);
    
    return 0;
}
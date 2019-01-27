/**
 * File       : Inventory.h
 * Description: Inventory class specification
 **/

#ifndef INVENTORY_H
#define INVENTORY_H

// Inventory class declaration
class Inventory
{
  private:
    int    itemNumber;
    int    quantity;
    double cost;
  
  public:

    /******************** VALIDATORS ********************/

    // Checks if the object is receiving a negative number, takes a double
    bool isValid(double n);

    // Checks if the object is receiving a negative number, takes an int
    bool isValid(int n);

    /******************** CONSTRUCTORS ********************/

    // Default constructor
    Inventory();
    
    // Overloaded constructor
    Inventory(int i, int q, double c);

    /******************** MUTATORS ********************/
    
    // Sets the number of the item
    void setItemNumber(int i);

    // Sets the quantity of items
    void setQuantity(int q);

    // Sets the cost of each individual item
    void setCost(double c);

    /******************** ACCESSORS ********************/
    
    // Returns the number of the item
    int getItemNumber();

    // Get quantity
    int getQuantity();

    // Returns the cost of an individual item
    double getCost();

    // Returns the total cost all the items
    double getTotalCost();

    /******************** DESTRUCTOR ********************/

    // Destructor
    ~Inventory();
};

#endif
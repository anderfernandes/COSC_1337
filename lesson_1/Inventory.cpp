/**
 * File       : Inventory.cpp
 * Description: Inventory class implementation
 **/

#include "Inventory.h"

/******************** CONSTRUCTORS ********************/

// Default constructor, creates object with all 3 parameters set to 0
Inventory::Inventory()
{
  itemNumber = 0;
  quantity   = 0;
  cost       = 0;
}

// Overloaded constructor, takes item number, quantity and cost, in that order and set object's values
Inventory::Inventory(int i, int q, double c) {
  setItemNumber(i);
  setQuantity(q);
  setCost(c);
  getTotalCost();
}

/******************** VALIDATORS ********************/

// Checks if the object is receiving a negative number, takes a double
bool Inventory::isValid(double n)
{
  if (n < 0)
    return false;
  else 
    return true;
}

// Check if object is receiving a negative number, takes an int
bool Inventory::isValid(int n)
{
  if (n < 0)
    return false;
  else 
    return true;
}

/******************** MUTATORS ********************/

// Sets the number of the item
void Inventory::setItemNumber(int i) 
{ itemNumber = i; } 

// Sets the quantity of items
void Inventory::setQuantity(int q)
{ quantity = q;   }

// Sets the cost of each individual item
void Inventory::setCost(double c) 
{ cost = c;       }

/******************** ACCESSORS ********************/

// Returns the number of the item
int Inventory::getItemNumber() 
{ return itemNumber;      }

// Returns the quantity of items
int Inventory::getQuantity()
{ return quantity;        }

// Returns the cost of an individual item
double Inventory::getCost() 
{ return cost;            }

// Returns the total cost all the items
double Inventory::getTotalCost() 
{ return cost * static_cast<double>(quantity); }

/******************** DESTRUCTOR ********************/

// Destructor
Inventory::~Inventory() {}

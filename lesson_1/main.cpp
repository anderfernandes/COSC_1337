/**
 * File       : main.cpp
 * Description: Uses the Inventory class
 **/

#include <iostream>
#include <iomanip>
#include "Inventory.h"

using namespace std;

int main() 
{
  // Creating first inventory object with default constructor
  Inventory cofeeInventory;
  
  // Creating second inventory object with overloaded constructor
  Inventory teaInventory(124, 12, 84.95);

  // Creating third inventory object with default constructor to test validation
  Inventory smoothieInventory;

  // Creating variables  that will hold data for the third object
  int       smoothieItemNumber, smoothieQuantity;
  double    smoothieCost;

  // Demonstrating the default constructor
  cout << "Demonstrating the default constructor..." << endl;

  // Showing first object's data on the screen
  cout << "Item Number :   " << setw(7) << cofeeInventory.getItemNumber() << endl;
  cout << "Quantity    :   " << setw(7) << cofeeInventory.getQuantity()   << endl;
  
  cout << "Cost        : $ " << setw(7) << right << fixed << setprecision(2) 
                             << cofeeInventory.getCost() << endl;
  
  cout << "Total Cost  : $ " << setw(7) << right << fixed << setprecision(2) 
                             << cofeeInventory.getTotalCost() << endl << endl;

  // Demonstrating the overloaded constructor
  cout << "Demonstrating the overloaded constructor..." << endl;

  // Show second object's data on the screen
  cout << "Item Number :   " << setw(7) << teaInventory.getItemNumber() << endl;
  cout << "Quantity    :   " << setw(7) << teaInventory.getQuantity()   << endl;
  
  cout << "Cost:       : $ " << setw(7) << fixed << setprecision(2) 
                             << teaInventory.getCost() << endl;
  
  cout << "Total Cost  : $ " << setw(7) << fixed << setprecision(2) 
                             << teaInventory.getTotalCost() << endl << endl;
  
  // Demonstrating set functions
  cout << "Demonstrating the \"set\" functions..." << endl;

  // Set second object's data
  cofeeInventory.setItemNumber(243);
  cofeeInventory.setQuantity(50);
  cofeeInventory.setCost(9.50);

  // Show second object's data on the screen
  cout << "Item Number :   " << setw(7) << cofeeInventory.getItemNumber() << endl;
  cout << "Quantity    :   " << setw(7) << cofeeInventory.getQuantity()   << endl;
  
  cout << "Cost        : $ " << setw(7) << right << fixed << setprecision(2) 
                             << cofeeInventory.getCost()      << endl;
  
  cout << "Total Cost  : $ " << setw(7) << right << fixed << setprecision(2) 
                             << cofeeInventory.getTotalCost() << endl << endl;

  // Demonstrating input validation functions

  cout << "Demonstrating the input validation functions..." << endl;

  // Assign an invalid item number and validate it
  smoothieItemNumber = -10;
  
  // Only assign a value to the object if that value is valid
  while (!smoothieInventory.isValid(smoothieItemNumber))
  {
    cout << "Item Number must be 0 or greater. Please re-enter: ";
    cin  >> smoothieItemNumber;
    smoothieInventory.setItemNumber(smoothieItemNumber);
  }

  // Assign an invalid quantity and validate it
  smoothieQuantity = -100;

  // Only assign a value to the object if that value is valid
  while (!smoothieInventory.isValid(smoothieQuantity))
  {
    cout << "Quantity must be 0 or greater. Please re-enter: ";
    cin  >> smoothieQuantity;
    smoothieInventory.setQuantity(smoothieQuantity);
  }

  // Assign an invalid cost and validate it
  smoothieCost = -1000;

  // Only assign a value to the object if that value is valid
  while (!smoothieInventory.isValid(smoothieCost))
  {
    cout << "Cost must be 0 or greater. Please re-enter: ";
    cin  >> smoothieCost;
    smoothieInventory.setCost(smoothieCost);
  }

// Show third object's data on the screen
  cout << "Item Number :   " << setw(7) << smoothieInventory.getItemNumber() << endl;
  cout << "Quantity    :   " << setw(7) << smoothieInventory.getQuantity()   << endl;
  
  cout << "Cost        : $ " << setw(7) << right << fixed << setprecision(2) 
                             << smoothieInventory.getCost() << endl;
  
  cout << "Total Cost  : $ " << setw(7) << right << fixed << setprecision(2) 
                             << smoothieInventory.getTotalCost() << endl << endl;
    
  return 0;
}
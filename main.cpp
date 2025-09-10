// Assignment 1 - Fuel Range
// TODO: Dylan Rutt
#include <iostream>
#include <algorithm>
using namespace std; 

int main() {
 double tankCapacity, milesPerGallon;
int percentFull;

// prompt for inputs
cout << "enter the capacity of the fuel tank in gallons: ";
cin >> tankCapacity;

cout<< "enter the miles per gallon: ";
cin >> milesPerGallon;

cout << "enter the percentage the tank is filled (0-100): ";
cin>> percentFull;

// calculate remaining fuel
double fuelRemaining = tankCapacity * (percentFull / 100.0);

// Calculate range
double miles = fuelRemaining * milesPerGallon;

// display result
cout << "\nthe vehicle can be driven " << miles
<< " miles on the remaining fuel." << end1; 

return 0;
}

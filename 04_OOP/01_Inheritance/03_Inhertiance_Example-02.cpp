/* Write a C++ program that includes 
– A base class Vehicle with a public method drive that prints "Vehicle is 
driving.“
– Then, create a derived class Car that inherits from Vehicle and adds a 
public method honk that prints "Car is honking." 
– In the main function, create an object of the Car class and call both the 
drive and honk methods. */

#include <iostream>
using namespace std;
class Vehicle { // Base class
public:
 void drive() {
 cout << "Vehicle is driving." << endl;
 }};
class Car : public Vehicle { // Derived class
public:
 void honk() {
 cout << "Car is honking." << endl;
 }};
int main() {
 // Create a Car object
 Car alto;
 // Call the drive method from the base class
 alto.drive(); // Vehicle is driving
 // Call the honk method from the derived class
 alto.honk(); // Car is honking
 return 0;
}
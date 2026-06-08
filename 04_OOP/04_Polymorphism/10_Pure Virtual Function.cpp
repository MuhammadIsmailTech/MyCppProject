#include <iostream>
using namespace std; 
class OOP // Abstract base class
{ 
public: 
virtual void show() = 0; // Pure virtual function, making this class abstract
}; 
class pureVF : public OOP // Derived class that inherits from OOP
{ 
public: 
// Overriding the pure virtual function
void show() { 
cout << "pureVF class is derived from the OOP class." << endl; 
} }; 
int main() { 
OOP* ptr; // Pointer to base class
pureVF obj; // Object of derived class
ptr = &obj; // Pointer points to the derived class object
ptr->show(); // Call the overridden function using the base class pointer
return 0; 
}
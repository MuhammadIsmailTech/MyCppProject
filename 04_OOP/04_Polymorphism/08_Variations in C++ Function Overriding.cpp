#include <iostream>
using namespace std;
class OOP { 
public:
void print() { //overridden function
cout << "Welcome to OOP" << endl;
} };
class func_Overriding : public OOP
{
public:
void print() { //overriding function
cout << "Welcome to Function Overriding" << endl;
OOP::print(); // call overridden function
} };
int main() {
func_Overriding lecture1;
// Call the print() function of the func_Overriding class
lecture1.print();
return 0;
}
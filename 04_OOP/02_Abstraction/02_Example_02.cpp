#include <iostream>
using namespace std;
class Vehicle {
private:
 void piston() {
 cout << "4 piston\n";
 }
 void manWhoMade() {
 cout << "Markus Librette\n";
 }
public:
 void company() {
 cout << "TOYOTA\n";
 }
 void model() {
 cout << "ALTIS\n";
 }
 void color() {
 cout << "Red/WHITE/Silver\n";
 }
 void cost() {
 cout << "Rs. 4 to 6 Million\n";
 }
void oil()
 {
 cout << "Petrol\n";
 } };
int main() {
// Create an object of the Vehicle class
 Vehicle obj;
// Call all public methods of the 
Vehicle class
 obj.company();
 obj.model();
 obj.color();
 obj.cost();
 obj.oil();
 return 0;
}
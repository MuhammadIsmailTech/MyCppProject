#include <iostream>
using namespace std;
class Base {
public:
 int publicVar;
protected:
 int protectedVar;
private:
 int privateVar;
public:
 Base() : publicVar(1), protectedVar(2), privateVar(3) //constructor
{}
};
class DerivedPublic : public Base {
public:
 void show() {
 cout << "Public var: " << publicVar << endl; // Accessible
 cout << "Protected var: " << protectedVar << endl; // Accessible
 // cout << "Private var: " << privateVar << endl; // Not Accessible
 } };

 int main() {
 DerivedPublic obj;
 obj.show();
 cout << "Accessing public var: " << obj.publicVar << endl; // Accessible
 // cout << "Accessing protected var: " << obj.protectedVar << endl; // Not Accessible
 return 0;
}
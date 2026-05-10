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
 Base() : publicVar(1), protectedVar(2), privateVar(3) {}
};
class DerivedProtected : protected Base {
public:
 void show() {
 cout << "Public var: " << publicVar << endl; // Accessible as protected
 cout << "Protected var: " << protectedVar << endl; // Accessible as 
protected
 // cout << "Private var: " << privateVar << endl; // Not Accessible
 }};

 int main() {
 DerivedProtected obj;
 obj.show();
 // cout << "Accessing public var: " << obj.publicVar << endl; // Not 
Accessible
 return 0;
}
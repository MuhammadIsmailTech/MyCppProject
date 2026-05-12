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
class DerivedPrivate : private Base {
public:
 void show() {
 cout << "Public var: " << publicVar << endl; // Accessible as private
 cout << "Protected var: " << protectedVar << endl; // Accessible as 
private
 // cout << "Private var: " << privateVar << endl; // Not Accessible
 }};

int main() {
 DerivedPrivate obj;
 obj.show();
// cout << "Accessing public var: " << obj.publicVar << endl; // Not 
Accessible
// cout << "Accessing protected var: " << obj.protectedVar << endl; // 
Not Accessible
// cout << "Accessing private var: " << obj.privateVar << endl; // Not 
Accessible 
return 0;
}
#include <iostream>
using namespace std;
class OOP
{
public:
virtual void print() {
cout << "Welcome to OOP" << endl;
}
void show() {
cout << "This is the base class" << endl;
} };
class v_Function : public OOP
{
public:
void print() {
cout << "Welcome to virtualFunction" << endl;
}
void show() {
cout << "This is the derived class" << endl;
} };

int main() {

v_Function lecture1;

// Pointer of the base class type that points to lecture1
OOP* ptr = &lecture1;

// Virtual function (binded at runtime)
ptr->print();

// Non-virtual function (binded at compile time)
ptr->show();

            return 0;
}
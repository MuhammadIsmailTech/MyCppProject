#include<iostream>
using namespace std;
class base
{
public:
virtual void print()
{
cout << "print base class" << endl;
} };
class derived: public base
{
public:
void print()
{
cout << "print derived class" << endl;
}};

int main()
{
//derive class object
derived d;
//Base class pointer
base *b = &d;
// virtual function, binded at 
runtime
b->print();
return 0;
}
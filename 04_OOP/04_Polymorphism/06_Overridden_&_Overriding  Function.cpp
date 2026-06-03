#include <iostream>
using namespace std;
class Base //base class
{
public:
 void display()
 {
 cout<<"I am parent class..."<<endl;
 } };
class Derived: public Base //derived class
{
public:
 void display()
 {
 cout<<"I am child class..."<<endl;
 } };
int main() {
 
 Derived B;
 B.display(); // derived class object

     return 0;
}
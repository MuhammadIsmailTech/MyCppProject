#include<iostream>
using namespace std;
class base { //base class
public:
 void output() { //simple method to print something
cout<<" Its Base Class: "<<endl;
 } };
class derived: public base //derived a class from class base.
{
 public:
 void output() { //overridden method
 cout<<" Its Derived Class: "<<endl;
 } };

main() {
 base parent; //object of type base
 derived child; //Object of type derived
 parent.output(); //1st method called
 cout<<endl;
 child.output(); //overridden method called
 
     return 0;
     }
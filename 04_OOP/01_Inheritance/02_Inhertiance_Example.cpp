/* Write a C++ program that includes 
 – A base class Animal with a public method eat that prints “Animal is 
 eating.“
– Then, create a derived class Dog that inherits from Animal and adds a 
 public method bark that prints “Dog is barking." 
– In the main function, create an object of the Dog class and call both the 
 eat and bark methods. */

#include <iostream>
using namespace std;
class Animal {
public:
 void eat() {
 cout << "Animal is eating." << endl;
 } };
class Dog : public Animal {
public:
 void bark() {
 cout << "Dog is barking." << endl;
 } };
int main() {
 Dog dog;
 dog.eat(); // Animal is eating
 dog.bark(); // Dog is barking
 return 0;
}
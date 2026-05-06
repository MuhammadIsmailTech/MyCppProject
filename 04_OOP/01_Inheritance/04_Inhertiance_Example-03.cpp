#include <iostream>
#include <string>
using namespace std;
class Animal //Base Class
{ 
public:
 string species;
 void eat() 
{
 cout << species << " is eating." << endl;
 }};
class Dog : public Animal //derived class
{ 
public:
 string breed;
 string name;
 void bark() {
 cout << name << " the " << breed << " is barking." << endl;
 }};

 int main() {
 Dog dog;
 dog.species = "Dog";
 dog.breed = "Husky";
 dog.name = "Max";
 dog.eat(); // Dog is eating
 dog.bark(); // Max the Husky is barking
 return 0;
}
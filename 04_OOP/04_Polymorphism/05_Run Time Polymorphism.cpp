#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived Class 1
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

// Derived Class 2
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

int main()
{
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->sound();

    animalPtr = &cat;
    animalPtr->sound();

    return 0;
}
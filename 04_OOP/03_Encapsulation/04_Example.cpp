#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string name, int age) {      // Constructor to initialize the person's name and age
    this->name = name;
    this->age = age;
    }
    void setName(string name) {  // Setter for the name
	this->name = name;      // Update the name with the new value
	}
	string getName() {        // Getter for the name
	return name;
	}
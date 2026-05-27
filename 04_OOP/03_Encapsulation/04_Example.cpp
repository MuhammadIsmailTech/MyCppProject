#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string name, int age) {      // Constructor to initialize the person's name and age
    this-> name = name;
    this-> age = age;
    }
    void setName(string name) {  // Setter for the name
	this-> name = name;      // Update the name with the new value
	}
	string getName() {        // Getter for the name
	return name;
	}
      void setAge(int age) {     // Setter for the age
    this-> age = age;       //Update the name with the new value
    }
    int getAge() {          //Getter for the age
    return age;
    } };
int main() {

// Create a Person object with initial name and age 
Person person("Umar Farooq", 30);

// Display the initial name and age 

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

// Update the person's name and age

person.setName("Usman Ghani");
person.setAge(32);
// Display the updated name and age
cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

return 0;

}
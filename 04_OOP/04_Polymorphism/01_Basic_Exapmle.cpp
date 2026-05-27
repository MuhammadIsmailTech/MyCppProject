#include <iostream>
using namespace std;
class Shape { // Base class
protected:
 int width, height;
public:
 Shape(int a = 0, int b = 0) : width(a), height(b) // Constructor
{}
 int area() // Default area function/method for base class
 { 
 cout << "Shape class area | Base Class | : ";
 return 0;
 }
};
// Derived class for Rectangle
class Rectangle : public Shape {
public:
 Rectangle(int a = 0, int b = 0) : Shape(a, b) // Constructor
 {} 
 int area(int w, int h) { // Overloaded area method for Rectangle
 cout << "Rectangle class area | Derived Class | : ";
 return w * h;
 }};
// Derived class for Triangle
class Triangle : public Shape {
public:
 Triangle(int a = 0, int b = 0) : Shape(a, b) // Constructor
 {}
 int area(int w, int h) { // Overloaded area method for Triangle
 cout << "Triangle class area | Derived Class | : ";
 return (w * h) / 2;
 }};
 int main() 
{
 Shape shape; // Shape object
 Rectangle rec(10, 7); // Rectangle object
 Triangle tri(10, 5); // Triangle object
 cout << shape.area() << endl; // Call base class area method
 cout << rec.area(10, 7) << endl; // Call Rectangle's overloaded area method
 cout << tri.area(10, 5) << endl; // Call Triangle's overloaded area method
 return 0;
}
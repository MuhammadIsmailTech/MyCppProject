#include <iostream>
using namespace std;

void cube(int &x) // Function taking reference variable
{
x = x * x * x; // Cube the value of x
}

int main()
{

int y = 2; // Declare and initialize y
cout << y << endl; // Print the initial value of y, which is 2
cube(y); // Call the function cube, passing y by reference
cout << y << endl; // Print the modified value of y, which should now be 8

      return 0; // End the program
}
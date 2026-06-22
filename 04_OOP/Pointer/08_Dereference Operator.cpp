#include <iostream>
using namespace std;
int main() 
{
int num = 10; // Define an integer variable
int *ptr; // Declare a pointer variable
ptr = &num; // Store the address of 'num' variable in 'ptr'
// Accessing the value using the pointer
cout << "Value of num: " << *ptr << endl;
// Changing the value using the pointer
*ptr = 20;
cout << "New value of num: " << num << endl;
return 0;
}
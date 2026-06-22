#include <iostream>
using namespace std;
int main() 
{
// Declare variables of different data types
int intValue = 5;
double doubleValue = 3.14;
char charValue = 'A';
// Declare a void pointer
void* ptr;
// Point the void pointer to different variables
ptr = &intValue; // Pointing to an integer variable
cout << "Value of intValue: " << *((int*)ptr) << endl;
ptr = &doubleValue; // Pointing to a double variable
cout << "Value of doubleValue: " << *((double*)ptr) << endl;
ptr = &charValue; // Pointing to a char variable
cout << "Value of charValue: " << *((char*)ptr) << endl;
return 0;
}
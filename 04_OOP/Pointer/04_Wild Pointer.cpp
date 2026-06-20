#include <iostream>
using namespace std;
int main() {
int* ptr; // Declaring a pointer variable without initializing it
// Accessing the value of a wild pointer will lead to undefined behavior
// Since ptr is not initialized, it could point to any memory address
// Attempting to access the value pointed to by the wild pointer
cout << "Value pointed by ptr: " << *ptr << endl;
return 0;
}
#include <iostream>
using namespace std;
int main() {
int x = 10; // A regular variable
int *ptr1 = &x; // Pointer to x
int **ptr2 = &ptr1; // Pointer to ptr1 (double pointer)
cout << "Value of x: " << x << endl;
cout << "Value of x using ptr1: " << *ptr1 << endl;
cout << "Value of x using ptr2: " << **ptr2 << endl;
return 0;
}
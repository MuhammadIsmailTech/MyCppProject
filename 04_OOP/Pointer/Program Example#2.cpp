#include <iostream>
using namespace std;
int main() {
int num = 10; // Declare and initialize num
// Creating a reference for 'num'
int &ref = num;
// Print the memory address of num
cout << "Memory address of num: " << &num << endl;
// Print the value of num using reference
cout << "Value of num using reference: " << ref << endl;
return 0;
}
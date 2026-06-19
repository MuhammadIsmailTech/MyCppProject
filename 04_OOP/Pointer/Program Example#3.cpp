#include <iostream>
using namespace std;
int main() {
// Variable declarations
int num = 10;
float fnum = 3.14;
char ch = 'A';
double dnum = 2.71828;
bool isTrue = true;
long int lnum = 1234567890;
// Displaying addresses of variables
cout << "Address of num: " << &num << endl;
cout << "Address of fnum: " << &fnum << endl;
cout << "Address of ch: " << static_cast<void*>(&ch) << endl; // Cast to void pointer for char
cout << "Address of dnum: " << &dnum << endl;
cout << "Address of isTrue: " << &isTrue << endl;
cout << "Address of lnum: " << &lnum << endl; 
// Pointers initialization
int *ptrToInt = &num;
float *ptrToFloat = &fnum;
char *ptrToChar = &ch;
double *ptrToDouble = &dnum;
bool *ptrToBool = &isTrue;
long int *ptrToLongInt = &lnum;
// Printing values using pointers
cout << "\nInteger value: " << *ptrToInt << endl;
cout << "Float value: " << *ptrToFloat << endl;
cout << "Character value: " << *ptrToChar << endl;
cout << "Double value: " << *ptrToDouble << endl;
cout << "Boolean value: " << *ptrToBool << endl;
cout << "Long Integer value: " << *ptrToLongInt << endl;
return 0;
}
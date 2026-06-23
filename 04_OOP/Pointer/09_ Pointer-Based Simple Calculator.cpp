#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables
    int num1 = 20;
    float num2 = 5.5;
    double num3 = 2.0;

    // Step 2: Declare pointers and store addresses
    int *ptrInt = &num1;
    float *ptrFloat = &num2;
    double *ptrDouble = &num3;

    // Step 3: Perform arithmetic operations using pointers

    cout << "Using int and float variables:\n";
    cout << "Addition: " << (*ptrInt + *ptrFloat) << endl;
    cout << "Subtraction: " << (*ptrInt - *ptrFloat) << endl;
    cout << "Multiplication: " << (*ptrInt * *ptrFloat) << endl;
    cout << "Division: " << (*ptrInt / *ptrFloat) << endl;

    cout << "\nUsing float and double variables:\n";
    cout << "Addition: " << (*ptrFloat + *ptrDouble) << endl;
    cout << "Subtraction: " << (*ptrFloat - *ptrDouble) << endl;
    cout << "Multiplication: " << (*ptrFloat * *ptrDouble) << endl;
    cout << "Division: " << (*ptrFloat / *ptrDouble) << endl;

    return 0;
}
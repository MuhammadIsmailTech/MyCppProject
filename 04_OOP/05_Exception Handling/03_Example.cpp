#include <iostream>
using namespace std;

int main() 
{
    int num1 = 10, num2 = 0;

    try {
        if (num2 == 0)
            throw "Cannot divide by zero";  // Throwing a string literal
        cout << "Result: " << num1 / num2 << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;  // Catching and printing the error
    }

    return 0;
}
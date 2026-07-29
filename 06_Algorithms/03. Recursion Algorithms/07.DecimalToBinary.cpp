#include <iostream>
using namespace std;

// Recursive function to convert decimal to binary
void decimalToBinary(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Recursive Call
    decimalToBinary(n / 2);

    // Print remainder
    cout << n % 2;
}

int main()
{
    int number;

    cout << "Enter a decimal number: ";
    cin >> number;

    if (number == 0)
    {
        cout << "Binary = 0";
        return 0;
    }

    cout << "Binary = ";
    decimalToBinary(number);

    return 0;
}
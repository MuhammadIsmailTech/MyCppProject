#include <iostream>
using namespace std;

// Recursive function to calculate power
int power(int base, int exponent)
{
    // Base Case
    if (exponent == 0)
        return 1;

    // Recursive Case
    return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << base << "^" << exponent
         << " = " << power(base, exponent);

    return 0;
}
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n)
{
    // Base Case
    if (n == 0 || n == 1)
        return 1;

    // Recursive Case
    return n * factorial(n - 1);
}

int main()
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "Factorial of " << number << " = " << factorial(number);

    return 0;
}
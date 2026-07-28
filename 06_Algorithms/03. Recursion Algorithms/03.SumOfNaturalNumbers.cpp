#include <iostream>
using namespace std;

// Recursive function to calculate sum
int sum(int n)
{
    // Base Case
    if (n == 1)
        return 1;

    // Recursive Case
    return n + sum(n - 1);
}

int main()
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "Sum of first " << number
         << " natural numbers = " << sum(number);

    return 0;
}
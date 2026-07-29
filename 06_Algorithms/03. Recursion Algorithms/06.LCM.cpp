#include <iostream>
using namespace std;

// Recursive function to find GCD
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

// Function to find LCM
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "LCM of " << num1 << " and " << num2
         << " = " << lcm(num1, num2);

    return 0;
}
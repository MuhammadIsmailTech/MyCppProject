#include <iostream>
using namespace std;

// Recursive function to find Fibonacci number
int fibonacci(int n)
{
    // Base Cases
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // Recursive Case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int terms;

    cout << "Enter the number of terms: ";
    cin >> terms;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < terms; i++)
        cout << fibonacci(i) << " ";

    return 0;
}
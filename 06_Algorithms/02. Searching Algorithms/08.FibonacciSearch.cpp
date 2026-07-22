#include <iostream>
using namespace std;

// Fibonacci Search Function
int fibonacciSearch(int arr[], int size, int key)
{
    int fib2 = 0;
    int fib1 = 1;
    int fib = fib1 + fib2;

    while (fib < size)
    {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }

    int offset = -1;

    while (fib > 1)
    {
        int i = min(offset + fib2, size - 1);

        if (arr[i] < key)
        {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if (arr[i] > key)
        {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else
        {
            return i;
        }
    }

    if (fib1 && arr[offset + 1] == key)
        return offset + 1;

    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Sorted Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter element to search: ";
    cin >> key;

    int result = fibonacciSearch(arr, size, key);

    if (result != -1)
        cout << "\nElement found at index " << result;
    else
        cout << "\nElement not found.";

    return 0;
}
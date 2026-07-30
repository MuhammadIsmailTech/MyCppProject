#include <iostream>
using namespace std;

// Recursive function to reverse array
void reverseArray(int arr[], int start, int end)
{
    // Base Case
    if (start >= end)
        return;

    // Swap elements
    swap(arr[start], arr[end]);

    // Recursive Call
    reverseArray(arr, start + 1, end - 1);
}

// Print Array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    reverseArray(arr, 0, size - 1);

    cout << "Reversed Array: ";
    printArray(arr, size);

    return 0;
}
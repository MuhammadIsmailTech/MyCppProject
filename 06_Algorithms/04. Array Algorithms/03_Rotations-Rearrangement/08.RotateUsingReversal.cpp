#include <iostream>
using namespace std;

// Function to reverse part of an array
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

// Function to left rotate using reversal algorithm
void leftRotate(int arr[], int size, int k)
{
    k = k % size;

    // Reverse first k elements
    reverseArray(arr, 0, k - 1);

    // Reverse remaining elements
    reverseArray(arr, k, size - 1);

    // Reverse complete array
    reverseArray(arr, 0, size - 1);
}

// Function to print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k;

    cout << "Original Array: ";
    printArray(arr, size);

    cout << "Enter rotation positions: ";
    cin >> k;

    leftRotate(arr, size, k);

    cout << "After Left Rotation: ";
    printArray(arr, size);

    return 0;
}
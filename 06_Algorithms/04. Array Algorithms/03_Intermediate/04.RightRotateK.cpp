#include <iostream>
using namespace std;

// Function to right rotate array by one position
void rightRotateOne(int arr[], int size)
{
    int last = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}

// Function to right rotate by K positions
void rightRotateK(int arr[], int size, int k)
{
    k = k % size;

    for (int i = 0; i < k; i++)
    {
        rightRotateOne(arr, size);
    }
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
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k;

    cout << "Original Array: ";
    printArray(arr, size);

    cout << "Enter number of positions to rotate right: ";
    cin >> k;

    rightRotateK(arr, size, k);

    cout << "After Right Rotation: ";
    printArray(arr, size);

    return 0;
}
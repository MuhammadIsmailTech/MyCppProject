#include <iostream>
using namespace std;

// Function to left rotate array by one position
void leftRotate(int arr[], int size)
{
    int first = arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = first;
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

    cout << "Original Array: ";
    printArray(arr, size);

    leftRotate(arr, size);

    cout << "After Left Rotation: ";
    printArray(arr, size);

    return 0;
}
#include <iostream>
using namespace std;

// Function to right rotate array by one position
void rightRotate(int arr[], int size)
{
    int last = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
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

    rightRotate(arr, size);

    cout << "After Right Rotation: ";
    printArray(arr, size);

    return 0;
}
#include <iostream>
using namespace std;

// Function to check if array is sorted
bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
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

    cout << "Array: ";
    printArray(arr, size);

    if (isSorted(arr, size))
        cout << "Array is sorted in ascending order.";
    else
        cout << "Array is not sorted.";

    return 0;
}
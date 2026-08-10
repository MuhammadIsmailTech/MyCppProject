#include <iostream>
using namespace std;

// Function to move negative numbers to beginning
void moveNegative(int arr[], int size)
{
    int position = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[position]);
            position++;
        }
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
    int arr[] = {10, -5, 7, -3, 8, -2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    moveNegative(arr, size);

    cout << "After Moving Negative Numbers: ";
    printArray(arr, size);

    return 0;
}
#include <iostream>
using namespace std;

// Function to move all zeroes to the end
void moveZeroes(int arr[], int size)
{
    int position = 0;

    // Move non-zero elements forward
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[position] = arr[i];
            position++;
        }
    }

    // Fill remaining positions with zero
    while (position < size)
    {
        arr[position] = 0;
        position++;
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
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    moveZeroes(arr, size);

    cout << "After Moving Zeroes: ";
    printArray(arr, size);

    return 0;
}
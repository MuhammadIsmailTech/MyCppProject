#include <iostream>
using namespace std;

// Counting Sort function
void countingSort(int arr[], int size)
{
    int max = arr[0];

    // Find maximum element
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int count[max + 1] = {0};
    int output[size];

    // Count occurrences
    for (int i = 0; i < size; i++)
        count[arr[i]]++;

    // Rebuild sorted array
    int index = 0;

    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            output[index] = i;
            index++;
            count[i]--;
        }
    }

    // Copy back to original array
    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

// Print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    countingSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}
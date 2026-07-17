#include <iostream>
using namespace std;

// Function to get maximum value
int getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Counting Sort according to digit
void countingSort(int arr[], int size, int place)
{
    int output[size];
    int count[10] = {0};

    // Count occurrences
    for (int i = 0; i < size; i++)
        count[(arr[i] / place) % 10]++;

    // Cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    // Copy back
    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

// Radix Sort
void radixSort(int arr[], int size)
{
    int max = getMax(arr, size);

    for (int place = 1; max / place > 0; place *= 10)
        countingSort(arr, size, place);
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
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    radixSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}
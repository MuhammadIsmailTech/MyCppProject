#include <iostream>
using namespace std;

// Heapify function
void heapify(int arr[], int size, int root)
{
    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != root)
    {
        swap(arr[root], arr[largest]);
        heapify(arr, size, largest);
    }
}

// Heap Sort function
void heapSort(int arr[], int size)
{
    // Build max heap
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    // Extract elements from heap
    for (int i = size - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
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
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    heapSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}
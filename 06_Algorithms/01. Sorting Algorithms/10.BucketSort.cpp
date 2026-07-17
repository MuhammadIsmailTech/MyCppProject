#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Bucket Sort
void bucketSort(float arr[], int size)
{
    vector<float> buckets[size];

    // Put elements into buckets
    for (int i = 0; i < size; i++)
    {
        int index = size * arr[i];
        buckets[index].push_back(arr[i]);
    }

    // Sort each bucket
    for (int i = 0; i < size; i++)
        sort(buckets[i].begin(), buckets[i].end());

    // Merge buckets
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        for (float value : buckets[i])
            arr[k++] = value;
    }
}

// Print array
void printArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    bucketSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}
#include <iostream>
using namespace std;

// Recursive Ternary Search
int ternarySearch(int arr[], int left, int right, int key)
{
    if (right >= left)
    {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key)
            return mid1;

        if (arr[mid2] == key)
            return mid2;

        if (key < arr[mid1])
            return ternarySearch(arr, left, mid1 - 1, key);

        else if (key > arr[mid2])
            return ternarySearch(arr, mid2 + 1, right, key);

        else
            return ternarySearch(arr, mid1 + 1, mid2 - 1, key);
    }

    return -1;
}

int main()
{
    int arr[] = {5,10,15,20,25,30,35,40,45,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Sorted Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter element to search: ";
    cin >> key;

    int result = ternarySearch(arr, 0, size - 1, key);

    if (result != -1)
        cout << "\nElement found at index " << result;
    else
        cout << "\nElement not found.";

    return 0;
}
#include <iostream>
using namespace std;

// Recursive Linear Search Function
int recursiveLinearSearch(int arr[], int size, int key, int index)
{
    if (index == size)
        return -1;

    if (arr[index] == key)
        return index;

    return recursiveLinearSearch(arr, size, key, index + 1);
}

// Main Function
int main()
{
    int arr[] = {12, 45, 23, 67, 34, 89, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter the element to search: ";
    cin >> key;

    int result = recursiveLinearSearch(arr, size, key, 0);

    if (result != -1)
        cout << "\nElement found at index " << result << endl;
    else
        cout << "\nElement not found." << endl;

    return 0;
}
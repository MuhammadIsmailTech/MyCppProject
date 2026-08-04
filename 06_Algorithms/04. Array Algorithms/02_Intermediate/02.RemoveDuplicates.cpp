#include <iostream>
using namespace std;

// Function to remove duplicates
int removeDuplicates(int arr[], int size)
{
    if (size == 0)
        return 0;

    int j = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}

int main()
{
    int arr[] = {10, 10, 20, 20, 30, 40, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, size);

    cout << "Array after removing duplicates:\n";

    for (int i = 0; i < newSize; i++)
        cout << arr[i] << " ";

    return 0;
}
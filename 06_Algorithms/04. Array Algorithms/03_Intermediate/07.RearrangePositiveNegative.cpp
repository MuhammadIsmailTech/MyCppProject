#include <iostream>
using namespace std;

// Function to rearrange positive and negative numbers
void rearrange(int arr[], int size)
{
    int positive = 0;
    int negative = 1;

    while (positive < size && negative < size)
    {
        // Find positive number at an even position
        while (positive < size && arr[positive] >= 0)
            positive += 2;

        // Find negative number at an odd position
        while (negative < size && arr[negative] < 0)
            negative += 2;

        // Swap misplaced elements
        if (positive < size && negative < size)
        {
            swap(arr[positive], arr[negative]);

            positive += 2;
            negative += 2;
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
    int arr[] = {1, 2, -3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    rearrange(arr, size);

    cout << "Rearranged Array: ";
    printArray(arr, size);

    return 0;
}
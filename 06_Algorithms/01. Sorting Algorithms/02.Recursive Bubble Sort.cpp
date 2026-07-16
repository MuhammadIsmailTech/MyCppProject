#include <iostream>
using namespace std;
// Recursive Bubble Sort function
void RecursiveBubble(int arr[], int n)
{
    // Base case: if array size is 1, stop
    if (n == 1)
        return;

    // One pass of bubble sort – pushes the largest element to the end
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // Swap adjacent elements
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
     // Call the function again for the remaining array (n-1)
    RecursiveBubble (arr, n - 1);
}

// Function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()   {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    RecursiveBubble (arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
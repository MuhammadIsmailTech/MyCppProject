#include <iostream>
#include <climits>
using namespace std;

// Function to find second largest element
int secondLargest(int arr[], int size)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int arr[] = {25, 10, 45, 78, 12, 90, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nSecond Largest Element = "
         << secondLargest(arr, size);

    return 0;
}
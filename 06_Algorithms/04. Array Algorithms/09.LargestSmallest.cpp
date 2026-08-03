#include <iostream>
using namespace std;

// Function to find largest and smallest element
void findLargestSmallest(int arr[], int size)
{
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Largest Element = " << largest << endl;
    cout << "Smallest Element = " << smallest << endl;
}

int main()
{
    int arr[] = {25, 10, 45, 78, 12, 90, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\n";

    findLargestSmallest(arr, size);

    return 0;
}
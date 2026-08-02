#include <iostream>
using namespace std;

// Function to copy array
void copyArray(int source[], int destination[], int size)
{
    for (int i = 0; i < size; i++)
    {
        destination[i] = source[i];
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
    int source[] = {5, 10, 15, 20, 25};
    int size = sizeof(source) / sizeof(source[0]);
    int destination[5];

    copyArray(source, destination, size);

    cout << "Source Array: ";
    printArray(source, size);

    cout << "Copied Array: ";
    printArray(destination, size);

    return 0;
}
#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int size)
{
    int candidate = arr[0];
    int count = 1;

    // Find possible candidate
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;

            if (count == 0)
            {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    // Verify candidate
    count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == candidate)
            count++;
    }

    if (count > size / 2)
        return candidate;

    return -1;
}

int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findMajorityElement(arr, size);

    if (result != -1)
        cout << "Majority Element = " << result;
    else
        cout << "No Majority Element";

    return 0;
}
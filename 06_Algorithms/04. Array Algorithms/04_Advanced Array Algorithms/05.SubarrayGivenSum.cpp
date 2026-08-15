#include <iostream>
using namespace std;

void findSubarray(int arr[], int size, int target)
{
    int currentSum = 0;
    int start = 0;

    for (int end = 0; end < size; end++)
    {
        currentSum += arr[end];

        while (currentSum > target && start <= end)
        {
            currentSum -= arr[start];
            start++;
        }

        if (currentSum == target)
        {
            cout << "Subarray found from index "
                 << start << " to " << end << endl;

            cout << "Elements: ";

            for (int i = start; i <= end; i++)
                cout << arr[i] << " ";

            cout << endl;

            return;
        }
    }

    cout << "No subarray found.";
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 33;

    findSubarray(arr, size, target);

    return 0;
}
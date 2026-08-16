#include <iostream>
#include <algorithm>
using namespace std;

void threeSum(int arr[], int size, int target)
{
    sort(arr, arr + size);

    for (int i = 0; i < size - 2; i++)
    {
        int left = i + 1;
        int right = size - 1;

        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target)
            {
                cout << "Triplet found: "
                     << arr[i] << " + "
                     << arr[left] << " + "
                     << arr[right]
                     << " = " << target << endl;

                return;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    cout << "No triplet found.";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 9;

    threeSum(arr, size, target);

    return 0;
}
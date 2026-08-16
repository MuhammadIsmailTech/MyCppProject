#include <iostream>
#include <unordered_map>
using namespace std;

void twoSum(int arr[], int size, int target)
{
    unordered_map<int, int> seen;

    for (int i = 0; i < size; i++)
    {
        int needed = target - arr[i];

        if (seen.find(needed) != seen.end())
        {
            cout << "Pair found: "
                 << needed << " + " << arr[i]
                 << " = " << target << endl;

            cout << "Indices: "
                 << seen[needed] << " " << i << endl;

            return;
        }

        seen[arr[i]] = i;
    }

    cout << "No pair found.";
}

int main()
{
    int arr[] = {2, 7, 11, 15};

    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 9;

    twoSum(arr, size, target);

    return 0;
}
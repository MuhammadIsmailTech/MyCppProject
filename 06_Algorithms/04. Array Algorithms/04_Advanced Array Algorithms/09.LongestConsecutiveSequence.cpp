#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestConsecutive(int arr[], int size)
{
    unordered_set<int> numbers;

    for (int i = 0; i < size; i++)
    {
        numbers.insert(arr[i]);
    }

    int longest = 0;

    for (int i = 0; i < size; i++)
    {
        int current = arr[i];

        // Check if this is the beginning
        // of a consecutive sequence
        if (numbers.find(current - 1) == numbers.end())
        {
            int length = 1;

            while (numbers.find(current + length) != numbers.end())
            {
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
}

int main()
{
    int arr[] = {100, 4, 200, 1, 3, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Longest Consecutive Sequence Length = "
         << longestConsecutive(arr, size);

    return 0;
}
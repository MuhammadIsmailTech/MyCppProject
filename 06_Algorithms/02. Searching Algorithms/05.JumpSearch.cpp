#include <iostream>
#include <cmath>
using namespace std;

// Jump Search Function
int jumpSearch(int arr[], int size, int key)
{
    int step = sqrt(size);
    int prev = 0;

    while (arr[min(step, size) - 1] < key)
    {
        prev = step;
        step += sqrt(size);

        if (prev >= size)
            return -1;
    }

    while (arr[prev] < key)
    {
        prev++;

        if (prev == min(step, size))
            return -1;
    }

    if (arr[prev] == key)
        return prev;

    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Sorted Array: ";

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    cout<<"\n\nEnter element to search: ";
    cin>>key;

    int result = jumpSearch(arr,size,key);

    if(result!=-1)
        cout<<"\nElement found at index "<<result;
    else
        cout<<"\nElement not found.";

    return 0;
}
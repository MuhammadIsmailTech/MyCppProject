#include <iostream>
using namespace std;

// Interpolation Search Function
int interpolationSearch(int arr[], int low, int high, int key)
{
    while (low <= high && key >= arr[low] && key <= arr[high])
    {
        if (low == high)
        {
            if (arr[low] == key)
                return low;

            return -1;
        }

        int pos = low + (((double)(high - low) /
                (arr[high] - arr[low])) * (key - arr[low]));

        if (arr[pos] == key)
            return pos;

        if (arr[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;

    cout<<"Sorted Array: ";

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    cout<<"\n\nEnter element to search: ";
    cin>>key;

    int result = interpolationSearch(arr,0,size-1,key);

    if(result!=-1)
        cout<<"\nElement found at index "<<result;
    else
        cout<<"\nElement not found.";

    return 0;
}
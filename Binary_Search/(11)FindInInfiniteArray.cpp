// AVP
// Find Element in Infinite Sorted Array
//
#include <bits/stdc++.h>
using namespace std;
int InfiniteArray(int arr[], int n, int x)
{
    int low = 0;
    int high = 1;
    while (x > arr[high])
    {
        low = high;
        high = high * 2;
    }

    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == x)
            return mid;

        if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return -1;
}
int main()
{

    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << InfiniteArray(arr, n, x);

    return 0;
}
// AVP
// Count the no of Occurence of Element in Sorted Array of
// Approach 1 :- Using Linear Search

// Approach 2 :- Find the 1st and last occurence of Element and then minus it 
#include <bits/stdc++.h>
using namespace std;
int getFirstOccurence(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int res = -1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == x)
        {
            res = mid;
            high = mid - 1;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return res;
}
int getLastOccurence(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int res = -1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == x)
        {
            res = mid;
            low = mid + 1;
        }
        else if (x <= arr[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return res;
}

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int FirstOccurence = getFirstOccurence(arr, n, x);
    int LastOccurence = getLastOccurence(arr, n, x);
    int result = 0;

    if (FirstOccurence != -1 and LastOccurence != -1)
    {
        result = LastOccurence - FirstOccurence + 1;
        cout << result << endl;
    }

    else
    {
        result = -1;
        cout << result << endl;
    }

    return 0;
}
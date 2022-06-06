// AVP
// Find the First and Last Occurence of the Given ELement

// Naive Approach 
// Using Linear Search

// Efficient Approach
// First Find the any Occurence of Element and then 

// For 1st Occurence Reduce the Search Space Left Side of the Array
// i.e  high = mid - 1

// For last Occurence Reduce the Search Space RIght Side of the Array
// i.e  low = mid + 1

// Time Complexcity :- O(log(n))

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

    cout << getFirstOccurence(arr, n, x) << endl;
    cout << getLastOccurence(arr, n, x) << endl;

    return 0;
}


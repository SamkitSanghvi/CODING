// An unsorted Array will be given in the input
// An in Output You have to return the index of the Peak Element
// Peak Element :- The Element which is greater than its adjacent Element
#include <bits/stdc++.h>
using namespace std;
int PeakElement(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (mid > 0 and mid < n - 1)
        {
            if (arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1])
            {
                return mid;
            }
            else if ((arr[mid - 1]) > arr[mid])
                high = mid - 1;

            else if ((arr[mid + 1]) > arr[mid])
                low = mid + 1;
        }

        else if (mid == 0)
        {
            if (arr[0] > arr[1])
                return 0;

            else
                return 1;
        }

        else if (mid == n - 1)
        {
            if (arr[n - 1] > arr[n - 2])
                return n - 1;

            else
                return n - 2;
        }
    }
}
int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << PeakElement(arr, n);

    return 0;
}
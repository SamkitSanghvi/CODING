// TUF
// Find the element that appear Once in Sorted ans rest other Element appear it twice

// Basic Approach
// Xor the whole array the final element retrun will be the Answer
// Xor with same element will give you zero
// Time Complexcity :- O(n)

// Upgraded Approach
// For E.g
// Array :-  [1,1,2,3,3,4,4,8,8]
// Indices :- 0,1,2,3,4,5,6,7,8
// As you Notice
// First occurence of the Repeated Element will be on the Even index
// Second Occurence of the Repeated Element will be on the Odd index
// The Non Repeating number will be on even index

// Xor of odd with 1 will give you previous Even number
// Xor of even with 1 will give you next odd number
// Time Complexcity :- O(Log(n))

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0;
    int high = n - 2;

    while (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == arr[mid ^ 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << arr[low];
    return 0;
}

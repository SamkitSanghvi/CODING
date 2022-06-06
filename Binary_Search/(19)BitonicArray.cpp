// AVP
// Find the Maximum Element in Bitonic Array of
// Bitonic Array:- Motonically Increasing --> and Then Motonically Decreasing arr[i] != arr[i+1] // 5 5 
// Motonically means always Increasing

// For E.g
// 1 3 8 12 4 2
#include<bits/stdc++.h>
using namespace std;
int getEle(int arr[],int n){
    int low = 0;
    int high = n-1;
    // int res = 0;
    while(low <= high){

        int mid = low + ((high-low)/2);

        if(arr[mid] > (arr[mid+1]) and arr[mid] > (arr[mid-n+1]%n))
        return mid;

        else if(arr[0] <= arr[mid])
        low = mid + 1;
        
        else if(arr[mid] >= arr[n-1])
        high = mid - 1;
    }
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int x = getEle(arr,n);
    cout<<arr[x];
    return 0;
}
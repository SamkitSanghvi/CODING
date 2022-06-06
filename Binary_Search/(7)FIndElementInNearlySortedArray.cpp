// AVP
// Find Element in Nearly Sorted Array of

// Nearly Sorted Array :- An element in an array Supposed to be at position i in completed sorted array but it can be on i-1,i,i+1, Position in Nearly sorted array....


#include<bits/stdc++.h>
using namespace std;
int NearlySortedArray(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    
    while(low<=high){
        int mid = low + ((high-low)/2);

        if(arr[mid]==x)
        return mid;

        if(arr[mid+1]==x and mid+1 < high)
        return mid+1; 

        if(arr[mid-1]==x and mid -1 > low)
        return mid - 1;

        if(x < arr[mid])
        high = mid-2;

        else
        low = mid+2;

    }

    return -1;
}
int main()
{

    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<NearlySortedArray(arr,n,x);

    return 0;
}
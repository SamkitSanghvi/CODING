// AVP
// Find the no of Time Sorted Array is Roated.. 
// For E.g 
//  [2,5,6,8,11,12,15,18] Original Array 

// Input:- [11,12,15,18,2,5,6,8] Roated Array 4 times 

// Find the Minimun number index 
// Minimum Number will always lies in Unsorted Array 
// Time Complexcity will be O(Log(n))


#include<bits/stdc++.h>
using namespace std;
int  NoofTimesArrayRoated(int arr[],int n){
    int low = 0;
    int high = n-1;
    // int res = 0;
    while(low <= high){

        int mid = low + ((high-low)/2);

        if(arr[mid] <= (arr[mid+1]%n) and arr[mid] <= (arr[mid-n+1]%n))
        return mid;

        else if(arr[0] <= arr[mid])
        low = mid + 1;
        
        else if(arr[mid] <= arr[n-1])
        high = mid - 1;
    }

    // return -1;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    if(arr[0] <= arr[n-1])
    cout<<"Array is Sorted "<<endl;

    else
    // cout<<" N :_"<<n<<endl;
    // cout<<NoofTimesArrayRoated(arr,n)<<endl;
    cout<<n-NoofTimesArrayRoated(arr,n)<<endl;


    return 0;
}
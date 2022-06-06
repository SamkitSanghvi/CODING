// AVP
// Find the element in the Sorted Roated Array 
// For e.g [4,5,6,7,0,1,2]
// Find 0
// Ansewer :- index 4

// Naive approach
// Linear Search :- Time Complexcity O(n)

// Upgraded approach
// Find the Minimum index and then we get the 2 sorted array and compare the key with the last element of the left sorted array(min - 1) and call function binarySearch
// Binary switch :- Time Complexcity O(Log(n))
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int x){
    while(low<=high){
        int mid = low + ((high - low)/2);

        if(arr[mid]==x)
        return mid;

        else if(x >= arr[mid])
        low = mid + 1;

        else
        high = mid - 1;
    }
    return -1;
}

int getMinElement(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    // If the array is Sorted....
    if(arr[0] <= arr[n-1])
        return arr[0];

    while(low <= high){
        int mid = low + ((high-low)/2);

        if(arr[mid]<=arr[(mid+1)%n] and arr[mid] <= arr[(mid+n-1)%n])
        return mid;

        else if(arr[0] <= arr[mid])
        low = mid + 1;

        else if(arr[mid] <= arr[n-1])
        high = mid - 1;
    }
}
int main(){

    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int min = getMinElement(arr,n,x);
    cout<<min<<endl;
    if(x <= arr[min-1])
    cout<<binarySearch(arr,min,n-1,x)<<endl;

    else
    cout<<binarySearch(arr,0,min,x)<<endl;
    

    return 0;
}
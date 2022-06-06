// AVP
// Find the Floor of the Element in the Sorted Array
// Floor :- Greatest Element Smaller than given number    

// First approach lower bound
// Second approach 
#include<bits/stdc++.h>
using namespace std;
int Floor(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    int res = 0;
    while(low <= high){
        int mid = low + ((high-low)/2);

        if(x==arr[mid])
        return arr[mid];

        if(x <= arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        if(arr[mid] < x)
        res = arr[mid];
    }

    return res;
}
int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<Floor(arr,n,x)<<endl;;
    
    // int ind = lower_bound(arr,arr+n,x)-arr;

    // if(ind >= 0 and arr[ind] <= x) cout<<arr[ind];


    return 0;
}
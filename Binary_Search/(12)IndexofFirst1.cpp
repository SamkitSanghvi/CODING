// AVP
// Find the Index of first 1 Infinite Binary Sorted Array
#include<bits/stdc++.h>
int GetFirst(int arr[],int n){
    int low = 0;
    int high = 1;
    int res = 0;
    while(1 >= arr[high])
    {
        low = high;
        high = high * 2;
    }

    while(low <= high ){
        int mid = low + ((high-low)/2);

        if(1 <= arr[mid]){
            res = mid;
            high = mid - 1;
        }
        else
        low = mid + 1;
    }
    return res;

}
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) 
    cin>>arr[i];

    cout<<lower_bound(arr,arr+n,1) - arr<<endl;
    cout<<GetFirst(arr,n)<<endl;
    return 0;
}
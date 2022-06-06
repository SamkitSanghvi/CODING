// KK
// Binary Search using Recursion

#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int l,int e,int x){

    if(l > e)
        return -1;
    int mid = l + (e-l)/2;
    if(arr[mid] == x)
        return mid;
    if(mid < x)
        return binary(arr,l,mid-1,x);
    return binary(arr,mid+1,e,x);
}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr,arr+n);
    cout<<binary(arr,0,n-1,x);

    return 0;
}
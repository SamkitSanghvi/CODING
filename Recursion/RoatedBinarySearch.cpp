// KK
// Roated Binary Search


#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int x,int l,int e){
    if(l > e)
        return -1;
    
    int mid = l + (e-l)/2;
    if(arr[mid] == x)
        return mid;
    if(arr[l] <= arr[mid])
    {
        if(x >= arr[l] and x<=arr[mid])
            return search(arr,x,l,mid-1);
        else
            return search(arr,x,mid+1,e);
    }

    if(x >= arr[mid] and x<=arr[e]){
        return search(arr,x,mid+1,e);
    }
}
int main(){ 

    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<search(arr,x,0,n-1); 

    return 0;
}
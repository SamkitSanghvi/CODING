// TUF
// Count Inversion in Subarray
// count number of Element such that a[i] and a[j] form an inversion if a[i] > a[j] and i < j
// Given an Array [8,4,2,1]
// (8,4),(8,2),(8,1)
// (4,2),(4,1)
// (2,1)

#include<bits/stdc++.h>
using namespace std;
int mergeSort(int arr[],int temp[],int l,int mid,int r){
    int i,j,k;
    int count = 0;

    i = l;
    j = mid;
    k = r;
    while((i<=mid-1) and (j<=r)){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else{
            temp[k++] = arr[j++];
            count += mid - i;
        }
        while(i <= mid - 1){
            temp[k++] = arr[i++];
        }
        while(j<=r)
            temp[k++] = arr[j++];
        
        for(i=l;i<=r;i++)
            arr[i] = temp[i];

        return count;

        
    }

}
int _merge(int arr[],int temp[],int l,int r){
    int mid , count = 0;
    if(l < r){
        mid = (l+r)/2;
        
        count +=_merge(arr,temp,l,mid);
        count +=_merge(arr,temp,mid+1,r);

        count += mergeSort(arr,temp,l,mid+1,r);
    }
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int temp[n];
    int ans = _merge(arr,temp,0,n-1);

    return 0;
}
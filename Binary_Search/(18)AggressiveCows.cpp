// TUF
// 
#include<bits/stdc++.h>
using namespace std;
bool isValid(int arr[],int n,int k,int mid){
    int count = 1;
    int coor = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] - coor >= mid){
            count++;
            coor = arr[i];
        }
        if(count == k)
        return true;
    }

    return false;
}

int LargestMin(int arr[],int n,int k){
    int start = 1;
    int end = arr[n-1] - arr[0];
    int res = -1;
    while(start<=end){
        int mid = start + ((end-start)/2);
        if(isValid(arr,n,k,mid)==true){
            res = mid;
            start = mid + 1;
        }
        else
        end = mid - 1;
    }
    return res;
}
int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<LargestMin(arr,n,k)<<endl;

    return 0;
}
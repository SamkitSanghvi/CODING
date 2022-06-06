// AVP
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int x,int flag){
    int low = 0;
    int high = n -1;
    if(flag == 0)
    {
        while(low <= high){
            int mid = low + ((high - low)/2);
            if(x==arr[mid])
            return mid;

            else if(x >=arr[mid])
            low = mid+1;

            else 
            high = mid-1;

        }
    }

    else{
        while(low <= high){
            int mid = low + ((high - low)/2);
            if(x==arr[mid])
            return mid;

            else if(x >=arr[mid])
            high = mid - 1;

            else 
            low = mid+1;

        }
    }

    return -1;
}
int main(){
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int flag = 0;

    if(arr[0] < arr[n-1])
    flag = 0;

    else
    flag = 1;

    cout<<BinarySearch(arr,n,x,flag)<<endl;

    

    return 0;
}
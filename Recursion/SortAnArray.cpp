// Sort an Array Using Recursion

#include<bits/stdc++.h>
using namespace std;
bool soort(int arr[],int i,int n){
    if(i==n-1)
        return true;
    return arr[i] < arr[i+1] && soort(arr,i+1,n);
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    
    cout<<soort(arr,0,n);

    return 0;
}
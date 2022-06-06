// KK
// Find unique number in Array
// Given an array in that all number appear twice except 1 number find that number.

// Brute Force
// Sort and check O(nlogn)

// XOR
// O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans = 0;
    for(int i=0;i<n;i++)
        ans = ans^arr[i] ;
    
    cout<<ans<<endl;


    return 0;
}
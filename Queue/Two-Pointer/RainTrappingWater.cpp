// TUF
// Rain Trapping Water
// Given an array of Differnt heights
// Return total water can be stored between the buildings

// Brute Force
// Using two loops find the Maximum to left and maximum to right and the substract from the arr[i];
// TC-> O(N^2);
// SC-> O(N);

// Optimized Approach 
// USing PRefix sum and Sufix Sum 
// Keep the record of prefix and suffix sum and the get min of both ans substract it from arr[i]
// TC-> O(N);
// SC-> O(2N)~O(N); Two array is being used for Prefix ans suffix sum..


#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    

    return 0;
}
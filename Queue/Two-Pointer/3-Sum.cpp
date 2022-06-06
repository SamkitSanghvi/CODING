// TUF
// Given an Array Find all unique triplets which gives sum = 0
// arr = [-1,0,1,2,-1,-4]
// ->>> = [[-1,-1,2],[-1,0,1]]

// Brute Force
// Using 3 for loop 
// And in Final Loop check the Condition and insert the pair into the set
// TC-> O(n^3 log m) log m is to insert into the set
// SC-> o(m) 


// Optimized 
// Using Two Loops and map
// Using two loops you can get two number and for 3rd number you find the -ve sum of those two number and store into the map 
// TC -> o(n^2 logm) log m is to insert into map
// SC-> O(m + n) m for map and n for vector inside map;

// More Optimized Approach
// Sort the Array and used Two Pointer algorithm
// arr = [-2,-2,-1,-1,-1,0,0,0,2,2,2]
// i = 2;

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    vector<vector<int>> v;

    for(int i=0;i<n-2;i++){
        if(i==0 or (i>0 and arr[i]!=arr[i-1]))
        {
            int lo = i+1;
            int hi=n-1;
            int sum = 0 - arr[i];
            while(lo < hi){
                if(arr[lo] + arr[hi] == sum){
                    v.push_back({arr[i],arr[lo],arr[hi]});
                    // To avoid Duplicate Triplet of the ans;
                    while(lo < hi and arr[lo] == arr[lo+1]) lo++; 
                    while(lo < hi and arr[hi] == arr[hi-1]) hi--;
                    lo++;
                    hi--;
                }
                else if(arr[lo] + arr[hi] < sum) lo++;
                else hi--;
            }
        }
    }

    for(auto i : v){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
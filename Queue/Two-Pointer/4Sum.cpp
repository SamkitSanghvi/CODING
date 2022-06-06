// TUF
// 4 SUM
// Given an Array and target 
// Return the quadruplets sum to target and no duplicate quadraplet allowed

// Brute Force is using 4 for loop (which is not Going to Accepted😂😂) 

// Optimzed Approach
// Sort -> 3 Sum -> Binary Search
// O(N^3 Log N + Nlogn) 


// Another Optimized Approach
//  Two Pointer ---> Binary Search
// 1 1 1 2 2 3 3 4 4 4


#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    

    vector<vector<int>> v;
    sort(arr,arr+n);

    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int target = k - arr[i] - arr[j];
            int lo = j+1;
            int hi = n-1;
            
            while(lo<hi){
                int sum = arr[lo] + arr[hi];
                if(sum < target) lo++;
                else if(sum > target) hi--;
                else{
                    int ele_1 = arr[lo];
                    int ele_2 = arr[hi]; 
                    v.push_back({arr[i],arr[j],arr[lo],arr[hi]});
                    while(lo < hi and arr[lo] == ele_1) ++lo;
                    while(lo<hi and arr[hi] == ele_2) --hi;
                }
            }

            while(j+1 < n and arr[j+1] == arr[j]) ++j;
        }
        while(i+1 < n and arr[i+1] == arr[i]) ++i; 

    }

    for(auto i : v){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}
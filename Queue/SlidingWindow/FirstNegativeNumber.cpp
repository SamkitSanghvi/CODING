// AVP
// First Negative Number in every Window size of K 

//Input 
// arr , size of arr, and K
// 12 -1 -7 8 -15 30 16 28 and k = 3
// When there is No Negative number window size of k then print 0

// Output
// -1 -1 -7 -15 -15 0

// Brute-Force 
// Using two loops outer loop for Traversing Array and Inner loop for traversing k size array 

// Optimized
// Using Sliding Window...

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=0;
    vector<int> ans;

    queue<int> qe;
    while(j<n){
        if(arr[j] < 0)
        qe.push(arr[j]);      

        if(j-i+1 < k)
        j++;

        else if(j-i+1 == k){
            
            if(qe.empty())
            ans.push_back(0);

            else
            ans.push_back(qe.front());

            if(arr[i]==qe.front())
            qe.pop();

            i++;
            j++;
        }


    }

    for(auto i : ans){ 
        cout<<i<<" ";
    }
    return 0;
}
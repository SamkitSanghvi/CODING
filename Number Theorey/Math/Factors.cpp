// KK
// Factors of a Number

// Brute Force
// Run a Simple loop TC-> O(n)

// Optimized Approach
// Check until root of n 
// TC - O(root(n))
// SC - O(root(n))


#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> vc;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0)
        {
            if(n/i == i)
                cout<<i<<" ";
            else{
            cout<<i<<" ";
            vc.push_back(n/i);
            }
        }
    }

    for(int j = vc.size()-1;j>=0;j--){
        cout<<vc[j]<<" ";
    }




    return 0;
}
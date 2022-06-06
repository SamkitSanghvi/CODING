// KK
// Find the all index of the given   element

#include<bits/stdc++.h>
using namespace std;
vector<int>find(int arr[], vector<int>&ans,int t,int i,int n){
    if(i == n) return ans;
    if(arr[i] == t)
        ans.push_back(i);
    return find(arr,ans,t,i+1,n);
}

vector<int> findd(int arr[],int t,int i,int n){
    vector<int> ans;
    if(i == n) return ans;

    // this will containt ans for that function call only
    if(arr[i] == t)
        ans.push_back(i);
    vector<int> ansFromBelow  = findd(arr,t,i+1,n);
    ans.insert(ans.end(),ansFromBelow.begin(),ansFromBelow.end());
    return ans;
}
int main(){

    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> ans;
    // vector<int>dd = find(arr,ans,4,0,n);
    // for(auto i :dd)
    //     cout<<i<<" ";

    vector<int> x = findd(arr,4,0,n);
    for(auto i : x)
        cout<<i<<" ";
    return 0;
}
// AVP
// A 2-D Matrix is Given in Which All Row and Column are Sorted...
// In which we have to find a GIven Element

// We Will Start with Top-Right Column (i=0,j=m-1) (mid)
// Time Complexcity O(n+m);
#include<bits/stdc++.h>
using namespace std;
vector<int> Sorted(vector<vector<int>>arr ,int k,int n,int m){
    int i = 0;
    int j = m-1;
    while(i>=0 and j>=0 and i<n and j<m){
        if(arr[i][j]==k)
            return {i,j};
        else if(arr[i][j] > k)
        j--;

        else
        i++;
    }
    return {-1,-1};
}
int main(){

    int n,m,k;
    cin>>n>>m>>k;

    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        vector<int> x;
        for(int j=0;j<m;j++){
            int r;
            cin>>r;
            x.push_back(r);
        }
        arr.push_back(x);
    }

    vector<int> ans = Sorted(arr,k,n,m);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}
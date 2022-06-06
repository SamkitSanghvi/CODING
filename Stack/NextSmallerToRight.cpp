// AVP
// Next Smallet To Right

#include<bits/stdc++.h>
using namespace std;
vector<int> NSR(int arr[],int n){
    vector<int> ans;
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        if(s.empty())
        ans.push_back(-1);

        else if(!s.empty() and s.top() < arr[i])
        ans.push_back(s.top());

        else if(!s.empty() and s.top() > arr[i]){
            while(!s.empty() and s.top() >= arr[i]){
                s.pop();
            }

            if(s.empty())
            ans.push_back(-1);

            else
            ans.push_back(s.top());
        } 

        s.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    vector<int> ans = NSR(arr,n);
    for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";

    return 0;
}
        
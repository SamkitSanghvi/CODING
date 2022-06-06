// AVP
// Nearest Smallest to Left

#include<bits/stdc++.h>
using namespace std;
vector<int> NSL(int arr[],int n){
    vector<int> temp;
    stack<int> s;

    for(int i=0;i<n;i++)
    {
        if(s.empty())
        temp.push_back(-1);

        else if(!s.empty() and s.top() < arr[i]) 
        temp.push_back(s.top());

        else if(!s.empty() and s.top() >= arr[i]){
            while(!s.empty() and s.top() >= arr[i]) 
            s.pop();

            if(s.empty())
            temp.push_back(-1);

            else
            temp.push_back(s.top());
        } 
        s.push(arr[i]);
    }
    return temp;
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    vector<int> ans = NSL(arr,n);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;


    return 0;
}
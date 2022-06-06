// AVP
// Nearest Greatest to Left
// An array is Given

#include <bits/stdc++.h>
using namespace std;
vector<int> NGL(int arr[],int n){
      vector<int> ans;
    stack<int> s;

    for(int i=0;i<n;i++){
        if(s.empty()){
        ans.push_back(-1);
        }

        else if(s.top() > arr[i] and !s.empty())
        ans.push_back(s.top());

        else if(!s.empty() and s.top() < arr[i] ){
            while(!s.empty() or s.top() < arr[i])
            s.pop();
    
            if(s.empty())
            ans.push_back(-1);

            else
            ans.push_back(s.top());
        }
        s.push(arr[i]);

    }

    // reverse(ans.begin(),ans.end());
    return ans;

}
int main()
{
   int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> ans = NGL(arr,n);
    // cout<<ans<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" "; 
    cout<<endl;

    return 0;
}
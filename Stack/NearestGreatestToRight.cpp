// AVP
// Next Greatest To Right 
// An Array is Given
// input an Array :- 1 3 2 4
// output            3 4 4 -1 

// Traverse From End....
// When Stack is Empty :- Print -1;
// s.top > arr[i] --> s.top()
// s.top() < arr[i] --> pop --->stock Empty
//                          |-->s.top() grwater than arr[i];
#include<bits/stdc++.h>
using namespace std;
vector<int> NGR(int arr[],int n){
    vector<int> ans;
    stack<int> s;

    for(int i=n-1;i>=0;i--){
        if(s.empty()){
        ans.push_back(-1);
        }

        else if(s.top() > arr[i] and !s.empty())
        ans.push_back(s.top());

        else if(!s.empty() and s.top() < arr[i] ){
            while(!s.empty() and s.top() <= arr[i])
            s.pop();
    
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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> ans = NGR(arr,n);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" "; 
    cout<<endl;

    return 0;
}
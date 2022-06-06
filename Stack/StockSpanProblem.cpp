// AVP
// Stock Span Problem
// Input Array of Price
// 100 80 60 70 60 75 85
// 1   1  1  2   1  4  6
//Output :- Consecutive Smaller or Equalt to price

// Finf NGL
#include <bits/stdc++.h>
using namespace std;
vector<int> smaller(int arr[],int n){
    vector<int> ans;
    // int count = 0;
    stack<int> st;
    for(int i=0;i<n;i++){
        if(st.empty())
        ans.push_back(1);

        else if(!st.empty() and st.top() > arr[i])
        ans.push_back(i-(find(arr,arr+n,st.top())-arr));

        else if(!st.empty() and st.top() < arr[i]) {
            while(!st.empty() and st.top() < arr[i])
            st.pop();

            if(st.empty())
            ans.push_back(1);

            else
            ans.push_back(i-(find(arr,arr+n,st.top())-arr));
        }
        st.push(arr[i]);
            
    }
    return ans;

}

// vector<int> smaller(int arr[],int n){
//     vector<int> ans;
//     stack<pair<int,int>> st;
//     for(int i=0;i<n;i++){
//         if(st.empty())
//         ans.push_back(-1);

//         else if(!st.empty() and st.top().first >arr[i])
//         ans.push_back(st.top().second);
 
//         else if(!st.empty() and st.top().first <= arr[i]){
//             while(!st.empty() and st.top().first <= arr[i]);
//             st.pop();

//             if(st.empty())
//             ans.push_back(-1);

//             else
//             ans.push_back(st.top().second);
//         }
//         st.push({arr[i],i});

//     }
//     return ans;
// }
int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = smaller(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
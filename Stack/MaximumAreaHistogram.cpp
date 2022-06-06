// AVP
// Maximuum Area of Histogram
// Input and Array is Given (Height)
// arr[] :- 6  2  5  4  5  1  6
// Output Maximum Area of Histogram

// Approach Find NSR and NSL and then Substract NSL from NSR 
#include <bits/stdc++.h>
using namespace std;
vector<int> NSR(int arr[],int n){
    vector<int> ans;
    stack<pair<int,int>> st;
    for(int i=n-1;i>=0;i--){
        if(st.empty())
        ans.push_back(n);

        else if(!st.empty() and st.top().first < arr[i])
        ans.push_back(st.top().second);

        else if(!st.empty() and st.top().first >= arr[i])
        {
            while(!st.empty() and st.top().first >= arr[i])
            st.pop();

            if(st.empty())
            ans.push_back(n);
            else
            ans.push_back(st.top().second);
        }
        st.push({arr[i],i});
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

vector<int> NSL(int arr[],int n){
    vector<int> ans;
    stack<pair<int,int>> st;
    int seudo = -1;  
    for(int i=0;i<n;i++){
        if(st.empty()){
            ans.push_back(-1);
        }

        else if(!st.empty() and st.top().first < arr[i]) {
            ans.push_back(st.top().second);
        }

        else if(!st.empty() and st.top().first >= arr[i]){
            while(!st.empty() and st.top().first >= arr[i]){
                st.pop();
            }

            if(st.empty())
            ans.push_back(-1);

            else
            ans.push_back(st.top().second);
        }
        st.push({arr[i],i});
    }

    return ans;

}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    vector<int> v1 = NSR(arr,n);
    vector<int> v2 = NSL(arr,n);
    vector<int> width;
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<endl;
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;

    for(int i=0;i<n;i++)
    width.push_back( v1[i] - v2[i] - 1);

    for(int i=0;i<n;i++)
    cout<<width[i];

    cout<<endl;
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans,width[i]*arr[i]);
    }
        cout<<ans<<endl;

    return 0;
}
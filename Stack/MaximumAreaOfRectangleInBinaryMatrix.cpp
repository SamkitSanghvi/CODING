// AVP
// Find Maximun Area of Rectangle in Binary Matrix
// This is the Advance Version of the MAH(Maximum Area of Histogram)

// Suppose 
// book...

#include<bits/stdc++.h>
using namespace std;
vector<int> NSR(vector<int> arr){
    int n = arr.size();
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
vector<int> NSL(vector<int> arr){
    int n = arr.size();
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
int MAH(vector<int> arr){

    vector<int> r = NSR(arr);
    vector<int> l = NSL(arr);

    vector<int> w;
    for(int i=0; i<l.size(); i++)
    w.push_back(r[i] - l[i] - 1);

    int mx = 0;
    for(int i=0;i<l.size();i++)
    mx = max(mx,w[i]*arr[i]);

    return mx;

}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> arr(n,vector<int>(m)); 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    vector<int> v;
    for(int i=0;i<m;i++)
    v.push_back(arr[0][i]);

    int mx = MAH(v);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 0)
            v[j] = 0;

            else
            v[j] += arr[i][j];
        }
        mx = max(mx,MAH(v));
    }

    cout<<mx<<endl;


    return 0;
}
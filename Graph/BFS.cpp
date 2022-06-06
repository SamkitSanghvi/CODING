// Time Complexcity O(n)
// Space Complexcity O(n)
#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(int v,vector<int> adj[]){
    vector<int> bfs;
    vector<int> vis(v+1,0);

    for(int i=1;i<=v;i++){
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int n = q.front();
                q.pop();
                bfs.push_back(n);

                for(auto i : adj[n]){
                    if(!vis[i]){
                        q.push(i);
                        vis[i] = 1;
                    }
                }
            }
        }
    }

    return bfs;
}
int main()
{

    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans = bfs(n,adj);
    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}
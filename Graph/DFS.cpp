// TC O(N+E) N is the time taken for traversing n nodes and e is the for travelling through adjacent node overall 

// SC O(N+E) 
#include<bits/stdc++.h>
using namespace std;
void dfs(int n,vector<int> &vis , vector<int> adj[],vector<int> &storeDfs){
storeDfs.push_back(n);
vis[n] = 1;
for(auto i : adj[n]){
    if(!vis[i]){ 
        dfs(i,vis,adj,storeDfs);
    }
}
}

vector<int> dfsOfGraph(int v,vector<int> adj[]){
    vector<int> storeDfs;
    vector<int> vis(v+1,0);
    for(int i=1;i<=v;i++){
        if(!vis[i]){ 
            dfs(i,vis,adj,storeDfs);
        }
    }
    return storeDfs;
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

    vector<int> ans = dfsOfGraph(n,adj);
    for(auto i : ans){
        cout<<i<<" ";
    }


    return 0;
}
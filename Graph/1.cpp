/*
Graph Representation
n = no of nodes 
m = no of edges 
input n     m (m-lines are follow)
      u     v
*/
// Adjacent Matrix
/*
    Disadvantages :- SC --> O(n*n) 
*/
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;

//     int adj[n+1][n+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u][v] = 1;
//         adj[v][u] = 1;
//     }
//     return 0;
// }


// Adjacent List 
// SC = O(N + 2E)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];
    // vector<pair<int,int>> adj[n+1]  weighted graph
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // cin>>u>>v;  weighted graph
        adj[u].push_back(v);
        // adj[u].push_back({v,wt}); weighted graph
        adj[v].push_back(u);
    }
    return 0;
}
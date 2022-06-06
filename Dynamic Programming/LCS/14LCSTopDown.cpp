/*
        LCS(Longest Common Subsequence)
    Input:- x: abcdgh
            y: abcdefgh
    Output:- abdh is common between two string (4)
    we have to output the length of the Longest Common Subsequence

Subquence :- order not contiguous
substring :- order and contiguous
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string x,y;
    cin>>x>>y;
    
    int n = x.size();
    int m = y.size();
    int dp[n+1][m+1];

    for(int i=0;i<=n;i++)
        dp[i][0] = 0;
    for(int i=0;i<=m;i++)
        dp[0][i] = 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(x[i-1] == y[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    cout<<dp[n][m];
    return 0;
}
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
int dp[1001][1001];
int LCS(string x,string y,int n,int m){  
    if(n ==0 or m ==0){
        return 0;
    }
    if(dp[n][m] != -1)
        return dp[n][m];
    else
    {   if(x[n-1] == y[m-1])
            return dp[n][m] = 1 + LCS(x,y,n-1,m-1);
        else
        return dp[n][m] = max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
    }
        
    
}
int main()
{
    memset(dp, -1, sizeof(dp));
    string x,y;
    cin>>x>>y;
    cout<<"LCS IS "<<LCS(x,y,x.size(),y.size());


    return 0;
}
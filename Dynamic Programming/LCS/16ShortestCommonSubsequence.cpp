/*
    Shortest Common Supersequence
    Two string is Given 
    A:- geek
    B:- eke
    Output :- Merge the 2 string that both the string is come in common string but the length is minimum

    E.g a = AGGTAB
        b = GXTXAYB
        output:- AGGTGXABTXAYB
        Ans :- AGGXTXAYB
        Output:- 9
    
    Approach
    1. First find the Longest common subsequence in the  Given string

*/

#include<bits/stdc++.h>
using namespace std;
int lcs( string X, string Y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + lcs(X, Y, m-1, n-1);
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
int main()
{

    string x,y;
    cin>>x>>y;

    int n = x.size();
    int m = y.size();
    
    int maxLen = lcs(x,y,n,m);
    
    cout<<maxLen<<endl;
    cout<<maxLen +  x.size() - maxLen + y.size() - maxLen<<endl;



    return 0;
}
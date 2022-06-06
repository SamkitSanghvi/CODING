/*
    Longest Common Palindromic SubSequence

    Input String :- agbcba
    o/p = 5 (Length of the longest Palindromic SubSequence)

    Lpngest Palindromic SubSequence :- from both the end it should be same 
    e.g abcba 

    
*/
/*
    Approach
    reverse the given string and pass through tht LCS
    string x :- agbcba
    string revese(x) :- abcbga

    lcs :- abcba;
*/
#include<bits/stdc++.h>
using namespace std;
int lcs(string X, string Y)
{
    int m = X.length(), n = Y.length();
 
    int lookup[m + 1][n + 1];
 
    for (int i = 0; i <= m; i++) {
        lookup[i][0] = 0;
    }
 
    for (int j = 0; j <= n; j++) {
        lookup[0][j] = 0;
    }
 
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1]) {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
            }
            else  {
                lookup[i][j] = max(lookup[i - 1][j], lookup[i][j - 1]);
            }
        }
    }
 
    // LCS will be the last entr in the lookup table
    return lookup[m][n];
}
int main()
{

    string a;
    cin>>a;

    string b;
    for(int i=a.size()-1; i>=0; i--)
        b.push_back(a[i]);
    
    cout<<"Longest Palindromic Subsequence :- "<<lcs(a,b);  

    return 0;
}
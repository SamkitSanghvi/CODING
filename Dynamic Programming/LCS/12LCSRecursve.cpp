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
int LCS(string x,string y,int n,int m){
    if(m == 0 or n == 0){
        return 0;
    }

    if(x[n-1] == y[m-1])
        return 1+LCS(x,y,n-1,m-1);
    else
        return max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
}
int main()
{
    string x,y;
    cin>>x>>y;
    cout<<"LCS IS "<<LCS(x,y,x.size(),y.size());


    return 0;
}
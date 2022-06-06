    /*
        LCS --> 2 String ---> Optimal Then Think about LCS
        I/P Q O/P
    */
/*
    Edit Distance is Similar Question (LeetCode)
    Minimum No Of Insertion and Deletion to convert String A to B 

    Input :- 2 String is Given
    Convert a--->b with minimum no of insertion and deletion

    a : heap
    b : pea

    pea---> insertion 1 (p),Deletion 2(h,p)

    Output :- No of insertion and deletion
*/

/*
    Approach

    a ----> LCS -----> b
    heap-----> ea (2 Deletion) ------> pea (1 Insertion)
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
    string a,b;
    cin>>a>>b;
    int m = a.size();
    int n = b.size();

    cout<<"No of Deletion "<< a.length() - lcs(a,b,m,n)<<endl;
    cout<<"No of Insertion "<< b.length() - lcs(a,b,n,m)<<endl;
    return 0;

}
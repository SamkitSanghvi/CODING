/*
        Unbounded Knapsack

In Knapsack Multiple Occurence of Same item is Not Allowed 

But In Unbounded Knapsack Multiple Occurence of Same item is allowed...


if you don't want item then process on n-1;
if you want item then process on n only...

*/




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; // Enter the size of knapsack
    cin >> n;

    int wt[n], val[n]; // weight array

    for (int i = 0; i < n; i++)
        cin >> wt[i]; // enter the weight of each item

    for (int i = 0; i < n; i++)
        cin >> val[i]; // enter the value of each item

    int W; // Enter Total capacity of Knapsack
    cin >> W;  

    int dp[n+1][W+1];

    // Initiliaze the 1st row ans column
    // Replace i with n and W with j in Recursive Solution
    for(int i=0;i<=W;i++)
    dp[0][i] = 0;

    for(int i=0;i<=n;i++)
    dp[i][0] = 0;


    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(wt[i-1] <= j)  
                dp[i][j] = max(val[i-1] + dp[i][j-wt[i-1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }





    return 0;
}
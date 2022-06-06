// Knapsack using Memoization
// T.C-->  O(N*W)
// S.C --> O(N*W)
/*
    Example
    wt = 1,3,4,5
    val = 1 4 5 7
    W = 7

    output -> 9
*/
#include <bits/stdc++.h>
using namespace std;
static int dp[100][100]; // acc to constrain;
// dp[N][W] n rows and W column

int kanpsack(int wt[], int val[], int W, int n)
{
    if (n == 0 or W == 0)
        return 0;

    if (dp[n][W] != -1)
        return dp[n][W];

    if (wt[n - 1] <= W)
    {

        return dp[n][W] = max(val[n - 1] + kanpsack(wt, val, W - wt[n - 1], n - 1), kanpsack(wt, val, W, n - 1));
    }

    else if (wt[n - 1] > W)
        return dp[n][W] = kanpsack(wt, val, W, n - 1);
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n; // Enter the size of knapsack
    cin >> n;

    int wt[n], val[n]; // weight array

    for (int i = 0; i < n; i++)
        cin >> wt[i]; // enter the weight of each item

    for (int i = 0; i < n; i++)
        cin >> val[i]; // enter the value of each item

    int W; // Enter Total capacity of Knapsack
    cin >> W;
    cout << kanpsack(wt, val, W, n);

    return 0;
}
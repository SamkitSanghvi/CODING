/*
    Coin Change Problem (Maximum no of ways)
    Input :- coin array :- [1,2,3]
    sum = 5;

    output :- return the maximum no of ways.. 5
    [1,1,1,1,1],[2,3],[1,1,3],[1,1,1,2],[1,2,2]
*/

/*
    Similar to Count the no of subset (4).....
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n; // entre the size of n

    int coin[n];
    for(int i=0; i<n; i++) 
    cin>>coin[i];

    int sum;
    cin>>sum;

    int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
    dp[0][i] = 0;

    for(int i=0;i<=n;i++)
    dp[i][0] = 1;

    for(int i=1;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(coin[i-1] <= j)
            dp[i][j] = dp[i-1][j] + dp[i][j-coin[i-1]];

            else
            dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[n][sum];


    return 0;
}
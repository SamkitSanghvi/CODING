// Important Question....


/*
                Coin Change 2( Min no of Coins )
Input :- coint [];
sum :- 5;

output :- return the Minimun no of coins.. 2 (2,3)
[1,1,1,1,1],[2,3],[1,1,3],[1,1,1,2],[1,2,2]
*/

/*
        Initilization 
If coint array is empty and we have sum 1 then we need Infinite no of coins to make sum 1 so first row will be initialized with INT_MAX - 1

We have to initiliaze 2nd row also..
2nd row we have to initiliaze the minimum no coins 
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

    // int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
    dp[0][i] = INT_MAX -1;

    for(int i=1;i<=n;i++)
    dp[i][0] = 0;

    for(int i=1;i<=sum;i++)
    {
        if(i%coin[0] == 0)
        dp[1][i] = i/coin[0];

        else
        dp[1][i] = INT_MAX - 1;
    }

    for(int i=2;i<=n;i++){
        for(int j=1;j<=sum;j++){ 
            if(coin[i-1] <= j)
            dp[i][j] = min(1 + dp[i][j-coin[i-1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];

        }
    }

    cout<<dp[n][sum];

    return 0;
}


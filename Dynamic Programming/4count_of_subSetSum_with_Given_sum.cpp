/*
    Count of Subset Sum with Given Sum
Input :- arr = [2,3,5,6,8,10] and sum = 10*arr
Output:- Count the total Number of Subset Sum with given Sum 
Note :- (In Subset_Sum we have to only find that subset with given sum is Present or Not)
Output:- {10},{2,8},{2,5,3} --> 3 (return int)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n; // Enter the size of Array 

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];    //Enter the Value in Array
    
    int sum;
    cin>>sum; // Enter the Sum 

    int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
    dp[0][i] = 0;

    for(int i=0;i<=n;i++)
    dp[i][0] = 1;

    for(int i=1;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(arr[i-1] <= j)
            dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];

            else
            dp[i][j] = dp[i-1][j];
        }
    }

    cout<<dp[n][sum]<<endl;

    return 0;
}
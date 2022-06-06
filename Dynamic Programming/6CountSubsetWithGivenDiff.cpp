/*
        Count Number of Subset With Given Difference
Input :- arr = [1,1,2,3] and diff = 1 
output :- return the count (3) --> (1,3) and (1,2)
                                   (1,3) and (2,1)
                                   (1,1,2) and (3)
*/

/*
    s1 - s2 = diff
    s1 + s2 = sumoFarray
----------------------------
    s1 = (diff + sumoFarray) / 2;
*/


#include<bits/stdc++.h>
using namespace std;
vector<bool> lat_row(int arr[],int n,int sum){
    bool dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
        dp[0][i] = false;
    
    for(int i=0;i<=n;i++)
        dp[i][0] = true;

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){ 
            if(arr[i-1] <= j)
            dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];

            else
            dp[i][j] = dp[i-1][j];
        }
    }

    vector<bool> ans;
    for(int i=0;i<sum+1;i++)
        ans.push_back(dp[n][i]);
    return ans;
}

int countSubset(int arr[],int n,int sum){
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

    return dp[n][sum];
}

int main()
{

    int n;
    cin>>n; //Entre the size of Array

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];  // Entre the value of Array
    
    int diff;
    cin>>diff;

    int sum = 0;
    for(int i=0; i<n; i++)
    sum+=arr[i];

    sum = (sum + diff)/2;
    cout<<countSubset(arr,n,sum);

    return 0;
}
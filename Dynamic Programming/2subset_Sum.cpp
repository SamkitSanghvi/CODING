/*
                Subset Sum Problem 
Input :- arr = [2,3,4,2,8,4] and sum = 11
output :- find subset whose sum is equal to given sum (11)
Note :- we have to return true/false(if it is present or not) [We Don't have to print the subset]
output :- True (In above Example )
*/

/*
            Similarities between knapsack and subset sum 
1 array is given and the Sum is Given and we have a choice for every element 
*/

#include<bits/stdc++.h>
using namespace std;

// Recursive Code
// bool check_subset(int arr[],int sum,int n){
//     if(n == 0 and sum == 0)
//         return true;
//     else if(n == 0)
//         return false;
//     else if(sum == 0)
//         return true;
//     else{
//         if(arr[n-1] <= sum)
//             return check_subset(arr,sum-arr[n-1],n-1) || check_subset(arr,sum,n-1);
//         else
//             return check_subset(arr,sum,n-1);
//     }
// }


int main()
{

    int n;
    cin>>n; // Enter the size of Array 

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];    //Enter the Value in Array
    
    int sum;
    cin>>sum; // Enter the Sum 

    // cout<<check_subset(arr,sum,n)<<endl;
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

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;
    cout<<dp[n][sum];

    return 0;
}
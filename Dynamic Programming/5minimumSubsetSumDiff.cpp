
/*
    Minumum Subset Sum Difference
Input :- arr=[1,6,11,5]
Op :- 1 [1,6,5] - [11] = 1

return the difference of the sum of the subset i.e it is Minimum
*/


/*
    Extreme range of the subset will be 0 or whole array
    minimize the (range - 2s1) instead of s1 - s2 (s2 = range - s1)
    s1 will always be lower and (range - 2s1) will alwaya be absloute
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
int main()
{

    int n;
    cin>>n; //Entre the size of Array

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];  // Entre the value of Array
    
    int sum = 0;
    for(int i=0; i<n; i++) sum += arr[i];
    vector<bool> s1 = lat_row(arr,n,sum);
    int ans = INT_MAX;

    for(int i=0;i<s1.size()/2;i++){
        if(s1[i] == true){
            ans = min(ans,(sum - (2*i)) );
        }
    }

    cout<<ans<<endl;

    return 0;
}
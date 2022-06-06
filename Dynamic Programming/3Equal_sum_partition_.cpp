/*
    Equal Sum Partition
Input :- arr = [1,5,11,5]
Output T/F
divide an array into 2 parts such that sum of the both array would be same
*/

/*
    Approach
Same as Subset_sum
if the sum of the is array is even then do subset sum
else if the sum of the array is odd return fasle;
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n; // Enter the size of Array

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // Enter the Value in Array

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    if (sum & 1)
        cout << "False";

    else
    {
        sum = sum / 2;
        bool dp[n + 1][sum + 1];
        for (int i = 0; i <= sum; i++)
            dp[0][i] = false;

        for (int i = 0; i <= n; i++)
            dp[i][0] = true;

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < sum + 1; j++)
            {
                if (arr[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];

                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        if(dp[n][sum] == true)
            cout<<"TRUE"<<endl;
        else
            cout<<"FALSE"<<endl;
    }

    return 0;
}
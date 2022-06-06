// AVP
// Variable Size Sliding Window

// Longest Subarray of the Size k
// Input :- array and k
// 4 1 1 1 2 3 5 
// k = 5;

// Ps:- Longest subarray of Sum k

// Output :- The Size of the Longest subarray with sum k


// This below Approach Only Work when there is Only Positive numbe in the array


// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int n,k;
//     cin>>n>>k;

//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
    
//     int i = 0;
//     int j = 0;
//     int ans = 0;
//     int sum = 0;
//     
//     while(j<n){
//         sum+=arr[j];

//         if(sum < k)
//         j++;

//         if(sum == k)
//         {
//             ans = max(ans,(j-i+1));
//             sum  -=  arr[i];
//             i++;
//             j++; 
//         }

            // if(sum > k){
            //     while(sum <= k){
            //         sum -= arr[i];
            //         arr.pop();
            //     }
            // }
            
//     }

//     cout<<ans<<endl;

//     return 0;
// }


// When there is Both Positive and Negative Number in the Array
#include<bits/stdc++.h>
using namespace std;
int main(){ 


    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int,int> mp;
    int sum = 0,maxLen = 0;

    for(int i=0; i<n; i++){ 
        sum+= arr[i];

        if(sum==k)
        maxLen= max(maxLen,i+1);

        if(mp.find(sum)==mp.end())
        mp[sum] = i;

        if(mp.find(sum-k)!=mp.end()){
            maxLen=max(maxLen,i - mp[sum-k]);
        }
    }

    cout<<maxLen<<endl;

    return 0;
}
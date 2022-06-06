// KK
// Find unique number in array if all number apperar 3 times except 1 number
// [2,2,3,2,7,7,8,7,8,8]
// ans is 3

        // 1 0
//         1 0
//         1 1
//         1 0
//       1 1 1
//       1 1 1
//     1 0 0 0
//       1 1 1
//     1 0 0 0
//     1 0 0 0
// ----------------
//      3 3 7 4   % 3 ---> 0011 -> 3
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int ans = 0;
    int x,sum;
    for(int i=0;i<n;i++){
        sum = 0;
        x = 1<<i;
        for(int j=0;j<n;j++){
            if(arr[j] & x)
                sum++;
        }

        if(sum %3 !=0)
        ans|= x;
    }

    cout<<ans<<endl;

    return 0;
}
// KK
// Print Prime number between 1 to n
// n =40
// 2 3 4 5 6 7 8 9 10
// 11 12 13 14 15 16 17 18 19 20
// 21 22 23 24 25 26 27 28 29 30
// 31 32 33 34 35 36 37 38 39 40


// n/2 + n/3 + n/5 + n/7 + n/p... (for inner loop)
// Log(log n)
// O(N * log(log n))

// SC O(N)
#include<bits/stdc++.h>
using namespace std;
// false in array means number is prime
void SieveOfErathonies(int n,bool arr[]){
    for(int i=2;i*i<=n;i++){
        if(!arr[i]){
            for(int j=2*i;j<=n;j+=i)
                arr[j] = true;
        }

    }

    for(int i=2;i<=n;i++)
    {
        if(arr[i] == false)
            cout<<i<<" ";
    }

}
int main(){

    int n;
    cin>>n;
    bool prime[n+1];
    // cout<<prime[0];
    SieveOfErathonies(n,prime);

    return 0;
}
// KK
// Find Nth Magic Number
// 1 = 0 0 1 ->    5 (take power of 5 and start from 1)
// 2 = 0 1 0 ->    25 
// 3 = 0 1 1 ->    30 (5+25)
// 4 = 1 0 0 ->   125
// Amazone
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum = 0;
    int i =5;
    
    // Complexcity will be logn
    while(n>0){
        int last = n&1;
        n = n>>1;
        sum+=last*i;
        i*=5;
    }
    cout<<sum<<endl;

    return 0;
}



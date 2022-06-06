// KK
// Find the ith bit of a number 

// Find 5th bit 
// 1 0 1 1 0 1 1 0
// 8 7 6 5 4 3 2 1

// 1 0 1 1 0 1 1 0
// 0 0 0 1 0 0 0 0  ->> this is known as mask

// if you notice there are n-1 bit in left therefore we can use left shift operator
// n&(1<<n-1)
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    cout << (n & (1<<k-1)) ;
    
    return 0;
}

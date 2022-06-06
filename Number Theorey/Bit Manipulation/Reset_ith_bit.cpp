// KK
// Reset the ith bit (reset means to make it 0) Use and with 0

// 1 0 1 0 1 1 0
// 1 1 0 1 1 1 1 -> to find mask 

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;

    cout << n &&  (~(1<<k-1));

    return 0;
}

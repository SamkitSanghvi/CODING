// KK
// Count no of Set bit
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    cout<<bitset<16>(n)<<endl;
    int count = 0;
    while(n>0){
        if(n&1 == 1)
            count++;
        n = n >> 1;
    }

    cout<<count<<endl;

    return 0;
}
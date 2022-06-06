// KK
// Calculate A^B
// 3^6 = 3*3*3*3*3*3 
// TC = O(B)

// 3^110 --> 3^4 * 3^2 * 3^0
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    cin>>a>>b;

    int ans = 1;

    while(b>0){
        if(b&1 == 1)
        ans*=a;

        a*=a;
        b = b >> 1;
    }

    cout<<ans<<endl;

    return 0;
}
// KK
// No of digit in Base b
// find no of digit in base b
// formula 
// log b a = x;
// a = b^x;
// log 2 6 = x
//  6 = 2^x

// no of digit in base b of no n == int(log b n) + 1

#include<bits/stdc++.h>
using namespace std;
int main(){

    int number,base;
    cin>>number>>base;

    int ans = (int) (log(number) / log(base)) + 1;
    cout<<ans<<endl;

    return 0;
}
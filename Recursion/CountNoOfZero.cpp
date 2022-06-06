// KK
#include<bits/stdc++.h>
using namespace std;
int coo(int n,int cnt){
    if(n==0)
        return cnt;
    int rem = n%10;
    if(rem == 0)
        return coo(n/10,++cnt);
    else
        return coo(n/10,cnt);
}
// int count(int n){
//     return coo(n,0);
// }

int main(){

    cout<<coo(12040,0);
    return 0;
}
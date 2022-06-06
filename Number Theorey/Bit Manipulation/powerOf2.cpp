// KK
// Given a number find out power of 2 or not

// if there is only 1 bit having value 1 that number is called power of 2 
// 10000 , 001000 are the power of 2
// 110000, 00011 are not the power of 2
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int count = 0;
    while(n>0){
        if(n&1 == 1)
            count++;
        n = n >> 1;
    }

    if(count > 1)
        cout<<"Not the power of 2";
    else
        cout<<"Power of two";

    return 0;
}

// Another Method 
// note 
// if(n==0) return false
// if(n & (n-1)) == 0 It is Power of 2

// 1 0 0 0 
// 0 1 1 1
// KK
// Find the Given number is Odd or Even without Modulo Operator

// When you & any number with remain same 
// Last number in the binary representation determine odd or even 
// 10011 -> 19 1001 1-> this last digit is not the power of 2 

// 100101
// 000001
// ------
// 000001
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n&1 == 1)
        cout<<"ODD"<<endl;
    else cout<<"Even"<<endl;

    return 0;
}
// KK
// Reverse a Number
// 1234 ---> 4321

#include<bits/stdc++.h>
using namespace std;
int sum = 0;

void reverseANumber(long long int n){

    if(n == 0) 
        return;
    
    int rem = n%10;
    sum = sum * 10 + rem;
    reverseANumber(n/10);
}
void reverseANumber2(int n,int base){ 
    
}
int main(){

    reverseANumber(1234);
    cout<<sum<<endl;


    return 0;
}
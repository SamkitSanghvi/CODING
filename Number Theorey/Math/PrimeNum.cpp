// KK
// Check Given number is Prime or NotPrime
// Brute force is to check
// for 1 to n 

// Optimzed is to check 1 to root(n) TC:- O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1)
        return false;
    
    for(int i=2;i*i<=n;i++){
        if(n%i == 0)
            return false;
    }

    return true;
}
int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<i<<" "<<isPrime(i)<<endl;
    }
    return 0;
}
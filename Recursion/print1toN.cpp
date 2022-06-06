// AVP
// Print 1 to n 

// Base Condition 
// 1. Smallest Valid input 
            // or
// 2.Invalid Largest Output
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==1) 
    cout<<1<<" ";

    if(n<=0)
    return;
    
    if(n>1){
    cout<<n<<" ";
    print(--n);
    }
    
}
int main()
{
    int n;
    cin>>n;

    print(n);


    return 0;
}
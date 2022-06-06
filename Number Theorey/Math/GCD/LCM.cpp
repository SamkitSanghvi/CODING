// KK
// LCM 
// lcm(a,b) :- min number divisible by both a and b 
// a,b -> d = gcd(a,b)
// f = a/d and g = b/d;
// a = fd and b = gd 
// lcm(a,b) = lcm (fd,gd)
// LCM = (a*b) / hcf(a*b)
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==0) return b;
    return (b%a,a);
}
int LCM(int a,int b){
    return (a*b)/(gcd(a,b));
} 
int main(){

    cout<<LCM(2,7);

    return 0;
}

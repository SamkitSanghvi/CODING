// KK
// Find a Sqrt of a Number 

#include<bits/stdc++.h>
using namespace std;
double multiply(double mid ,int n){
    double ans = 1.0;
    for(int i=1;i<=n;i++)
        ans = ans * mid;
    return ans;
}
double sqrt(int n){
    double lo = 1;
    double hi = n;
    double ep =1e-6;
    while((hi-lo) > ep){
        double mid =  (hi+lo)/2.0;
        if(multiply(mid,2) < n)
            lo = mid;
        else 
            hi = mid;
    }
    return lo;

}
int main(){

    int n;
    cin>>n;
    cout<<sqrt(n)<<endl;

    return 0;
}
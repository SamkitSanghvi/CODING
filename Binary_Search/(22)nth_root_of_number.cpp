// TUF
// Two intger is given n,m find nth root of number m
// For Eg. n=2 , m=4 --> find square root of 4 ---> 2
// For E.g n=3 , m=27 --> find cube root of 27 ---> 3
// For E.g n=4 , m=15 ---> find 4th root of 15 ---> 1.96798

// Binary Search in also used for motonically increasing or decreasing pattern 

#include <bits/stdc++.h>
using namespace std;
double multiply(double number, int n) {
    double ans = 1.0;
    for(int i = 1;i<=n;i++) {
        ans = ans * number;
    }
    return ans; 
}

void getNthRoot(int n, int m) {
    double low = 1;
    double high = m;
    double eps = 1e-6; 
    
    while((high - low) > eps) {
        double mid = (low + high) / 2.0; 
        if(multiply(mid, n) < m) {
            low = mid; 
        }
        else {
            high = mid; 
        }
    }
    
    cout <<n<<"th root of "<<m<<" is "<<low<<endl; 
    
}
int main() {
	int n=3, m=27; 
	getNthRoot(n, m); 
	return 0;
}

// Time Complexcity of Finding is Nth Root is 
// TIme Complexcity :- [ N * log(M*10^d)]

// N :- Multiply Function loop n times times
// M :- The number of which root is to be fined
// d(Decimal) :- Up to Which Decimal we have to Find
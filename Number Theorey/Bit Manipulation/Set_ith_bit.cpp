// KK
// Set ith bit

// set the ith bit of a number (set means to make it 1) use or with 1

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    cout << n||(1<<k-1);
}
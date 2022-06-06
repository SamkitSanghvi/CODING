// TUF
// Sum of First N Numbers
// Input :- 3
// Output:- 6

#include<bits/stdc++.h>
using namespace std;
int Sum(int x){

    if(x==0)
    return 0;

    return x + Sum(x-1);

}
int main(){

    int n;
    cin>>n;
    cout<<Sum(n);
    return 0;
}
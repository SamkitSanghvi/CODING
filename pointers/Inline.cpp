// CH 30
// Inline Function
// Inline function are used to reduce the function call overhead
// Terteary OPerator
// condition ? true : false

// Inline function :- If the body of the function is of 1 line then make it inline
// 2-3 line -> depende on complier 
// Before compile time body of the function get there where a function is called
// No Extra Memory usage is required
// No Function call overhead
#include<bits/stdc++.h>
using namespace std;

void func(int a,int b){
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}
inline int getmax(int& a,int& b){
    return (a>b)?a:b;
}
int main(){

    func(3,4);
    int a = 1,b=3;
    int ans =0;
    cout<<getmax(a,b)<<endl;
    a = a+3;
    b = b + 2;
    cout<<getmax(a,b)<<endl;



    return 0;
}
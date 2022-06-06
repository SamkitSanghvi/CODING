// CH
// Reference Variable :- Same Memory and different names

// Why ??

#include<bits/stdc++.h>
using namespace std;
// int& fun(int a){ // Bad Pratice some time that memory return garbafe beacause these are local variable
//     int num = a;
//     int &ans = num;
//     return ans;
// }

int* fun1(int a){ // Bad Pratice
    int * ptr = &a;
    return ptr;
}

void update(int &n){
    n++;
}
int main(){

    // int i = 5;
    // int &j = i; // creating Reference Variable

    // int *p1 = &i;
    // int *p2 = &j;

    // cout<<p1<<" "<<p2<<endl;
    // i++; // both i and j value will be updated 
    // cout<<i<<" "<<j<<endl;

    int n = 5;
    cout<<"Before "<< n <<endl;
    update(n);
    cout<<"After "<<n<<endl;

    cout<<fun1(1)<<endl; 

    return 0;
}
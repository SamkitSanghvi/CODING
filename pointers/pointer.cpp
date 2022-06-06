// CH
// Pointer 

#include<bits/stdc++.h>
using namespace std;
int main(){ //

    // int num = 5;
    // cout<<num<<endl;
    
    // // Address of Operator - &
    // cout<<"Address of Operator"<<endl;
    // cout<<&num<<endl;

    // num = num + 5;
    // cout<<"Address of Operator"<<endl;
    // cout<<&num<<endl;

    // // Pointer Store the Address
    // // * - dereference operator
    // int *n = &num;
    // cout<<n<<endl; // print address
    // cout<<*n<<endl; //print value of that address
    // cout<<&n<<endl; // print address

    // num ++;
    // cout<<*n<<endl;
    // double d = 3.3;
    // double *p2 = &d;
    // cout<<sizeof(num)<<endl;
    // cout<<sizeof(n)<<endl;
    // cout<<sizeof(d)<<endl;
    // cout<<sizeof(p2)<<endl;
    
    // int x = 4;
    // int *p3 = 0; //Segmentation Fault 
    // p3 = &x;

    // cout<<p3<<endl;
    // cout<<*p3<<endl;

    int num = 5;
    int *a = &num;
    (*a)++;
    cout<<num<<endl;
    
    // Copying a pointer
    int *b = a;
    cout<<a<<" "<<b<<endl;
    cout<<*a<<" "<<*b<<endl;
    
    // important Concept
    int i = 5;
    int *t = &i;
    // cout<< (*t)++<<endl;
    cout<<t<<endl;
    t = t+1;
    cout<<*t<<endl;
    cout<<t<<endl;

    return 0;
}
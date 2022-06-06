// CH


// arr[i] = *(arr + i)
//          or
// i[arr] = *(i + arr);
// above both statement are same
// you can't change the table of content table 

#include<bits/stdc++.h>
using namespace std;
int main(){

    // // * - dereference operatoe;
    // int arr[10] = {3,45,5}; 
    // cout<<arr<<endl;
    // cout<<*arr + 1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<1[arr]<<endl; // imp....

    // int *p = &arr[0];
    // // address
    // cout<<arr<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // // value
    // cout<<*p<<endl;

    int a[10] = {1,2,3,4};
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;

    cout<<"dd"<<endl;
    int *p = &a[0];
    cout<<p<<endl;
    cout<<&p<<endl; // adddress of pointer p;
    cout<<*p<<endl;

    

}
// Static vs Dynamic allocation 
// When you are using Stack Memory you are using Stack allocation
// int n;
// cin>>n;
// int arr[n]; // Example of stack allocation

// When you are using Heap Memory you are using Dynamic allocation 
// new char; // this will return the address
// char * ch = new char // example of dynamic allocation


// int * i    = new int 
// 4byte        4 byte in heap
// in stack
// Total 8 byte 
#include<bits/stdc++.h>
using namespace std;
int getSum(int *arr){
    int sum = 0;
    for(int i=0;i<5;i++) sum += arr[i];
    return sum;
}
int main(){

    // char a = '2';
    // cout<<sizeof(a)<<endl;

    // char *ch = &a;
    // cout<<sizeof(ch)<<endl;

    int n;
    cin>>n;
    int* arr = new int[n]; // 4 + 20 = 24byte
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<getSum(arr);
    
    while(true){
        int *ptr = new int; 
        // in that after every loop stack memory will be cleared but heap memory will be not cleared
        delete ptr;
        // delete []arr // for Array Deletion
    }    


    return 0;
}


// Difference Between 
// Static       vs          Dynamic

// int arr[50]              int *arr = new int[50];
// 200 byte                 4 + 200 = 204 byte

// static allocation        Dynamic allocation 
// automatic cleared        will have to do manually with the use of delete keyword
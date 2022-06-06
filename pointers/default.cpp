// CH 30
// Default arguments --> start from rightmost argument
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int start=0){
    for(int i=start; i<n;i++)
        cout<<arr[i]<<" ";
}
int main(){

    int arr[5] = {1,2,3,4,5};
    print(arr,5);

    return 0;
}
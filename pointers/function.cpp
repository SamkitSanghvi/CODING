// CH
// Function with Pointers

#include<bits/stdc++.h>
using namespace std;
void pr(int *p){
    cout<<*p<<endl;
}
void update(int *p){ //
    // p = p + 1;
    // cout<<"Inside "<<p<<endl;

    *p = *p + 1;  // Value can be upgraded 
} 

// int arr[] is the pointer not the whole array
int getSum(int arr[],int n){

    cout<<arr<<endl;
    // cout<<endl<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += i[arr];
    }

    return sum;
}
void fun(int a[]) {
    cout << a[0] << " ";
}

// int main() {
    
// }
int main(){

    // int x = 5;
    // int *p = &x;
    // cout<<*p<<endl;
    // pr(p);
    // update(p);
    // cout<<*p<<endl;


    int arr[5] = {1,2,3,4,4};
    // cout<< getSum(arr,5);

    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
    return 0;
}
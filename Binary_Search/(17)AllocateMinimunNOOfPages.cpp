// AVP
// Find the Minimum No of Pages 
// Input :- One Array and One Integer
// Output :- To return an Integer

// Array is Define a Book and ith of Array is definnf no of Pages in book
// and k is definng no of student 

// Restriction
// At least one book is to given to one student
// We cant Allow one book to 2 Student 
// We have to give book in Continuous Order

// We have to give Minimize the Maximum no of pages....
#include<bits/stdc++.h>
using namespace std;
bool isValid(int arr[],int n,int k,int mid){
    int stu = 1;
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
        if(sum > mid){
            stu++;
            sum = arr[i];               
        }

        if(stu > k)
        return false;
    }

    return true;


}
int MinimumPages(int arr[],int n,int k){
    
    if(n<k)
    return -1;

    int End = 0;
    for(int i = 0; i < n;i++)
    End += arr[i];

    int start = arr[n-1];
    int res = -1;
    while(start <= End)
    {
        int mid = start + ((End - start)/2);
        if(isValid(arr,n,k,mid)==true){
            res = mid;
            End = mid - 1;
        }

        else 
        start = mid + 1;
    }

    return res;

}
int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<MinimumPages(arr,n,k)<<endl;
    return 0;
}
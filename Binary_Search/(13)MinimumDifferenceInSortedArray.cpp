// AVP
// An array an Key is Given You have to find the Minimum Difference of the Key and the Given Array Value 
// If the Key is Present Return 0;
// Otherwise find the Greatest Element Smaller than the Key
// And Smallest Element Greater Than the key 
// Compare both value after Substracting from the key and return small....
int Floor(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    int res = 0;
    while(low<=high){
        int mid = low + ((high-low)/2);
        
        if(arr[mid]==x){
            return arr[mid];
        }
        else if(x < arr[mid])
        high = mid - 1;

        else{
            low = mid + 1;
            res = arr[mid]; 
        }
    }
    return res;
}

int Ceil(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    int res = 0;
    while(low<=high){
        int mid = low + ((high-low)/2);
        
        if(arr[mid]==x){
            return arr[mid];
        }
        else if(x <= arr[mid]){
            high = mid - 1;
            res = arr[mid];
        }
        
        else
        low = mid + 1;
    }
    return res;
}

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a = Floor(arr,n,x);
    int b = Ceil(arr,n,x);
    int ans = min(abs(a-x),abs(b-x));
    cout<<a<<" "<<b<<endl;
    cout<<ans<<endl;


}
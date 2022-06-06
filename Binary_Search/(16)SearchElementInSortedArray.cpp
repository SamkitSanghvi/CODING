// TUF
    // Find the element in the Sorted Roated Array 
    // For e.g [4,5,6,7,0,1,2]
    // Find 0
    // Ansewer :- index 4

    // Naive approach
    // Linear Search :- Time Complexcity O(n)

    // Upgraded approach
    // Binary switch :- Time Complexcity O(Log(n))

#include<bits/stdc++.h>
using namespace std;
int getElement(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    
    while(low <= high){
        int mid = low + ((high-low)/2);
        if(arr[mid] == x) return mid;

        if(arr[low] <= arr[mid] ){
            if(x >= arr[low] and x<=arr[mid])
            high = mid-1;
    
            else 
            low = mid+1;
        }

        else{
            if(x >= arr[mid] and x<=arr[high]){
                low = mid+1;
            }
            else
                high = mid - 1;
            
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<getElement(arr,n,x)<<endl;
    return 0;
}



